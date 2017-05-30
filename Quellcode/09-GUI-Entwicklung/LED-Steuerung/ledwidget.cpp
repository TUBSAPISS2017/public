#include "ledwidget.h"
#include "ui_ledwidget.h"
#include <QDebug>

LEDWidget::LEDWidget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::LEDWidget)
{
	m_colorString[2] = (char)0;
	ui->setupUi(this);
}

LEDWidget::~LEDWidget()
{
	delete ui;
}


void LEDWidget::changeColor(ActiveColor colorToChange, int colorValue)
{
	m_colorString[0] = colorToChange;
	m_colorString[1] = colorValue;

	switch (colorToChange) {
	case ActiveRed:
		ui->redLineEdit->setText(QString::number(colorValue));
		break;
	case ActiveGreen:
		ui->greenLineEdit->setText(QString::number(colorValue));
		break;
	case ActiveBlue:
		ui->blueLineEdit->setText(QString::number(colorValue));
		break;
	default:
		break;
	}

	emit colorChanged(m_colorString);
}

void LEDWidget::on_redSlider_sliderMoved(int position)
{
//	changeColor(ActiveRed, position);
}

void LEDWidget::on_greenSlider_sliderMoved(int position)
{
//	changeColor(ActiveGreen, position);
}

void LEDWidget::on_blueSlider_sliderMoved(int position)
{
//	changeColor(ActiveBlue, position);
}

void LEDWidget::on_redSlider_valueChanged(int value)
{
	changeColor(ActiveRed, value);
}

void LEDWidget::on_greenSlider_valueChanged(int value)
{
	changeColor(ActiveGreen, value);
}

void LEDWidget::on_blueSlider_valueChanged(int value)
{
	changeColor(ActiveBlue, value);
}
