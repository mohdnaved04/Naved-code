#include <iostream>
using namespace std;

void PrintArray( const int arr[], int size ){
    if ( size == 0){
        cout<< " Array has no elements"<<endl;
        return;
    }
    for ( int i=0; i<size; ++i){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

void intersection(const int arr[],const int arr1[],  int size1, int size2 ){

    if( size1 == 0 && size2== 0) {
        cout<< "One or both array has no elements "<< endl;
        return;
    }

    int i=0, j=0;

    while( arr[i] != arr1[j]) {
        if( arr1[j]> arr[i]) {
            i++;
        }
        else {
            j++;     
        }
    }
    cout<< "Intersectio is at of arr1: "<< i<< " and for arr2 its at "<< j << endl;
    return;
}

int main(){
    int n= 7;
    int arr[n]= { 2,  5, 8, 12, 15, 18, 21 };
    int m= 5;
    int arr1[m]= { 1, 4, 7, 15, 34 };

    cout<< "Original arrays is : "<< endl;
    PrintArray(arr, n);
    PrintArray( arr1, m);
    cout<< endl<< endl;

    intersection( arr, arr1, n, m);
    cout<< endl;

    cout<< "The End";

    return 0;

}