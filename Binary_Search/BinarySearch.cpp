#include <iostream>
using namespace std;

int BinarySearch( const int arr[], int key, int size){
    
    if( size ==0){
        cout<< "Array is empty " << endl;
        return -1;
    }   
    
    int start = 0, end = size-1;

    while( start <= end ){
        int mid= start + (  end- start)/2;
        
        if ( arr[mid] == key ){
            cout<< "The Index of the key element is : ";
            return mid;
        }
        if( arr[mid] > key) {
            end = mid -1;
        }
        else{
            start = mid+1;
        }
        
    }
    cout<< "Element not found in the array "<< endl;
    return -1;

}

int main(){

    int n=10 , m = 11;
    int arr[n] = { 1, 2, 3, 4, 5,6 ,7 ,8, 9, 10};
    int arr2[m] = { 0, 1, 2, 3, 4, 5,6 ,7 ,8, 9, 10};
    int key = 5;

    cout<< "The given array is : "<< endl;
    for ( int i=0; i < n ; i++) {
        cout<< arr[i] << " ";
    }
    cout<< endl;
    cout<< BinarySearch( arr, key, n) << endl;
   int found2 = BinarySearch( arr2, key, m);
   cout<< found2<< endl;
   

   cout<< "Hello world"<< endl;
   
   return 0;
}