#include <iostream>
using namespace std;

void randarr(int arr[], uint32_t size)
{
    srand(time(0));
    for (size_t i = 0; i < size; i++)
    {


        arr[i] = 1 + rand() % 20;

    }
}
void shake(int arr[], uint32_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        swap(arr[i], arr[rand() % size]);
    }
}
int findDig(int arr[], uint32_t size, int dig)
{
    
    int digpos;
    
    for (int i = 0; i < size; i++)
    {

       
        if (arr[i] == dig)
        {
            digpos = i;
            break;
        }

    }
    return digpos;
}
//void sortLeftAndRight(int arr[], uint32_t size, int dig)
//{
//    for (int j = 0; j < size - 1; j++)
//    {
//        for (int k = j + 1; k < size; k++)
//        {
//            if (arr[j] < arr[k])
//            {
//                int temp = arr[k];
//                arr[k] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//    int j;
//    int x;
//    for (int i = 0; i < size; i++)
//    {
//        for (int j = size - 1; j > i; j--)
//        {
//
//            if (arr[j - 1] > arr[j])
//            {
//                x = arr[j - 1];
//                arr[j - 1] = arr[j];
//                arr[j] = x;
//            }
//        }
//    }
//
//}


    



