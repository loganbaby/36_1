#ifndef HW_36_1_H
#define HW_36_1_H

#include <QMainWindow>
#include <QWidget>
#include <QPainter>
#include <QPaintEvent>

class ImageSlider : public QWidget {
private:
    Q_OBJECT
    QPixmap currentSliderState;
    QPixmap redSliderState;
    QPixmap yellowSliderState;
    QPixmap greenSliderState;
public:
    ImageSlider() = default;
    ImageSlider(QWidget* parrent);
    void paintEvent(QPaintEvent* e) override;
    QSize minimumSizeHint() const override;
public slots:
    void setYellow();
    void setGreen();
    void setRed();
};

#endif // HW_36_1_H
