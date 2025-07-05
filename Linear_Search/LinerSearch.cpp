#include <iostream>
using namespace std;

int LinearSearch( const int arr[], int key, int size){
    if( size ==0){
        cout<< "Array is empty " << endl;
        return -1;
    }
    if ( size == 1) {
        cout<< "Array has only single element " << endl;
        return -1;
    }
   
    for ( int i =0; i < size-1; ++i ){
        if ( arr[i] == key ){
             cout<< " The index of the element is : " ;
             return i;
        }
    }
    cout<< " The element is not present in the array " << endl;
    return -1;

}

int main(){

    int n=10;
    int arr[n] = { 1, 2, 3, 4, 5,6 ,7 ,8, 9, 10};

    int key = 5;

    cout<< "The given array is : "<< endl;
    for ( int i=0; i < n ; i++) {
        cout<< arr[i] << " ";
    }
    cout<< endl;
   int found = LinearSearch( arr, key, n);
    cout<< found;

    return 0;
}