#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QtDebug>
#include <QCompleter>
#include <QTextEdit>
#include "highlighter.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:

    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionCopy_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionPaste_triggered();

    void on_actionSave_As_triggered();

    void on_actionBackground_color_triggered();

    void on_actionFirst_code_triggered();

    void on_action_4_triggered();

    void on_action_5_triggered();

    void on_action_6_triggered();

    void on_action_2_triggered();

    void on_action_7_triggered();

    void on_textEdit_destroyed();

    void on_action_3_triggered();

    void on_action_8_triggered();

    void on_action_9_triggered();

    void on_action_10_triggered();

    void on_action_11_triggered();

    void on_action_12_triggered();

    void on_action_13_triggered();

    void on_action_14_triggered();

    void on_actionIp_Logger_triggered();

    void on_actionDownload_File_triggered();

    void on_action_triggered();

    void on_action_15_triggered();

    void on_action_16_triggered();

    void on_action_18_triggered();

    void on_action_19_triggered();

    void on_action_20_triggered();

    void on_action_21_triggered();

    void on_action_22_triggered();

    void on_action_23_triggered();

    void on_action_17_triggered();

    void on_action_24_triggered();

    void on_action_25_triggered();

    void on_action_26_triggered();

    void on_action_27_triggered();

    void on_actionHex_Color_triggered();

    void on_action_localhost_triggered();

private:
    Ui::MainWindow *ui;
    QString mFilename;
    void setupEditor();

    QTextEdit *editor;
    Highlighter *highlighter;
};


#endif // MAINWINDOW_H
