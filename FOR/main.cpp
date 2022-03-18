#include<iostream>
#include<conio.h>
using namespace std;

//#define FOR_SYNTAX
//#define FACTORIAL
//#define POWER
#define ASCII
//#define FIB
//#define TABLE
//#define TABLE_PIFAGOR


void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef FOR_SYNTAX
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";

	}
	cout << endl;


#endif

#ifdef FACTORIAL
	int n; // �����, ��������� � ����������
	long long int f = 1; // ��������� �����
	cout << "������� �����: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;

	}
	cout << endl;

#endif


#ifdef POWER

	double a;
	int n;
	double N = 1; 
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	cout << a << " ^ " << n << " = ";
	if (n < 0)
	{
		n = -n; // ������ ���� ����������
		a = 1 / a; // ��������� ��������� ������� � �����������
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;

	}
	cout << N << endl;


#endif

#ifdef ASCII
	char key;
	//key = _getch();
	//key = 0;
	cout << "������� ASCII-��������: \n";
	setlocale(LC_ALL, "C"); //������������� ��������� �� ���������
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl << endl;
		cout << i << "-" << (char)i << " ";
		
		// (char)i - ����� �������������� i � ��� char
	}
	cout << endl;


#endif



#ifdef FIB

	/*int a = 0;
	int b = 1;
	int c = a + b;*/
	//double a = 0, b = 1, c = a + b;
	int n;
	cout << "������� ���������� ����� �� ���� ���������: "; cin >> n;
	/*for (int i = 0; i < n; i++)
	{
		cout << a << "\t";
		a = b;
		b = c;
		c = a + b;

	}*/

	for (double a = 0, b = 1, c = a + b, i = 0; i < n; i++)
	{
		cout << a << "\n";
		a = b; b = c; c = a + b;


	}


#endif

#ifdef TABLE

	int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, h = 8, j = 9, k = 10;
	for (int i = 1; i < 11; i++)
	{
		cout << a << " * " << i << " = " << a * i << "\t";
		cout << b << " * " << i << " = " << b * i << "\t";
		cout << c << " * " << i << " = " << c * i << "\t";
		cout << d << " * " << i << " = " << d * i << "\t";
		cout << e << " * " << i << " = " << e * i << endl;
		
	}
	cout << endl << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << f << " * " << i << " = " << f * i << "\t";
		cout << g << " * " << i << " = " << g * i << "\t";
		cout << h << " * " << i << " = " << h * i << "\t";
		cout << j << " * " << i << " = " << j * i << "\t";
		cout << k << " * " << i << " = " << k * i << endl;

	}


#endif



#ifdef TABLE_PIFAGOR

	int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, h = 8, j = 9, k = 10;
	for (int i = 1; i < 11; i++)
	{
		cout << "\t" << i;
	}
	cout << endl << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << a * i << "\t";
		cout << a * i << "\t";
		cout << b * i << "\t";
		cout << c * i << "\t";
		cout << d * i << "\t";
		cout << e * i << "\t";
		cout << f * i << "\t";
		cout << g * i << "\t";
		cout << h * i << "\t";
		cout << j * i << "\t";
		cout << k * i << endl << endl;


	}




#endif





}