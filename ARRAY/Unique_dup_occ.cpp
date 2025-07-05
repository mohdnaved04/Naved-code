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

bool duplicate_frequency(const int arr[], int size){
    bool unique = true;
    if( size == 0 ) {
        cout<< "Array has no element"<< endl;
        return unique = false;
    }
    if( size == 1) {
        cout<< " Array has only single element thus unique"<< endl;
        return unique;
    }

    int elements[ size];
    int frequencies[ size];
    bool visited[size ]= {};
    int k=0;

    for ( int i =0; i< size; i++ ){
        if( visited[i]) continue;
        int count = 1;
        for ( int j= i+1; j< size; ++j){
            if( arr[i] == arr[j] ){
                count++;
                visited[j]= true;
            }
        }
        elements[k]= arr[i];
        frequencies[k]= count;
        k++;
    }
    for ( int i= 0; i<k; i++){
        for( int j=0; j< k; j++) {
            if( i != j && frequencies[i] == frequencies[j] ) {
                return false;
            }
        }
    }
    return true;    
}

int main(){
    int n= 6;
    int arr[n]= { 2, 2, 5, 4, 4, 4, };

    cout<< "Original array is : ";
    PrintArray(arr, n);
    cout<< endl;

    bool result = duplicate_frequency(arr, n);
    cout<< "Unique occurence "<< (result ? "true" :"false" )<< endl;
    cout<< endl;

    cout<< "The End";

    return 0;

}