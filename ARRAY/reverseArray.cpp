#include <iostream>
using namespace std;


void PrintArray(const int arr[], int size)
{
    if (size == 0)
    {
        cout<< " Array have no elements" << endl;
        return; 
    }
    for ( int i=0; i<size; ++i)
    {
        cout<< arr[i] << " ";
    }
    cout<< endl;
}
void reverseArray(  int arr[], int size)
{
    if ( size ==0)
    { 
        cout << "Array have no elements "<< endl;
        return;
    }
    int i=0;
    int j=size-1;

    while( i < size/2){
        int temp = arr[i];
        arr[i]= arr[j];
        arr[j]= temp;
        ++i, --j;
    }
    PrintArray(arr, size);
}
 
int main()
{

    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(arr) / sizeof(int);
    
    cout<< "The original array is : ";
    PrintArray( arr, size);
    cout<< "The reversed array is : ";
     reverseArray(arr, size);

    return 0;
}