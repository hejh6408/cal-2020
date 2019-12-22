#include "uiElement/mainwindow.h"

#include "arithmetic/arithmeticConst.h"
#include "arithmetic/arithmeticPlus.h"
#include "linkElement/linkElement.h"

#include <QApplication>
#include <memory>

typedef std::shared_ptr<int> pint;

void test();

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
//    return a.exec();
    test();
    return 0;
}

class constWidget : public arithmeticConst, public linkElement
{
public:
   constWidget()
    : arithmeticConst(), linkElement()
   {

   }
};

class plusWidget : public arithmeticPlus, public linkElement
{
public:
   plusWidget()
    : arithmeticPlus(), linkElement()
   {

   }
};

void test()
{
    std::shared_ptr<constWidget> a1 = std::make_shared<constWidget>();
    std::shared_ptr<constWidget> a2 = std::make_shared<constWidget>();

    std::shared_ptr<plusWidget> p1 = std::make_shared<plusWidget>();

    a1->intializeResult(3);
    a2->intializeResult(4);

    // pLinkElement p2 = std::dynamic_pointer_cast<linkElement>(a1);
    a1->addLink(std::dynamic_pointer_cast<linkElement>(p1), 0);

    a2->addLink(std::dynamic_pointer_cast<linkElement>(p1), 1);

    p1->getResult();
    std::printf("%f",p1->getResult());
}
