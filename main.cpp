#include "mainwindow.h"
#include "start.h"
#include <QApplication>
#include"uitest.h"
#include<iostream>
#include <fstream>
#include <QString>
void printFileContents(const QString& filename);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    start w;
    w.show();
    uitest w2;
    w2.show();


    QString filename = ":/res/items.txt";  // 使用相对路径（假设文件存储在资源文件中）

    printFileContents(filename);



    return a.exec();
}

void printFileContents(const QString& filename) {
    std::ifstream file(filename.toStdString());  // 打开文件
    if (!file.is_open()) {  // 文件打开失败
        std::cerr << "Failed to open file: " << filename.toStdString() << std::endl;
        return;
    }

    std::string line;
    // 逐行读取文件并打印
    while (std::getline(file, line)) {
        std::cout << line << std::endl;  // 打印每一行内容
    }

    file.close();  // 关闭文件
}
