#include<iostream>
using namespace std;

//#define SQUARE
//#define QA
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
#define TRIANGLE_4

void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "Введите число: "; cin >> n;
	int a = n;


#ifdef SQUARE
	for (int i = 0; i < n; i++) // этот for повторяет вывод строки из *
	{
		for (int i = 0; i < n; i++) // этот for повторяет вывод *
		{
			cout << "* ";
		}
		cout << endl;

	}
#endif


#ifdef QA

	for (int i = 0; i < n; i++) // этот for повторяет вывод строки из *
	{
		a -= 1;
		for (int i = a; i < n; i++) // этот for повторяет вывод *
		{
			cout << "* ";
					
		}
		cout << endl;
	
	}

#endif


#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";

		}
		cout << endl;
	}
#endif


#ifdef TRIANGLE_2

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";

		}
		cout << endl;
	}

#endif


#ifdef TRIANGLE_3

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;

	}

#endif

#ifdef TRIANGLE_4

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n-1; j++)cout << "  ";
		for (int j = 0; j < i+1; j++)cout << "* ";
		cout << endl;

	}


#endif








}
