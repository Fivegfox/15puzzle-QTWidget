#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
#include<ctime>
#include<cmath>
#include<QString>
int mas[16];
bool progon(int tmp,int j){
    for(int i=0; i<j; i++)
       if(mas[i]==tmp){
           return false;
       }
        return true;
}

void MainWindow::GW(){
    if(QString::compare(ui->pushButton->text(),"1")==0)
    if(QString::compare(ui->pushButton_2->text(),"2")==0)
    if(QString::compare(ui->pushButton_3->text(),"3")==0)
    if(QString::compare(ui->pushButton_4->text(),"4")==0)
    if(QString::compare(ui->pushButton_5->text(),"5")==0)
    if(QString::compare(ui->pushButton_6->text(),"6")==0)
    if(QString::compare(ui->pushButton_7->text(),"7")==0)
    if(QString::compare(ui->pushButton_8->text(),"8")==0)
    if(QString::compare(ui->pushButton_9->text(),"9")==0)
    if(QString::compare(ui->pushButton_10->text(),"10")==0)
    if(QString::compare(ui->pushButton_11->text(),"11")==0)
    if(QString::compare(ui->pushButton_12->text(),"12")==0)
    if(QString::compare(ui->pushButton_13->text(),"13")==0)
    if(QString::compare(ui->pushButton_14->text(),"14")==0)
    if(QString::compare(ui->pushButton_15->text(),"15")==0){
ui->label->setText("You are winner!!");
ui->pushButton->setDisabled(true);
ui->pushButton_2->setDisabled(true);
ui->pushButton_3->setDisabled(true);
ui->pushButton_4->setDisabled(true);
ui->pushButton_5->setDisabled(true);
ui->pushButton_6->setDisabled(true);
ui->pushButton_7->setDisabled(true);
ui->pushButton_8->setDisabled(true);
ui->pushButton_9->setDisabled(true);
ui->pushButton_10->setDisabled(true);
ui->pushButton_11->setDisabled(true);
ui->pushButton_12->setDisabled(true);
ui->pushButton_13->setDisabled(true);
ui->pushButton_14->setDisabled(true);
ui->pushButton_15->setDisabled(true);
ui->pushButton_16->setDisabled(true);
    }

}

void MainWindow::CREATEP(){
    int tmp=0;
    std::srand(std::time(NULL));
    int i=0;
    while(i<15){
        tmp=1+rand()%15;
        if(progon(tmp,i)){
        mas[i]=tmp;
        i++;
        }
}
ui->label->setText("");
ui->pushButton->setText(QString::number(mas[0]));
ui->pushButton_2->setText(QString::number(mas[1]));
ui->pushButton_3->setText(QString::number(mas[2]));
ui->pushButton_4->setText(QString::number(mas[3]));
ui->pushButton_5->setText(QString::number(mas[4]));
ui->pushButton_6->setText(QString::number(mas[5]));
ui->pushButton_7->setText(QString::number(mas[6]));
ui->pushButton_8->setText(QString::number(mas[7]));
ui->pushButton_9->setText(QString::number(mas[8]));
ui->pushButton_10->setText(QString::number(mas[9]));
ui->pushButton_11->setText(QString::number(mas[10]));
ui->pushButton_12->setText(QString::number(mas[11]));
ui->pushButton_13->setText(QString::number(mas[12]));
ui->pushButton_14->setText(QString::number(mas[13]));
ui->pushButton_15->setText(QString::number(mas[14]));
ui->pushButton_16->setText("");
ui->pushButton->setDisabled(false);
ui->pushButton_2->setDisabled(false);
ui->pushButton_3->setDisabled(false);
ui->pushButton_4->setDisabled(false);
ui->pushButton_5->setDisabled(false);
ui->pushButton_6->setDisabled(false);
ui->pushButton_7->setDisabled(false);
ui->pushButton_8->setDisabled(false);
ui->pushButton_9->setDisabled(false);
ui->pushButton_10->setDisabled(false);
ui->pushButton_11->setDisabled(false);
ui->pushButton_12->setDisabled(false);
ui->pushButton_13->setDisabled(false);
ui->pushButton_14->setDisabled(false);
ui->pushButton_15->setDisabled(false);
ui->pushButton_16->setDisabled(false);
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CREATEP();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString a = ui->pushButton_2->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_2->setText(ui->pushButton->text());
        ui->pushButton->setText(a);
    }

    a = ui->pushButton_5->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_5->setText(ui->pushButton->text());
        ui->pushButton->setText(a);
    }

GW();
}

void MainWindow::on_pushButton_2_clicked()
{
    QString a = ui->pushButton->text();
    if(QString::compare(a,"")==0){
        ui->pushButton->setText(ui->pushButton_2->text());
        ui->pushButton_2->setText(a);

    }

    a = ui->pushButton_3->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_3->setText(ui->pushButton_2->text());
        ui->pushButton_2->setText(a);

    }

    a = ui->pushButton_6->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_6->setText(ui->pushButton_2->text());
        ui->pushButton_2->setText(a);

    }
    GW();
}

void MainWindow::on_pushButton_3_clicked()
{
    QString a = ui->pushButton_2->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_2->setText(ui->pushButton_3->text());
        ui->pushButton_3->setText(a);

    }

    a = ui->pushButton_4->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_4->setText(ui->pushButton_3->text());
        ui->pushButton_3->setText(a);

    }

    a = ui->pushButton_7->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_7->setText(ui->pushButton_3->text());
        ui->pushButton_3->setText(a);

    }
    GW();
}

void MainWindow::on_pushButton_4_clicked()
{
    QString a = ui->pushButton_3->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_3->setText(ui->pushButton_4->text());
        ui->pushButton_4->setText(a);

    }

    a = ui->pushButton_8->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_8->setText(ui->pushButton_4->text());
        ui->pushButton_4->setText(a);

    }
GW();
}

void MainWindow::on_pushButton_5_clicked()
{
    QString a = ui->pushButton_6->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_6->setText(ui->pushButton_5->text());
        ui->pushButton_5->setText(a);

    }

    a = ui->pushButton->text();
    if(QString::compare(a,"")==0){
        ui->pushButton->setText(ui->pushButton_5->text());
        ui->pushButton_5->setText(a);

    }

    a = ui->pushButton_9->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_9->setText(ui->pushButton_5->text());
        ui->pushButton_5->setText(a);

    }
    GW();
}

void MainWindow::on_pushButton_6_clicked()
{
    QString a = ui->pushButton_5->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_5->setText(ui->pushButton_6->text());
        ui->pushButton_6->setText(a);

    }

    a = ui->pushButton_2->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_2->setText(ui->pushButton_6->text());
        ui->pushButton_6->setText(a);

    }

    a = ui->pushButton_10->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_10->setText(ui->pushButton_6->text());
        ui->pushButton_6->setText(a);

    }

    a = ui->pushButton_7->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_7->setText(ui->pushButton_6->text());
        ui->pushButton_6->setText(a);

    }
    GW();
}

void MainWindow::on_pushButton_7_clicked()
{
    QString a = ui->pushButton_6->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_6->setText(ui->pushButton_7->text());
        ui->pushButton_7->setText(a);

    }

    a = ui->pushButton_11->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_11->setText(ui->pushButton_7->text());
        ui->pushButton_7->setText(a);

    }

    a = ui->pushButton_3->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_3->setText(ui->pushButton_7->text());
        ui->pushButton_7->setText(a);
}
        a = ui->pushButton_8->text();
        if(QString::compare(a,"")==0){
            ui->pushButton_8->setText(ui->pushButton_7->text());
            ui->pushButton_7->setText(a);
        }

GW();
}


void MainWindow::on_pushButton_8_clicked()
{
    QString a = ui->pushButton_4->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_4->setText(ui->pushButton_8->text());
        ui->pushButton_8->setText(a);

    }

    a = ui->pushButton_12->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_12->setText(ui->pushButton_8->text());
        ui->pushButton_8->setText(a);

    }

    a = ui->pushButton_7->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_7->setText(ui->pushButton_8->text());
        ui->pushButton_8->setText(a);

    }
    GW();
}



void MainWindow::on_pushButton_9_clicked()
{
    QString a = ui->pushButton_5->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_5->setText(ui->pushButton_9->text());
        ui->pushButton_9->setText(a);

    }

    a = ui->pushButton_13->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_13->setText(ui->pushButton_9->text());
        ui->pushButton_9->setText(a);

    }

    a = ui->pushButton_10->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_10->setText(ui->pushButton_9->text());
        ui->pushButton_9->setText(a);

    }
GW();
}

void MainWindow::on_pushButton_10_clicked()
{
    QString a = ui->pushButton_6->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_6->setText(ui->pushButton_10->text());
        ui->pushButton_10->setText(a);

    }

    a = ui->pushButton_9->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_9->setText(ui->pushButton_10->text());
        ui->pushButton_10->setText(a);

    }

    a = ui->pushButton_11->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_11->setText(ui->pushButton_10->text());
        ui->pushButton_10->setText(a);

    }

    a = ui->pushButton_14->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_14->setText(ui->pushButton_10->text());
        ui->pushButton_10->setText(a);

    }
    GW();
}

void MainWindow::on_pushButton_11_clicked()
{
    QString a = ui->pushButton_10->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_10->setText(ui->pushButton_11->text());
        ui->pushButton_11->setText(a);

    }

    a = ui->pushButton_12->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_12->setText(ui->pushButton_11->text());
        ui->pushButton_11->setText(a);

    }

    a = ui->pushButton_7->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_7->setText(ui->pushButton_11->text());
        ui->pushButton_11->setText(a);

    }

    a = ui->pushButton_15->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_15->setText(ui->pushButton_11->text());
        ui->pushButton_11->setText(a);

    }
GW();
}

void MainWindow::on_pushButton_12_clicked()
{
    QString a = ui->pushButton_11->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_11->setText(ui->pushButton_12->text());
        ui->pushButton_12->setText(a);

    }

    a = ui->pushButton_8->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_8->setText(ui->pushButton_12->text());
        ui->pushButton_12->setText(a);

    }

    a = ui->pushButton_16->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_16->setText(ui->pushButton_12->text());
        ui->pushButton_12->setText(a);

    }
GW();
}

void MainWindow::on_pushButton_13_clicked()
{
    QString a = ui->pushButton_9->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_9->setText(ui->pushButton_13->text());
        ui->pushButton_13->setText(a);

    }

    a = ui->pushButton_14->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_14->setText(ui->pushButton_13->text());
        ui->pushButton_13->setText(a);

    }
    GW();
}

void MainWindow::on_pushButton_14_clicked()
{
    QString a = ui->pushButton_13->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_13->setText(ui->pushButton_14->text());
        ui->pushButton_14->setText(a);

    }

    a = ui->pushButton_15->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_15->setText(ui->pushButton_14->text());
        ui->pushButton_14->setText(a);

    }

    a = ui->pushButton_10->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_10->setText(ui->pushButton_14->text());
        ui->pushButton_14->setText(a);

    }
GW();
}

void MainWindow::on_pushButton_15_clicked()
{
    QString a = ui->pushButton_16->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_16->setText(ui->pushButton_15->text());
        ui->pushButton_15->setText(a);

    }

    a = ui->pushButton_14->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_14->setText(ui->pushButton_15->text());
        ui->pushButton_15->setText(a);

    }

    a = ui->pushButton_11->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_11->setText(ui->pushButton_15->text());
        ui->pushButton_15->setText(a);

    }
    GW();
}

void MainWindow::on_pushButton_16_clicked()
{
    QString a = ui->pushButton_15->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_15->setText(ui->pushButton_16->text());
        ui->pushButton_16->setText(a);

    }

    a = ui->pushButton_12->text();
    if(QString::compare(a,"")==0){
        ui->pushButton_12->setText(ui->pushButton_16->text());
        ui->pushButton_16->setText(a);

    }
    GW();
}

void MainWindow::on_pushButton_17_clicked(){
    CREATEP();
}
