#ifndef STDMESSAGEBOX_H
#define STDMESSAGEBOX_H

#include <QString>
#include <QWidget>

class stdmessagebox
{
public:
    stdmessagebox(QWidget *parent = nullptr);
    static void information(QWidget* parent, const QString& title, const QString& message);
    static void warning(QWidget* parent, const QString& title, const QString& message);

private:
    QWidget* m_parent;
};

#endif // STDMESSAGEBOX_H
