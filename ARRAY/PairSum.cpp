#include <iostream> 
using namespace std;

void PrintArray( const int arr[], int size){


    if ( size ==0) {
        cout<< " Array has no elements"<< endl;
        return;
        }
    for ( int i=0; i< size; ++i){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
}

void PairSum( const int arr[], int sum, int size){

    if ( size ==0) {
        cout<< " Array has no elements"<< endl;
        return;
    }

    if ( size == 1) {
        cout<< "Array has single element only "<< endl;
        return;
    }
    for (int i =0; i< size; i++){
        for( int j = i+1; j< size; j++){
            if( sum == arr[i] + arr[j]){
                cout<< " Pair sum is (" << arr[i] << ", "<< arr[j] << ") "<< endl;
            }
        }
    }

    cout<< "The End" << endl;

}

int main(){

    int n=5;
    int arr[n] = { 2, -3, 3, 3, -2};



    cout<<endl;
    int sum= 5;
    PairSum( arr, sum, n);


    return 0;
}