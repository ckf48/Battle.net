#include "Battlenet.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Battlenet w;
	w.show();
	return a.exec();
}
