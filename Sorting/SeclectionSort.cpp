#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector <int> SelectionSort( vector<int>& arr ){
    if ( arr.empty()) return {};

    for ( int i = 0; i< arr.size()-1; ++i){
        int index = i;
        for ( int j = i+1; j< arr.size(); ++j){
            if( arr[j] < arr[index] ) index =j;    
        }
    swap(arr[index], arr[i]);
    }
    return arr;

}

int main(){
    vector <int> arr = { 64, 25, 12, 22, 11} ;

    vector <int> ans = SelectionSort(arr);
    for ( int c:ans){
        cout<< c << " ";
    }
    cout<< endl;


    return 0;
}