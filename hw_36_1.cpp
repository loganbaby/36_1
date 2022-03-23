#include "hw_36_1.h"
#include "ui_hw_36_1.h"

ImageSlider::ImageSlider(QWidget* parrent) {
    setParent(parrent);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    redSliderState = QPixmap
            ("C:\\Users\\logbaby\\Pictures\\красный.jpg");
    greenSliderState = QPixmap
            ("C:\\Users\\logbaby\\Pictures\\зеленый.png");
    yellowSliderState = QPixmap
            ("C:\\Users\\logbaby\\Pictures\\желтый.jpg");
    currentSliderState = greenSliderState;
    setGeometry(currentSliderState.rect());
}

void ImageSlider::paintEvent(QPaintEvent* e) {
    QPainter p(this);
    p.drawPixmap(e->rect(), currentSliderState);
}

QSize ImageSlider::minimumSizeHint() const {
    return QSize(100, 100);
}

void ImageSlider::setYellow() {
    currentSliderState = yellowSliderState;
    update();
}

void ImageSlider::setGreen() {
    currentSliderState = greenSliderState;
    update();
}

void ImageSlider::setRed() {
    currentSliderState = redSliderState;
    update();
}
