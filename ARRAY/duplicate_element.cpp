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

void duplicate_element(const int arr[], int size){

    if( size == 0) {
        cout<< "Array has no elements "<< endl;
        return;
    }
    if( size == 1) {
        cout<< "Array has single elements "<< endl;
        return; 
    }

    for ( int i=0; i< size; i++ ){
        for ( int j=i+1; j< size; j++) {
            if ( arr[i] == arr[j]){
                cout<< " At index " << i << " and element " << arr[i] << " is duplicate " << " at index " << j <<  endl;
                return;
            }
        }
    }
    
    
}

int main(){
    int n= 7;
    int arr[n]= { 2, 3, 5, 7, 4, 6, 5 };

    cout<< "Original array is : ";
    PrintArray(arr, n);
    cout<< endl;

    duplicate_element( arr, n);
    cout<< endl;

    cout<< "The End";

    return 0;

}