#define _USE_MATH_DEFINES
#include <windows.h>
#include "foo.h"
#include "print.h"
using namespace std;







int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Rus");
    printYellow("��� ������ ��������� ����� � ����������� - 20 �� + 20.");
	printYellow("���������� ����� ������� ������� �������������");
	printYellow("���������(������ ������ �������������� ��������");
	printYellow("� ������ ������� �������������� ��������) � �������������");
	printYellow("��������, ����������� ����� ����.");
	printendl();
	printGreen("������:");
	printendl();
	const int size2 = 10;
	int arr2[size2];
	randarr(arr2, size2);
	printarr(arr2, size2);
	printendl();
	return 0;
}