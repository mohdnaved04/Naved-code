#include <iostream>
#include <vector>
#include <Climits>
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


void SwapAlternate( int arr[], int size)
{
    if( size== 0 || size == 1){
        cout<< " Arary can't be swapped "<< endl;
        return;
    }

    for (int i = 0; i<size-1 ; ++i)
    {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        ++i;
    }
   
    PrintArray(arr, size);
    cout<< endl;
}

int main()
{
    int n =5 ;
    int a[n] = { 1, 2, 3, 4, 5} ;   

    cout<< "Number of elements in the array is: " << sizeof(a)/ sizeof(int) << endl;
    cout<< "The Original array is : "<< endl;
    PrintArray(a, n);
    cout<< "The swapped element array is : "<< endl;
    SwapAlternate( a, n);

    cout<< endl; 
    return 0;

}