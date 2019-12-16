#include "mainwindow.h"

#include <QApplication>

void test();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    test();

    return a.exec();
}
void test()
{
    // 여기서 자료 테스트 진행
}
