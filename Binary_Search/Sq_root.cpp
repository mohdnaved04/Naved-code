#include <iostream> 
#include <vector>
#include <limits>

using namespace std;

int Sq_Root ( int num ){

    

   long long int s= 0, e = num;
   long long int ans = -1;

    while( s <= e){
        long long int mid = s + (e-s)/2;

        if( mid*mid == num )return mid  ;
        else if( mid * mid < num ) {
            ans = mid;
            s = mid+ 1;
        }
        else e = mid - 1;
    }    
    return ans;
}

double MorePrecision( int n, int Precision, int sol ){
     
    double factor =1;
    double ans = sol;
    for ( int i = 0; i<= Precision; ++i) {
        factor = factor/10;
        for ( double j = ans; j*j <= n; j +=factor ){
            ans =j;
        }
    }
    return ans;
}


int main(){
    int n;

    cout<< "Enter the number to root :";
    cin>> n;
    cout<< endl;
    int sol = Sq_Root( n);
    cout<< "Normal root " << sol << endl;
    cout<< "Precsize square root " <<MorePrecision( n, 4, sol);

    return 0;
}