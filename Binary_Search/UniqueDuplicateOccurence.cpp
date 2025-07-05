#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int firstOccurence( vector<int> & arr, int key){
    int start =0, end = arr.size()-1, ans = -1;
    while( start <= end){
        int mid = start + (end - start) / 2;
        if( arr[mid] == key ){
            ans = mid;
            end = mid-1; // shifting left side
        }
        else if ( arr[mid]> key) end = mid -1;
        else start = mid +1;   
    }
    return ans;
}
int LastOccurence( vector<int> & arr, int key){
    int start =0, end = arr.size()-1, ans = -1;
    while( start <= end){
        int mid = start + (end - start) / 2;
        if( arr[mid] == key ){
            ans = mid;
            start = mid+1;  // shifting right side
        }
        else if ( arr[mid]> key) end = mid -1;
        else start = mid +1;   
    }
    return ans;
}

bool UniqueOccurence (  vector<int> & arr){
    sort(arr.begin(), arr.end()); 
    vector <int> unique;

    for (int i =0; i< arr.size(); ++i){
        int val = arr[i];
        int firstocc = firstOccurence( arr, val);
        int LastOcc = LastOccurence ( arr, val);
        int count = LastOcc - firstocc +1;
        unique.push_back(count);
        i = LastOcc;
    }

    int k= -1;
    sort(unique.begin(), unique.end());
    for ( int i =0; i<unique.size()-1; ++i){
       if( unique[i]  == unique[ i+1]) return false;
    }

    return true;
}
int main(){

vector <int> arr = { -3, 0, 1, -3, 1, 1, 1, -3, 10, 0 };
int size = arr.size();


if( UniqueOccurence(arr)) cout<< "The occurence is unique"<< endl;
else cout<< "The occrence is not unique" << endl;

return 0;

}