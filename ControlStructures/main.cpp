#include<iostream>
using namespace std;

//#define TEMPERATURE
//#define EXAMPLE_1
//#define CALCULATOR
//#define CALCULATOR_2
#define CALC_SW

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TEMPERAURE

	int t;
	cout << "������� ����������� �������: ";
	cin >> t;
	if (t > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "�� ����� �������" << endl;
	}

#endif

#ifdef EXAMPLE_1
	int t;
	cout << "������� ����� ";
	cin >> t;
	if (t > 0 && t < 10)
	{
		cout << "�� ������" << endl;

	}
	else
	{
		cout << "�� ������������" << endl;

	}
#endif

#ifdef CALCULATOR
	cout << "\t\t\t\�����������" << endl << endl;
	float number_1;
	float number_2;
	char symbol;
	cout << "������� ������ �����:";
	cin >> number_1;
	cout << "������� ��������:";
	cin >> symbol;
	cout << "������� ������ �����:";
	cin >> number_2;
	cout << "��������� ����������: ";
	if (symbol == '+' )
	{
		cout << number_1 + number_2;
	
	}
	else if (symbol == '-' )
	{
		cout << number_1 - number_2;

	}
	else if (symbol == '*')
	{
		cout << number_1 * number_2;
	}
	else if (symbol == '/' )
	{
		cout << number_1 / number_2;
		
	}
	cout << "\n\n\n\n\n";

#endif
		
#ifdef CALCULATOR_2

	cout << "\t\t\t\�����������" << endl << endl;
	float number_1;
	float number_2;
	char symbol;
	cout << "������� ���������:";
	cin >> number_1 >> symbol >> number_2;
	cout << "��������� ����������: ";
	if (symbol == '+')
	{
		cout << number_1 + number_2;

	}
	else if (symbol == '-')
	{
		cout << number_1 - number_2;

	}
	else if (symbol == '*')
	{
		cout << number_1 * number_2;
	}
	else if (symbol == '/')
	{
		cout << number_1 / number_2;

	}
	cout << "\n\n\n\n\n";


#endif

#ifdef CALC_SW

	
	cout << "\t\t\t\�����������" << endl << endl;
	float number_1;
	float number_2;
	char symbol;
	cout << "������� ���������:";
	cin >> number_1 >> symbol >> number_2;
	cout << "��������� ����������: ";
	switch (symbol)
	{
	case '+':cout << number_1 + number_2 << endl; break;
	case '-':cout << number_1 - number_2 << endl; break;
	case '*':cout << number_1 * number_2 << endl; break;
	case '/':cout << number_1 / number_2 << endl; break;


	}


#endif




}