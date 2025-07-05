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

void sort_zero_one_two(int arr[], int size){

    if( size == 0){
        cout << " Array has no elements "<< endl;
        return;
    }
    if( size ==1){
        cout<< "Array has single element only. "<< endl;
        return;
    }

    int i = 0;
    int zeros=0, ones=0, twos=0;

    while( i< size){
        if ( arr[i]==0) zeros ++, i++;
        else if ( arr[i]==1) ones ++, i++;
        else if ( arr[i]==2) twos ++, i++;
    }
    i=0;
    while(i < size ){
        if ( zeros != 0){
            arr[i]= 0;
            zeros--, i++;
        }
        else if( ones != 0){
             arr[i]= 1;
            ones--, i++;
        }
        else if( twos != 0){
            arr[i]= 2;
            twos--, i++;
        }
    }
           
    PrintArray( arr, size);
    cout<< "The End"<< endl;
}

int main(){
    const int n = 10;
    int arr[n]= { 0, 1, 0, 2, 0, 1, 2, 0, 0, 2};
    
    cout<< "Original arrays is : "<< endl;
    PrintArray(arr, n);

    sort_zero_one_two(arr, n);
    cout<<endl;


    return 0;

}