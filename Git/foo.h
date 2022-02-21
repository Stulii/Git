
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h> 
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

void randarr(int arr[], uint32_t size)
{
    srand(time(0));
    for (size_t i = 0; i < size; i++)
    {


        arr[i] = rand() % 41 - 20;

    }
}
void findFirstAndLast(int arr[], uint32_t size)
{
    int first, last;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            first = i;
            break;
        }
        
    }
    for (int i = size-1; i >= 0; i--)
    {
        if (arr[i] < 0)
        {
            last = i;
            break;
        }

    }
    int j;
    int x;
    for (int i = first+1; i < last; i++)
    {
        for (int j = last - 1; j > first+1; j--)
        {

            if (arr[j - 1] > arr[j])
            {
                x = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = x;
            }
        }
    }
   
    
}