#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "QMessageBox"
#include "form.h"
#include <QSyntaxHighlighter>
#include <QTextCharFormat>
#include <QTextCursor>
#include "highlighter.h"
#include <QFile>
#include <QWidget>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);

    setupEditor();

    setCentralWidget(ui->textEdit);
}

void MainWindow::setupEditor()
{

    QFont font;
    font.setFamily("Courier");
    font.setFixedPitch(true);
    font.setPointSize(16);

    ui->textEdit->setFont(font);

    highlighter = new Highlighter(ui->textEdit->document());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    mFilename = "";
    ui->textEdit->setPlainText("");
    QFile file("mainwindow.h");
    if (file.open(QFile::ReadOnly | QFile::Text))
        ui->textEdit->setPlainText(file.readAll());
}

void MainWindow::on_actionOpen_triggered()
{
    QString file = QFileDialog::getOpenFileName(this,"open a file");
    if(!file.isEmpty()){
        QFile sFile(file);
        if(sFile.open(QFile::ReadOnly | QFile::Text)){
            mFilename = file;
            QTextStream in (&sFile);
            QString text = in.readAll();
            sFile.close();


            ui->textEdit->setPlainText(text);
        }
    }
}

void MainWindow::on_actionSave_triggered()
{
    QFile sFile(mFilename);
    if(sFile.open(QFile::WriteOnly | QFile::Text)){
        QTextStream out(&sFile);
        out << ui->textEdit->toPlainText();
        sFile.flush();
        sFile.close();
    }
    else
    {
        QMessageBox::warning(this,"ارور", "هیچ فایل انتخاب نشده است");
    }
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionSave_As_triggered()
{
    QString file = QFileDialog::getSaveFileName(this,"open a file");
    if(!file.isEmpty()){
        mFilename = file;
        on_actionSave_triggered();
    }
    else
    {
        QMessageBox::warning(this,"ارور", "هیچ فایل انتخاب نشده است");
    }
}

void MainWindow::on_actionBackground_color_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "<body bgcolor =\"\">";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_actionFirst_code_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "<html>\n"
            "  <head>\n"
            "<title>welcome</title>\n"
            "   </head>\n"
            "   <body>\n"
            "\n"
            "   </body>\n"
            "</html>";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_4_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "<b>your text </b>";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_5_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "<u> your text </u>";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_6_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "<font size=\"\"> your text</font>";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_2_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "<font color=\"\">your text</font>";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_7_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "<img src=\"     \"> ";
    ui->textEdit->setPlainText(text);
}


void MainWindow::on_textEdit_destroyed()
{

}

void MainWindow::on_action_3_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "&amp;";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_8_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "&copy;";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_9_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "&reg;";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_10_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "&trade;";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_11_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "&lt;";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_12_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "&gt;";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_13_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "&dagger;";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_14_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "<a href="         ">متن لینک</a>";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_actionIp_Logger_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "<?php \n $v_ip = $REMOTE_ADDR;\n $v_date = date(\"l d F H:i:s\"); \n $fp = fopen(\"ips.txt\", \"a\");\n fputs($fp, \"IP: $v_ip - DATE: $v_date\n\n\");\n fclose($fp);\n?>";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_actionDownload_File_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "set_time_limit(0); \n $file_path='files/'.$_REQUEST['filename']; \n output_file($file_path, ''.$_GET['filename'].'', 'text/plain'); \n $size = filesize($file); \n $known_mime_types=array(\"pdf\"\" => \"application/pdf\",\" \n \"txt\" => \"text/plain\", \n \"html\" => \"text/html\",\n \"exe\" => \"application/octet-stream\", \n \"zip\" => \"application/zip\", \n \"doc\" => \"application/msword\", \n \"xls\" => \"application/vnd.ms-excel\", \n \"ppt\" => \"application/vnd.ms-powerpoint\", \n \"gif\" => \"image/gif\", \n \"png\" => \"image/png\", \n \"jpeg\"=> \"image/jpg\", \n \"jpg\" =>  \"image/jpg\",\n \"php\" => \"text/plain\" \n ); ";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "<a> متن شما </a>";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_15_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "<meta name =           />";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_16_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "<blockquote> نقل قول شما </blockquote>";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_18_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "<button>   </button>";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_19_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "<div>  </div>";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_20_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "< form action=\" \" >\n";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_21_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "<hr/>";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_22_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "< link rel =\"Stylesheet\" type =\"text/css\" href=\"../themes.css\" / >";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_23_triggered()
{
    QMessageBox infue;
    infue.setText("Coded         By         ..::VIRUS007::..        \n  Telegram ID: @Vi47s007 \n Email: shayanzare19@gmail.com ");
    infue.exec();
}

void MainWindow::on_action_24_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "function nonRepeat($min,$max,$count) { \n  if($max - $min < $count) { \n   return false; \n }\n    $nonrepeatarray = array(); \n   for($i = 0; $i < $count; $i++) {\n   $rand = rand($min,$max); \n    while(in_array($rand,$nonrepeatarray)) { \n     $rand = rand($min,$max); \n     } \n     $nonrepeatarray[$i] = $rand; \n    }\n     return $nonrepeatarray; \n      }";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_25_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "< style  type=\" text/css\">\n .text{text-shadow:1px 1px 2px #00f;color:#ff0;} \n</style>" ;
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_26_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "</style>\n     [reflect]{\n      position: relative;\n       height: 2.7em;    }\n     [reflect]:after{\n        position: absolute;\n        bottom: 0;\n       transform: scale(1,-1) translateX(-100%);\n       -webkit-transform: scale(1,-1) translateX(-100%);\n        -ms-transform: scale(1,-1) translateX(-100%);\n        opacity: .5;\n        content: attr(reflect);\n     }\n        [reflect][dir=\"rtl\"]:after{\n         transform: scale(1,-1) translateX(100%);\n       -webkit-transform: scale(1,-1) translateX(100%);\n         -ms-transform: scale(1,-1) translateX(100%);\n     }\n     [reflect]:before{\n        content: attr(reflect);\n        }\n     </style>";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_action_27_triggered()
{
    QString text = ui->textEdit->toPlainText();
    text += "//Html codes \n<div class=\"mirLoading\"></div>\n //css code \n<style>\n   @keyframes {\n     from{transform:rotate(0deg);}\n     to{transform:rotate(180deg);}\n       }\n     @-moz-keyframes{\n         from{-moz-transform:rotate(0deg);}\n       to{-moz-transform:rotate(180deg);}\n      }\n     @-o-keyframes {\n          from{-o-transform:rotate(0deg);}\n          to{-o-transform:rotate(180deg);}\n        }\n     @-webkit-keyframes{\n         from{-webkit-transform:rotate(0deg);}\n       to{-webkit-transform:rotate(180deg);}\n       }\n     @-ms-keyframes{\n       from{-ms-transform:rotate(0deg);}\n         to{-ms-transform:rotate(180deg);}\n       }\n     .mirLoading{\n        border-radius:100px;\n          -moz-border-radius:100px;\n         -o-border-radius:100px;\n       -ms-border-radius:100px;\n          -webkit-border-radius:100px;\n          width:50px;\n       height:50px;\n          border:3px transparent solid;\n         border-top:none;\n          border-bottom:none;\n       border-right-color:#036;        border-left-color:#036;\n       margin:0 auto;\n        animation:moisrex .5s infinite linear;\n        -moz-animation:moisrex .5s infinite linear;\n       -o-animation:moisrex .5s infinite linear;\n         -webkit-animation:moisrex .5s infinite linear;\n        -ms-animation:moisrex .5s infinite linear;\n      }\n</style>";
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_actionHex_Color_triggered()
{
    Form *dialog = new Form();
    dialog->show();
}

void MainWindow::on_action_17_triggered()
{

}

void MainWindow::on_action_localhost_triggered()
{
    QDesktopServices::openUrl(QUrl("http://localhost"));
}
