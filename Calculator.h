#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Calculator.h"
#include <QString>
using namespace std;

class Calculator : public QMainWindow
{
	Q_OBJECT
public:
	Calculator(QWidget* parent = Q_NULLPTR);
private:
	Ui::CalculatorClass ui;
	bool operat = 0;
	bool point = 0;
public slots:
	void Operat();
	void Hooks();
	void Minus();
	void Trgnmtr();
	void AddOperat();
	void Parsit();
	void Input();
	void Digits_number();
	void Button_point();
	void Percent();
	void Delete();
	void Error();
};