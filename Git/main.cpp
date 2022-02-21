#define _USE_MATH_DEFINES
#include <windows.h>
#include "foo.h"
#include "print.h"
using namespace std;







int main()
{
	setlocale(LC_ALL, "Rus");
    printYellow("Дан массив случайных чисел в диапазонеот - 20 до + 20.");
	printYellow("Необходимо найти позиции крайних отрицательных");
	printYellow("элементов(самого левого отрицательного элемента");
	printYellow("и самого правого отрицательного элемента) и отсортировать");
	printYellow("элементы, находящиеся между ними.");
	printendl();
	printYellow("Массив:");
	printendl();
	return 0;
}