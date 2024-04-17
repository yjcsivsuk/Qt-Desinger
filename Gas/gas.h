#ifndef GAS_H
#define GAS_H

#include <QtGui/QWidget>
namespace Ui {
	class Form;
}

class Gas:public QWidget
{
	Q_OBJECT
public:
	Gas(QWidget *parent=0);
	~Gas();
private:
	Ui::Form *ui;
public slots:
	void on_BtnGet_clicked();
};

#endif

