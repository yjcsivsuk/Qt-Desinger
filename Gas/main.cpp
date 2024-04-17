#include <QtGui/QApplication>
#include "gas.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Gas hello;
	hello.show();
	return a.exec();
}
