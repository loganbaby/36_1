#include "hw_36_1.h"

#include <QApplication>
#include <QSlider>
#include <QWidget>
#include <QVBoxLayout>

int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    QWidget* main_window = new QWidget;
    QAbstractSlider* slider = new QSlider(Qt::Horizontal, main_window);
    ImageSlider* circle = new ImageSlider(main_window);

    circle->setFixedSize(600, 300);
    auto* layout = new QVBoxLayout(main_window);
    layout->addWidget(circle);
    layout->addWidget(slider);
    QObject::connect(slider, &QAbstractSlider::valueChanged,
                     [&circle](int newValue) {
        if(newValue > 33 && newValue <= 66) circle->setYellow();
        else if(newValue <= 33) circle->setGreen();
        else circle->setRed();
    });
    main_window->show();
    return a.exec();
}
