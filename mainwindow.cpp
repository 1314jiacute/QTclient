#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("TCP - 服务器");
    ui->port->setText("8899");
    ui->ip->setText("127.0.0.1");
    /*connect(m_tcp,&QTcpSocket::readyRead,this,[=](){
        // 接收服务器发送的数据
        QByteArray recvMsg = m_tcp->readAll();
        ui->record->append("服务器Say: " + recvMsg);
    });
    connect(m_tcp,&QTcpSocket::connected,this,[=](){
        ui->record->append("恭喜, 连接服务器成功!!!");
        m_status->setPixmap(QPixmap(":/connect.png").scaled(20, 20));
    });
    connect(m_tcp,&QTcpSocket::disconnected,this,[=](){
        ui->record->append("服务器已经断开了连接, ...");
        ui->connectServer->setEnabled(true);
        ui->disconnect->setEnabled(false);
    });*/
    m_status = new QLabel;
    m_status->setPixmap(QPixmap(":/images/images/b2(1).png").scaled(20,20));
    ui->statusbar->addWidget(new QLabel("连接状态"));
    ui->statusbar->addWidget(m_status);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_connectServer_clicked()
{
    QString ip = ui->ip->text();
    unsigned short port = ui->port->text().toInt();//端口无符号整型
    m_tcp->connectToHost(QHostAddress(ip), port);
    ui->connectServer->setEnabled(false);
    ui->disconnect->setEnabled(true);

}


void MainWindow::on_disconnect_clicked()
{
    m_tcp->close();
    ui->connectServer->setEnabled(true);
    ui->disconnect->setEnabled(false);
}


void MainWindow::on_sendMsg_clicked()
{
    QString sendMsg = ui->msg->toPlainText();
    m_tcp->write(sendMsg.toUtf8());
    ui->record->append("客户端说 :" + sendMsg);
    ui->msg->clear();
}

