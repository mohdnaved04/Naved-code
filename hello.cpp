#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector <int> Ssort(vector <int> & arr) {
    if(arr.empty()) return {};

    for( int i = 0; i<arr.size()-1; i++){
        int index = i;
        for( int j = i+1; j<arr.size(); j++ ){
            if ( arr[index] > arr[j]) index = j;
        }
    swap(arr[index], arr[i]);
    }
    return arr;
}

vector <int> Bsort(vector<int>& arr){
    if(arr.empty()) return {};

    for (int i =0; i<arr.size()-1; i++){
        bool swapped = false;
        for ( int j = 0; j<arr.size()-i-1; j++){
            if ( arr[j]> arr[j+1]) {
            swap(arr[j], arr[j+1]);
            swapped = true;
                }
            }
        if(!swapped) break;
        }
    return arr;
    }

vector <int> ISort( vector<int>& arr ){
    
    if( arr.empty()) return {};

    for ( int i =1; i< arr.size(); i++){
        int j = i-1, temp = arr[i];
        while( j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j], --j;
        }
        arr[j+1] = temp;
    }
    return arr;
}     



int main(){
    vector <int> arr = { 4, 3, 6, 8, 2, 1} ;

    /*vector <int> ans = ISort(arr);
    vector <int> b = Ssort(arr);
    for ( int c:ans){
        cout<< c << " ";
    }
    cout<< endl;
    for ( int c:b){
        cout<< c << " ";
    }*/
   vector <int> ans = Bsort(arr);
   for ( int c: ans ) cout<< c <<" ";
    cout<< endl;



    return 0;
}