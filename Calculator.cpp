#include "Calculator.h"
#include <QString>
#include <QMessageBox>
#include <stack>
using namespace std;

Calculator::Calculator(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.lineEdit_input->setReadOnly(true);
	connect(ui.pushButton_0, SIGNAL(clicked()), this, SLOT(Digits_number()));
	connect(ui.pushButton_1, SIGNAL(clicked()), this, SLOT(Digits_number()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(Digits_number()));
	connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(Digits_number()));
	connect(ui.pushButton_4, SIGNAL(clicked()), this, SLOT(Digits_number()));
	connect(ui.pushButton_5, SIGNAL(clicked()), this, SLOT(Digits_number()));
	connect(ui.pushButton_6, SIGNAL(clicked()), this, SLOT(Digits_number()));
	connect(ui.pushButton_7, SIGNAL(clicked()), this, SLOT(Digits_number()));
	connect(ui.pushButton_8, SIGNAL(clicked()), this, SLOT(Digits_number()));
	connect(ui.pushButton_9, SIGNAL(clicked()), this, SLOT(Digits_number()));
	connect(ui.pushButton_point, SIGNAL(clicked()), this, SLOT(Button_point()));
	connect(ui.pushButton_percent, SIGNAL(clicked()), this, SLOT(Percent()));
	connect(ui.pushButton_delete_all, SIGNAL(clicked()), this, SLOT(Delete()));
	connect(ui.pushButton_delete, SIGNAL(clicked()), this, SLOT(Delete()));
	connect(ui.pushButton_sin, SIGNAL(clicked()), this, SLOT(AddOperat()));
	connect(ui.pushButton_cos, SIGNAL(clicked()), this, SLOT(AddOperat()));
	connect(ui.pushButton_tg, SIGNAL(clicked()), this, SLOT(AddOperat()));
	connect(ui.pushButton_ctg, SIGNAL(clicked()), this, SLOT(AddOperat()));
	connect(ui.pushButton_sqrt, SIGNAL(clicked()), this, SLOT(AddOperat()));
	connect(ui.pushButton_division, SIGNAL(clicked()), this, SLOT(Operat()));
	connect(ui.pushButton_multiply, SIGNAL(clicked()), this, SLOT(Operat()));
	connect(ui.pushButton_minus, SIGNAL(clicked()), this, SLOT(Operat()));
	connect(ui.pushButton_plus, SIGNAL(clicked()), this, SLOT(Operat()));
	connect(ui.pushButton_equal, SIGNAL(clicked()), this, SLOT(Parsit()));
	//connect(ui.pushButton_hooks, SIGNAL(clicked()), this, SLOT(Hooks()));
}


void Calculator::Operat()
{
	if ((ui.lineEdit_input->text() != "") && (operat == 0) && (ui.lineEdit_input->text()[ui.lineEdit_input->text().size() - 1] != "("))
	{
		point = 0;
		operat = 1;
		QPushButton* button = (QPushButton*)sender();
		QString string = (ui.lineEdit_input->text());
		ui.lineEdit_input->setText(string + button->text());
	}
	Parsit();
}


void Calculator::Minus()
{
	QString input = ui.lineEdit_input->text();
	if (input == "")
		ui.lineEdit_input->setText("-");
	else if ((input[input.size() - 1] != ".") && (input[input.size() - 1] != "-"))
		ui.lineEdit_input->setText(ui.lineEdit_input->text() + "-");
	operat = 1;
	point = 0;
}



void Calculator::Digits_number()
{
	operat = 0;
	QPushButton* button = (QPushButton*)sender();
	QString string = (ui.lineEdit_input->text() + button->text());
	ui.lineEdit_input->setText(string);
	Input();
}



void Calculator::Hooks()
{
	QString input = ui.lineEdit_input->text();
	if (input == "")
		ui.lineEdit_input->setText("(");
	else if ((((input.count('(')) > (input.count(')'))) && (input[input.size() - 1].isDigit())) ||
		(input[input.size() - 1] == ")") && ((input.count('(')) > (input.count(")"))))
	{
		ui.lineEdit_input->setText(ui.lineEdit_input->text() + ")");
		point = 1;
	}
	else if ((input[input.size() - 1].isDigit()) || ((input.count('(')) == (input.count(')')) && (input[input.size() - 1] == ")")))
		ui.lineEdit_input->setText(ui.lineEdit_input->text() + '*' + "(");
	else if (input[input.size() - 1] != ".")
		ui.lineEdit_input->setText(ui.lineEdit_input->text() + "(");
	
}



void Calculator::Button_point()
{
	if (ui.lineEdit_input->text() == "")
	{
		ui.lineEdit_input->setText("0.");
		point = 1;
		operat = 1;
	}

	else if (((point == 0) && (operat == 1)) || (ui.lineEdit_input->text()[ui.lineEdit_input->text().size() - 1] == "("))
	{
		ui.lineEdit_input->setText(ui.lineEdit_input->text() + "0.");
		point = 1;
		operat = 1;
	}

	else if (point == 0)
	{
		ui.lineEdit_input->setText(ui.lineEdit_input->text() + ".");
		point = 1;
		operat = 1;
	}
}



void Calculator::Trgnmtr()
{
	QString input = (ui.lineEdit_input->text());
	if ((input[0] == "s") && (input[1] == "i") && (input[2] == "n"))
	{
		operat = 1;
		input.remove(0, 3);
		double dinput = input.toDouble();
		dinput = sin(dinput);
		input = QString::number(dinput, 'g', 15);
		ui.lineEdit_results->setText(input);
	}

	if ((input[0] == "c") && (input[1] == "o") && (input[2] == "s"))
	{
		operat = 1;
		input.remove(0, 3);
		double dinput = input.toDouble();
		dinput = cos(dinput);
		input = QString::number(dinput, 'g', 15);
		ui.lineEdit_results->setText(input);
	}

	if ((input[0] == "t") && (input[1] == "g"))
	{
		operat = 1;
		input.remove(0, 2);
		double dinput = input.toDouble();
		dinput = tan(dinput);
		input = QString::number(dinput, 'g', 15);
		ui.lineEdit_results->setText(input);
	}

	if ((input[0] == "c") && (input[1] == "t") && (input[2] == "g"))
	{
		operat = 1;
		input.remove(0, 3);
		double dinput = input.toDouble();
		dinput = 1 / tan(dinput);
		input = QString::number(dinput, 'g', 15);
		ui.lineEdit_results->setText(input);
	}
	if ((input[0] == "s") && (input[1] == "q") && (input[2] == "r") && (input[3] == "t"))
	{
		operat = 1;
		input.remove(0, 4);
		double dinput = input.toDouble();
		if (dinput >= 0)
		{
			dinput = sqrt(dinput);
			input = QString::number(dinput, 'g', 15);
			ui.lineEdit_results->setText(input);
		}
		else Error();
	}
}



void Calculator::Parsit()
{
	QString input = (ui.lineEdit_input->text());
	if ((ui.lineEdit_input->text())[ui.lineEdit_input->text().size() - 1] != ".")
	{
		QString number = "";
		if (((input[input.size() - 1]) == "*") || ((input[input.size() - 1]) == "/") || ((input[input.size() - 1]) == "+") || ((input[input.size() - 1]) == "-"))
			input.chop(1);
		vector <QString> tokens;
		double otvet = 0;
		int pos_operat = 0;
		bool first = 1;
		for (int i = 0; i < input.size(); i++)
			if ((input[i] == "*") || (input[i] == "/") || (input[i] == "+") || (input[i] == "-"))
			{
				number = "";
				for (int j = pos_operat + 1; j < i; j++)
					number += input[j];
				if (first)
				{
					tokens.push_back(input[0] + number);
					first = 0;
				}
				else
					tokens.push_back(number);

				QString operat = input[i];
				tokens.push_back(operat);

				pos_operat = i;
			}

		number = "";
		for (int j = pos_operat + 1; j < input.size(); j++)
			number += input[j];
		tokens.push_back(number);

		for (int i = 0; i < tokens.size(); i++)
			if ((tokens[i] == "*") || (tokens[i] == "/"))
			{
				if (tokens[i] == "*")
				{
					double result = (tokens[i - 1]).toDouble() * (tokens[i + 1]).toDouble();
					tokens[i - 1] = QString::number(result, 'g', 15);
					tokens[i + 1] = QString::number(result, 'g', 15);
					tokens[i] = QString::number(result, 'g', 15);
				}

				if (tokens[i] == "/")
				{
					double result = (tokens[i - 1]).toDouble() / (tokens[i + 1]).toDouble();
					tokens[i - 1] = QString::number(result, 'g', 15);
					tokens[i + 1] = QString::number(result, 'g', 15);
					tokens[i] = QString::number(result, 'g', 15);

				}
				otvet = (tokens[i]).toDouble();
				ui.lineEdit_results->setText(QString::number(otvet, 'g', 15));
				if (tokens[i] == "inf")
					Error();

			}

		for (int i = 0; i < tokens.size(); i++)
			if ((tokens[i] == "+") || (tokens[i] == "-"))
			{
				if (tokens[i] == "+")
				{
					double result = (tokens[i - 1]).toDouble() + (tokens[i + 1]).toDouble();
					tokens[i - 1] = QString::number(result, 'g', 15);
					tokens[i + 1] = QString::number(result, 'g', 15);
					tokens[i] = QString::number(result, 'g', 15);
					otvet = (tokens[i]).toDouble();
					int size = tokens.size() - 1;
					while (tokens[i] != "+" && tokens[i] != "-" && i < size)
					{
						size--;
						tokens.erase(tokens.begin() + i);
					}
					i = 0;
				}

				if (tokens[i] == "-")
				{
					double result = (tokens[i - 1]).toDouble() - (tokens[i + 1]).toDouble();
					tokens[i - 1] = QString::number(result, 'g', 15);
					tokens[i + 1] = QString::number(result, 'g', 15);
					tokens[i] = QString::number(result, 'g', 15);
					otvet = (tokens[i]).toDouble();
					int size = tokens.size() - 1;
					while (tokens[i] != "+" && tokens[i] != "-" && i < size)
					{
						size--;
						tokens.erase(tokens.begin() + i);
					}
					i = 0;
				}
				ui.lineEdit_results->setText(QString::number(otvet, 'g', 15));
			}
	}
}



void Calculator::Input()
{
	Trgnmtr();
	Parsit();
}



void Calculator::Percent()
{
	QPushButton* button = (QPushButton*)sender();
	double input = (ui.lineEdit_input->text()).toDouble();
	if (input != 0)
	{
		QString string = QString::number(input, 'g', 15);
		ui.lineEdit_input->setText(string + "%");

		input *= 0.01;
		string = QString::number(input, 'g', 15);
		ui.lineEdit_results->setText(string);
	}
}



void Calculator::AddOperat()
{
	if (ui.lineEdit_input->text() == "")
	{
		QPushButton* button = (QPushButton*)sender();
		ui.lineEdit_input->setText(button->text());
	}
}



void Calculator::Delete()
{
	QPushButton* button = (QPushButton*)sender();

	if (button->text() == "AC")
	{
		ui.lineEdit_input->clear();
		ui.lineEdit_results->clear();
		point = 0;
		operat = 0;
	}

	if (button->text() == "Del")
	{
		QString string = ui.lineEdit_input->text();
		string.chop(1);
		ui.lineEdit_input->setText(string);
		Input();
	}
}



void Calculator::Error()
{
	ui.lineEdit_input->clear();
	ui.lineEdit_results->clear();
	QMessageBox msgbox;
	msgbox.setWindowTitle("Error");
	msgbox.setText("Check the accuracy of the data entered!");
	msgbox.exec();
}