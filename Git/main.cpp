#define _USE_MATH_DEFINES
#include <windows.h>
#include "foo.h"
#include "print.h"
using namespace std;







int main()
{
	setlocale(LC_ALL, "Rus");
    printYellow("��� ������ ��������� ����� � ����������� - 20 �� + 20.");
	printYellow("���������� ����� ������� ������� �������������");
	printYellow("���������(������ ������ �������������� ��������");
	printYellow("� ������ ������� �������������� ��������) � �������������");
	printYellow("��������, ����������� ����� ����.");
	printendl();
	printYellow("������:");
	printendl();
	return 0;
}