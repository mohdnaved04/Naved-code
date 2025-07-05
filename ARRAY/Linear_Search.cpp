#include <iostream>
using namespace std;

int Linear_search(const int arr[], int key, int size)
{
    if (size == 0 || size == 1)
    {
        cout << " Array is one or none index" << endl;
        return -1;
    }

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    cout << " Key not found "<< endl;
    return -1;
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cout << " Enter the key to find in the Array : " ;
    cin>> key;
    cout<< "The index of the key is : " << Linear_search(arr, key, n);

    return 0;
}