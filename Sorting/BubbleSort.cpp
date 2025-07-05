#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector <int> BubbleSort( vector<int>& arr ){
    
    if( arr.empty()) return {};

    for ( int i = 0; i< arr.size(); ++i){
        bool swapped = false;
        for ( int j = 0; j< arr.size()-i-1; ++j){
            if (arr[j] > arr[j+1]){
                swap(arr[j+1], arr[j]); 
                swapped = true; 
            }         
         }
         if (!swapped) break;
    } 
    return arr;
}    



int main(){
    vector <int> arr = { 4, 3, 6, 8, 9,2} ;

    vector <int> ans = BubbleSort(arr);
    for ( int c:ans){
        cout<< c << " ";
    }
    cout<< endl;


    return 0;
}