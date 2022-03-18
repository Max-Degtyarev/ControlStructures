#include<iostream>
#include<conio.h>
using namespace std;

#define WHILE
//#define EXAMPLE


void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef WHILE
	int i = 1; // счетчик цикла
	int n; // количество итераций
	cout << "¬ведите количество итераций: ";
	cin >> n;
	while (i <= n)
	{
		cout << i << " Hello\n";
		i++;
	}

#endif

#ifdef EXAMPLE

	char key; // Ѕудет хранить код клавиши
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
		// (int)key - это €вное преобразоание переменной key
		// в тип данных int, дл€ того чтобы увидеть код клавиши
	} while (true);

#endif









}


