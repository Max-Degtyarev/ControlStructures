#include <iostream>
using namespace std;

//#define PALINDROM
#define TICKET


void main()
{

	setlocale(LC_ALL, "Russian");

#ifdef PALINDROM
	int number;
	int reverse = 0; // Число записанное наоборот
	cout << "Введите число: "; cin >> number;
	int copy = number; // Сохраняем копию исходного числа
	while (copy > 0)
	{
		reverse *= 10; // умножаем reverse на 10
		// и таким образом число сдвигается на 1 разряд влево 
		// и в младшем разряде появляется 0
		// (свобоное место куда 
		reverse += copy % 10;
		copy /= 10; // убираем младшую цифру из исходного

	}
	//cout << number << endl;
	//cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Число палиндром" << endl;

	}
	else
	{
		cout << "Число не палиндром" << endl;

	}

#endif


#ifdef TICKET

	int number;
	cout << "Введите номер билета: "; cin >> number;
	int a = number / 1000;
	int b = number % 1000;
	int i = 0;
	int j = 0;
	while (a > 0)
	{
		i += a % 10;
		a /= 10;

	}
	while (b > 0)
	{
		j += b % 10;
		b /= 10;

	}
	if (i == j)
	{
		cout << "Билет счастливый";

	}
	else
	{
		cout << "Билет не счастливый";

	}
	cout << "\n\n\n";


#endif





}