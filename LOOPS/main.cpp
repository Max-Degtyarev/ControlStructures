#include<iostream>
#include<conio.h>
using namespace std;

#define WHILE
//#define EXAMPLE


void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef WHILE
	int i = 1; // ������� �����
	int n; // ���������� ��������
	cout << "������� ���������� ��������: ";
	cin >> n;
	while (i <= n)
	{
		cout << i << " Hello\n";
		i++;
	}

#endif

#ifdef EXAMPLE

	char key; // ����� ������� ��� �������
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
		// (int)key - ��� ����� ������������� ���������� key
		// � ��� ������ int, ��� ���� ����� ������� ��� �������
	} while (true);

#endif









}


