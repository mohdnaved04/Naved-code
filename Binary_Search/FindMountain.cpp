#include <iostream>
#include <vector>
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

int Binary( const vector<int>& arr, int start, int end, int key, bool isAsc ){
    while( start<=end ){
        int mid = start + ( end - start)/2;
        if( arr[mid] == key ) return mid;
        if ( isAsc){
            if( arr[mid] < key )  start = mid + 1;
            else end= mid -1;
        }
        else {
            if( arr[mid] > key )  start = mid + 1;
            else end= mid -1;
        }
    }
    return -1; // NOT FOUND
}
int FindPeak( const vector <int>& arr ){
    int s= 0, e = arr.size()-1; 
    while( s < e){
        int m = s + ( e - s)/2;
        if( arr[m] < arr[m + 1] ) s = m+1;
        else e=m;
    }
    return s;
}
int FindMoutain(const vector<int>& mountain , int key){
    int pivot = FindPeak( mountain );
    int left = Binary( mountain, 0, pivot, key, true );

    if (left != -1 )return left;
    return Binary( mountain, pivot +1 , mountain.size()-1, key, false );
}


int main(){
   vector <int> arr = {1, 3, 5, 7, 12, 9, 5, 2};
    int key = 2;
      
    int index = FindMoutain( arr, key ) ;
    if ( index != -1){
        cout<< "The index of the " << key << " is "<< index << endl;
    }
    else {
        cout<< "Element not found "<< endl;
    }

    return 0;
}