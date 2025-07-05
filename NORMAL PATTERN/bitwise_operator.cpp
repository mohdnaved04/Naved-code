#include <iostream>
#include <string>
using namespace std;

bool No_is_power_of_two( int n)
{
    return (n > 0 ) && (( n &(n-1))==0);
}


int main()
{
/*int a = 3, b = 2;
cout<< "the result of a and b is : " << (a & b) ;
cout<< endl;
cout<< "the result of a or b is : " << (a | b) ;
cout<< endl;
cout<< "the result of a not b is : " << (~b) ;
cout<< endl;
cout<< "the result of a xor b is : " << (a ^ b) ;
cout<< endl;
cout<< "the result of a left shift b is : " << (a << b) ;
cout<< endl;
cout<< "the result of a right shift b is : " << (a >> b) ;
cout<< endl;*/

cout<< No_is_power_of_two(66) << endl;
cout<< No_is_power_of_two(64) << endl ;

cout<< endl;
return 0;

}