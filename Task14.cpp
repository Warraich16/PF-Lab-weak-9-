#include<iostream>
using namespace std;
int main()
{ 
    int arr1[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter a number for first array: ";
        cin >> arr1 [i];
    }
    int number;
    cout << "Enter size of second array: ";
    cin >> number;
    int arr2[number];
    for (int i = 0; i < number; i++)
    {
        cout << "Enter a number: ";
        cin >> arr2 [i];
    }
    int arr3 [number+2];
    arr3 [0] = arr1 [0];
    arr3 [number+1] = arr1 [1];
    int j = 0;
    for (int i = 1; i <= number; i++)
    {
        arr3[i] = arr2[j];
        j++;
    }
    for (int i = 0; i <= (number+1); i++)
    {
        cout << arr3[i] << " ";
    }
}



