#include <iostream>
using namespace std;

int searchpivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {

            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}

int main()
{

    int pivote[6] = {33, 44, 55, 1, 5, 6};
    cout << "the index of pivot element is : " << searchpivot(pivote, 6);
}