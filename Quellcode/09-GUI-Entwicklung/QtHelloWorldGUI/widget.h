#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
	Q_OBJECT

private:
	Ui::Widget *ui;

public:
	explicit Widget(QWidget *parent = 0);
	~Widget();

private slots:
	void on_hwButton_clicked();
};

#endif // WIDGET_H
