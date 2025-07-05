#include <iostream>
#include <vector>
using namespace std;

void PrintArray(const int arr[], int size)
{
    if (size == 0)
    {
        cout<< " Array has no elements" << endl;
        return; 
    }
    for ( int i=0; i<size; ++i)
    {
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

void Unique_elements( const int arr[], int size)
    {
    if ( size == 0 || size ==1)
    {
        cout<< "Array has no or one element only "<< endl;
        return;
    }
    int unique_arr[size] ={};
    int k=0;

    for ( int i = 0; i < size; ++i )
    {
        bool Isunique = true;
        for ( int j =0; j< size; ++j)
        {
            if ( i != j && arr[i ] == arr[j] )
            { 
                Isunique = false;
            }
        }
        if ( Isunique)
        { 
            unique_arr [k++] = arr[i];
        }
    }
    if ( k == 0)
    { 
        cout<< "Array has no unique elements";
        return;
    }
    PrintArray( unique_arr, k);
    
    
    }

int main()
{
    int n =10 ;
    int a[n] = { 2, 3, 5, 6, 2, 4, 5, 6, 9, 8} ;   

    cout<< "Number of elements in the array is: " << sizeof(a)/ sizeof(int) << endl;
    cout<< "The Original array is : "<< endl;
    PrintArray(a, n);
    
    cout<< "The Unique elements array are : "<< endl;
    Unique_elements(a, n) ;
    cout<< endl; 
    return 0;

}