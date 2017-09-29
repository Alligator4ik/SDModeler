#include "SDModelerController.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SDModelerController w;
	w.show();
	return a.exec();
}
