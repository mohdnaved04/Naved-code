#include <iostream>
#include <vector>
#include <Climits>
using namespace std;

void Cum_Sum_Array(const int arr[], int size)
{
    int n = size, sum = 0;
    if ( (n == 0 ) ){
        cout << " zero elements in array " << endl;
        return;
    }
    for ( int i = 0; i < n ; ++i )
    {
        sum += arr[i];
    }
    cout<< " The sum of  the array is: " << sum << endl;

}
int main()
{
    int n =5 ;
    int a[n] = { 0,2,12,4,5} ;   

    cout<< "Number of elements in the array is: " << sizeof(a)/ sizeof(a[0]) << endl;

    Cum_Sum_Array( a, n) ;

    cout<< endl; 
    return 0;

}