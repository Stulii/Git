#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h> 
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "print.h"
#include "foo.h"
using namespace std;







int main()
{

	setlocale(LC_ALL, "Rus");
	
	printYellow("��� ������ �� 20 ����� ����� �� ���������� �� 1 �� 20.");
	printYellow("����������:");
	printYellow("- �������� �������, �������������� �������� ������� ������������ �������;");
	printYellow("- ������� ��������� ����� �� ���� �� ��������� � ����� ������� ����� ���������� ����� � �������;");
	printYellow("- ������������� �������� �������, ����������� ����� �� ��������� ������� �� ��������, � ��������");
	printYellow("�������, ����������� ������ �� ��������� ������� �� �����������.");
	printendl();
	const int size3 = 20;
	int arr3[size3];
	printGreen("������: ");
	randarr(arr3, size3);
	printarr(arr3, size3);
	printendl();
	printendl();
	printGreen("������������ ������: ");
	shake(arr3, size3);
	printarr(arr3, size3);
	printendl();
	printendl();
	int dig = 1 + rand() % 20;
	printGreen("��������� �����: ");
	printRed(dig);
	printGreen("������� ���������� �����: ");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 12);
	cout << findDig(arr3, size3,  dig);
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	

	return 0;
}