#define _USE_MATH_DEFINES

#include <math.h> 
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "sort_arr.h"
#include "print.h"
using namespace std;
HANDLE hConsole;







int main()
{
	setlocale(LC_ALL, "Rus");
	const int size = 10;
	int arr[size]{ 1,21,33,4,15,62,7,81,-9,10 };
	
		print("��� ������ ����� ������������ 10 ���������.�������� �������, ������� ��������� ������ �� �����������");
		print("��� �� ��������, � ����������� �� ������� ��������� �������, ���� �� ����� 1, ���������� ���� �� ��������,");
		print("���� 0, �� �� ����������.������ 2 ��������� ������� - ��� ������ � ��� ������, ������ �������� �� ��������� ����� 1.");
	return 0;
}