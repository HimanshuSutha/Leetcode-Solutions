#include <iostream>
using namespace std;
int main()
{
    int arr[100];

    cout << "kitne number ka digit dalega";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "your array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] ; 
    }

    cout << "my array : " << endl;
    for (int i = n - 1; i >=0; i--)
    {
        cout << arr[i];
    }
}