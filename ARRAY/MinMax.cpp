#include <iostream>
#include <vector>
#include <Climits>
using namespace std;

void PrintArray( const int a[] , int size )
{
    int n = size;
    if ((n == 0) || (n == 1))
    {
        cout<< "Array size is  0" << endl;
        return ;
    }
    cout<< "All the elements in the array are: \n";
    for ( int i = 0; i < n; ++i ) 
    {
        cout<< a[i] << " ";
    }  
    cout<< endl;   
}
void MaxMin( const int a[], int size)
{
    int n = size;
    if ((n == 0) || (n == 1))
    {
        cout<< "Array size is not feasible" << endl;
        return ;
    }
    int max_val = INT_MIN ;
    int min_val = INT_MAX;

    
    for ( int i = 0; i < n ; i++ )
    {
        if ( max_val < a[i] )
        {
            max_val = a[i];
        }
        if ( min_val > a[i] )
        {
            min_val = a[i];
        } 
    }
    cout << "The maximum value of the array is: \n" << max_val << endl;
}
int main()
{
    int n =5 ;
    int a[n] = { 0,2,12,4,5} ;   

    cout<< "Number of elements in the array is: " << sizeof(a)/ sizeof(a[0]) << endl;

    PrintArray( a, n);
    cout<< endl;
    MaxMin( a, n) ;

    cout<< endl; 
    return 0;

}