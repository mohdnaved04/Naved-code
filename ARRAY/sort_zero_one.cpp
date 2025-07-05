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

void sort_zero_one(int arr[], int size){

    if( size == 0){
        cout << " Array has no elements "<< endl;
        return;
    }
    if( size ==1){
        cout<< "Array has single element only. "<< endl;
        return;
    }

    int i = 0;
    int j= size-1;

    while( i <= j){
        if ( arr[i]==0 && arr[j]== 1){
            ++i, --j;
        }
        else if( arr[i] ==1 && arr[j]==0 ){
            int temp = arr[i] ;
            arr[i] = arr[j], arr[j]= temp;
        }
        else if( arr[i] ==0 && arr[j]==0 ){
            i++;
        }
        else{
            j++;
        }
    }
    PrintArray( arr, size);
    cout<< "The End"<< endl;
}

int main(){
    int n= 7;
    int arr[n]= { 0, 1, 0, 0, 1, 0, 0};
    
    cout<< "Original arrays is : "<< endl;
    PrintArray(arr, n);

    sort_zero_one(arr, n);
    cout<<endl;


    return 0;

}