#include "mainwindow.h"

#include "arithmetic/arithmeticPlus.h"
#include "linkElement/linkElement.h"

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


class nodeObject
{
public:
    nodeObject()
    {

    }
private:
    dataArray valueArray;
};
// plusLinkElement 클래스는 다른 클래스에 연결을 할수 있고, 연결된 모든 linkedElement 에 대해서 "더하기" 연산을 수행한다.
class plusLinkElement : public arithmeticPlus, public linkElement, public nodeObject
{
public:
    plusLinkElement()
        : arithmeticPlus()
    {

    }
};

// plusLinkElement 클래스는 다른 클래스에 연결을 할수 있고, 연결된 모든 linkedElement 에 대해서 "더하기" 연산을 수행한다.
class constantLinkElement : public arithmeticPlus, public linkElement, public nodeObject
{
public:
    constantLinkElement()
        : arithmeticPlus()
    {

    }
};

void test()
{
    // 여기서 자료 테스트 진행
    constantLinkElement a1, a2, a3;
    plusLinkElement p1;


}
