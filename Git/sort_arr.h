#include <iostream>
using namespace std;

void sortarr(int arr[], int size, int swch)
{
	if (swch == 1)
	{

	}
	if (swch == 0)
	{
        int j;
        int x;
        for (int i = 0; i < size; i++)
        {
            for (int j = size - 1; j > i; j--)
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
}
