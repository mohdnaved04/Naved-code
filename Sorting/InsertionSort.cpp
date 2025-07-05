#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector <int> InsertionSort( vector<int>& arr ){
    
    if( arr.empty()) return {};

    for (int i = 1; i<arr.size(); i++ ){
        int temp = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j+1] = temp;
    }
    
    return arr;
}     



int main(){
    vector <int> arr = { 5, 6, 2, 12   , 11} ;

    vector <int> ans = InsertionSort(arr);
    for ( int c:ans){
        cout<< c << " ";
    }
    cout<< endl;


    return 0;
}