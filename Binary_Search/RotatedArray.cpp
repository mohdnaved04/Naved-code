#include <iostream>
using namespace std;

void PrintArray(const int arr[], int size) {
    if (size == 0) {
        cout << "Array has no elements" << endl;
        return;
    }
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int BinarySearch(const int arr[], int s, int e, int key) {
    
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) s = mid + 1;
        else e = mid - 1;
    }
    return -1;
}
int GetPivot( const int arr[], int size , int key){
    
    int s= 0,  e= size-1;

    while( s< e){
        int mid = s + (e-s )/2;
        
        if( arr[mid]> arr[ e]){
            s= mid +1;
        }
        else{
            e= mid;
        }
    }
    return  s;
}
int FindinRotatedArray(const int arr[], int size, int key) {
    
    int pivot = GetPivot(arr, size, key);
    if (key >= arr[pivot] && key <= arr[size - 1]) {
        return BinarySearch(arr, pivot, size - 1, key);
    } else {
        return BinarySearch(arr, 0, pivot - 1, key);
    }
}

int main() {
    int n = 5;
    int arr[n] = {7, 9, 1, 2, 3};
    int key = 2;
    PrintArray( arr, n);

cout<<FindinRotatedArray( arr, n, key  )<< endl;
    

    return 0;
}
