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




int main()
{
	setlocale(LC_ALL, "Rus");
	const int size = 10;
	int arr[size]{ 1,21,33,4,15,62,7,81,-9,10 };
	
	printYellow("��� ������ ����� ������������ 10 ���������.�������� �������, ������� ��������� ������ �� �����������");
	printYellow("��� �� ��������, � ����������� �� ������� ��������� �������, ���� �� ����� 1, ���������� ���� �� ��������,");
	printYellow("���� 0, �� �� ����������.������ 2 ��������� ������� - ��� ������ � ��� ������, ������ �������� �� ��������� ����� 1.");
		cout << endl;
		printGreen("�������� ������: ");
		printarr(arr, size);
		cout << endl;
		cout << endl;
		printGreen("���� ������ ��������� = 0:");
		cout << endl;
		sortarr(arr, size, 0);
		printarr(arr, size);
		cout << endl;
		cout << endl;
		printGreen("���� ������ ��������� = 1:");
		cout << endl;
		sortarr(arr, size, 1);
		printarr(arr, size);
		cout << endl;
		cout << endl;
	
		
	return 0;
}