#include "form.h"
#include "ui_form.h"
#include "QString"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#999999";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_2_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#333333";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_3_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#0000CC";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_4_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#0000FF";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_5_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#000099";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_6_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#000066";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_7_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#000033";
    ui->textEdit->setPlainText(color);

}

void Form::on_pushButton_8_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#000000";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_9_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#3300CC";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_10_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#330099";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_11_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#330066";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_12_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#330033";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_13_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#330000";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_14_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#6600FF";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_15_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#6600CC";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_16_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#660099";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_17_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#660033";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_18_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#660000";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_19_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#9900FF";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_20_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#9900CC";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_21_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#990099";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_22_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#990066";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_23_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#990033";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_24_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#990000";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_25_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#CC00FF";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_26_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#CC00CC";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_27_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#CC0099";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_28_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#CC0066";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_29_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#CC0000";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_30_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#00CCFF";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_31_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#00CCCC";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_32_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#00CC99";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_33_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#00CC66";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_34_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#00CC33";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_35_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#00CC00";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_36_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#33CCFF";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_37_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#33CCCC";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_38_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#33CC99";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_39_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#33CC66";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_40_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#33CC33";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_41_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#33CC00";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_42_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#FFFFCC";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_43_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#FFFF99";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_44_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#FFFF66";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_45_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#66FF00";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_46_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#00FFCC";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_47_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#99CCFF";
    ui->textEdit->setPlainText(color);
}

void Form::on_pushButton_48_clicked()
{
    QString color = ui->textEdit->toPlainText();
    color += "#FF6633";
    ui->textEdit->setPlainText(color);
}
