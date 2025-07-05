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

int FirstOcc( const int arr[], int size , int key ){

    if( size == 0){
        cout<< "Array has no elements " << endl;
        return -1;
    }

    int start =0, end =  size -1, ans = -1;

    while ( start <= end ) {
        int mid = start + (end - start)/2;

        if ( arr[mid] == key ){
            ans = mid; 
            end = mid - 1;
        }
        else if( arr[mid] < key ){
            start = mid +1;
        }
        else {
            end = mid -1;
        }
    }
    return ans;
}
int LastOcc( const int arr[], int size , int key ){

    if( size == 0){
        cout<< "Array has no elements " << endl;
        return -1;
    }

    int start =0, end =  size -1, ans = -1;

    while ( start <= end ) {
        int mid = start + (end - start)/2;

        if ( arr[mid] == key ){
            ans = mid; 
            start = mid + 1;
        }
        else if( arr[mid] < key ){
            start = mid +1;
        }
        else {
            end = mid -1;
        }
    }
    return ans;
}

void First_Last_occurence( int (*FirstOcc0)( const int [], int  , int ), int (*LastOcc)( const int [], int , int ), const int arr[], int size, int key){
    cout<< " The first occurence of the " << key << " is  at index : "<< FirstOcc( arr, size, key)<< endl;
    cout<< " The last occurence of the " << key << " is  at index : " << LastOcc( arr, size, key) << endl;
}

int main(){
    int n= 10;
    int arr[n]= {3, 4, 5, 5, 5, 5, 8, 9, 11 , 13 };
    int key = 5;
    
    cout<< "Original arrays is : "<< endl;
    PrintArray(arr, n);
    cout<< endl;

    cout<< " The first occurence of the " << key << " is  at index : "<<FirstOcc( arr, n, key)<< endl;
    cout<< " The last occurence of the " << key << " is  at index : "<<LastOcc( arr, n, key);
    cout<< endl;

    First_Last_occurence( FirstOcc, LastOcc, arr, n, key );
    cout<<endl;


    return 0;

}