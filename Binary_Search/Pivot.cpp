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

int Pivot( const int arr[], int size ){
    if (size == 0 ) {
        cout<< "Array has no element " << endl;
        return -1;
    }

    int s=0, e= size-1;
    
    while( s< e){
        int mid = s + ( e - s)/2;

        if(  arr[mid ] <= arr[mid +1]) {
            s= mid +1;
        }
        else{
            e=mid;
        }
    }
    return s;
}

int main(){
    int n= 7;
    int arr[n]= {1, 3, 8, 12, 9, 4, 2};
    
    cout<< "Original arrays is : "<< endl;
    PrintArray(arr, n);
    cout<< endl;

     int PeakIndex =Pivot( arr,n);
    cout<< "Index of the Peak element " << arr[PeakIndex] << " is " << Pivot( arr, n) ;
    cout<<endl;


    return 0;

}