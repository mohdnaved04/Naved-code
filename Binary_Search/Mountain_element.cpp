#include <iostream>
using namespace std;

int MountainElement( const int arr[], int size ){

    if ( size == 0 ){
        cout<< "Array has no element "<<endl;
        return -1;
    }

    int s =0, e= size -1;

    while ( s<e ){     
        int mid = s + ( e- s)/2;
        if( arr[mid] < arr[mid+1]){
            s= mid+1;
        }
        else {
            e= mid;
        }
    }
    return e;
}

int main(){
    
    int n = 9;
    int arr[n] = { 1, 2, 3, 4, 5, 4, 3, 2, 1};

    cout<< "Original array is : " << endl; 
    for ( int i =0; i< n; i++ ){
        cout<< arr[i] << " " ;
    }
    cout<< endl;
    int PeakIndex = MountainElement(arr, n);
    cout<< "Index of the Peak element " << arr[PeakIndex] << " is " << MountainElement( arr, n);
    cout<< endl; 
    
   

    return 0;

}