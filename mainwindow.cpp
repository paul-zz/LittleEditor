#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDesktopServices>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox msg;
    msg.setText("Little Editor by Paul-zz.");
    msg.setWindowTitle("About");
    msg.setIcon(QMessageBox::Information);
    msg.setWindowIcon(QIcon(":/icons/info_FILL0_wght0_GRAD0_opszNaN.png"));
    msg.exec();
}


void MainWindow::on_actionGithub_repository_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/paul-zz/LittleEditor/"));
}

