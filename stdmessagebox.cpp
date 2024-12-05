#include "stdmessagebox.h"
#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QSpacerItem>

stdmessagebox::stdmessagebox(QWidget* parent) : m_parent(parent) {}

void stdmessagebox::information(QWidget* parent, const QString& title, const QString& message) {
    QDialog dialog(parent);
    dialog.setWindowTitle(title);

    // 创建垂直布局
    QVBoxLayout* layout = new QVBoxLayout(&dialog);

    // 创建标签并设置消息文本
    QLabel* label = new QLabel(message, &dialog);
    label->setWordWrap(true);  // 允许自动换行

    // 创建一个“OK”按钮
    QPushButton* okButton = new QPushButton("OK", &dialog);

    // 创建一个空的间隔控件，以增加框的高度
    // QSpacerItem* spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    // 设置布局的间距和边距
    layout->setSpacing(10);  // 控件之间的间距
    layout->setContentsMargins(10, 20, 10, 20);  // 内边距：左、上、右、下

    // 将控件添加到布局中
    layout->addWidget(label);
    // layout->addSpacerItem(spacer);  // 添加空白间隔
    layout->addWidget(okButton);

    // 当点击 OK 按钮时关闭对话框
    QObject::connect(okButton, &QPushButton::clicked, &dialog, &QDialog::accept);

    // 设置对话框最小尺寸，以确保它看起来更大
    dialog.setMinimumWidth(200);  // 设置最小宽度
    dialog.setMinimumHeight(45);  // 设置最小高度

    dialog.exec();  // 显示自定义对话框
}

void stdmessagebox::warning(QWidget* parent, const QString& title, const QString& message) {
    QDialog dialog(parent);
    dialog.setWindowTitle(title);

    // 创建垂直布局
    QVBoxLayout* layout = new QVBoxLayout(&dialog);

    // 创建标签并设置消息文本
    QLabel* label = new QLabel(message, &dialog);
    label->setWordWrap(true);  // 允许自动换行

    // 创建一个“OK”按钮
    QPushButton* okButton = new QPushButton("OK", &dialog);

    // 创建一个空的间隔控件，以增加框的高度
    QSpacerItem* spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    // 设置布局的间距和边距
    layout->setSpacing(10);  // 控件之间的间距
    layout->setContentsMargins(20, 20, 20, 20);  // 内边距：左、上、右、下

    // 将控件添加到布局中
    layout->addWidget(label);
    layout->addSpacerItem(spacer);  // 添加空白间隔
    layout->addWidget(okButton);

    // 当点击 OK 按钮时关闭对话框
    QObject::connect(okButton, &QPushButton::clicked, &dialog, &QDialog::accept);

    // 设置对话框最小尺寸
    dialog.setMinimumWidth(300);
    dialog.setMinimumHeight(150);

    dialog.exec();
}
