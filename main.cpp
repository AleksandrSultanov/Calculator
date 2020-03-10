#include "Calculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Calculator w;
	w.setWindowIcon(QIcon(":calculator85.png"));
	w.show();
	return a.exec();
}
