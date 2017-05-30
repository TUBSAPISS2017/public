#ifndef LEDWIDGET_H
#define LEDWIDGET_H

#include <QWidget>

namespace Ui {
class LEDWidget;
}

class LEDWidget : public QWidget
{
	Q_OBJECT

	enum ActiveColor : char {
	  ActiveRed = 101,
	  ActiveGreen = 102,
	  ActiveBlue = 103
	};

public:
	explicit LEDWidget(QWidget *parent = 0);
	~LEDWidget();

public slots:
	void changeColor(ActiveColor colorToChange, int colorValue);

private slots:
	void on_redSlider_valueChanged(int value);
	void on_greenSlider_valueChanged(int value);
	void on_blueSlider_valueChanged(int value);

signals:
	void colorChanged(const char* colorString);

private:
	Ui::LEDWidget *ui;
	char m_colorString[3];
};

#endif // LEDWIDGET_H
