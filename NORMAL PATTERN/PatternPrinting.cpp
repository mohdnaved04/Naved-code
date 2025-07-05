#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 6 ;
    // PATTERN PRINTING

    /*for  ( int i = 1 ; i < n ; ++i )
      {
          cout << i << endl ;
      } */

    /*for ( int i = 1 ; i < n ; i++ )
    {
        for ( int j = 1 ; j < n ; j++ )
        {
            cout << i ;
        }
        cout << endl ;
    }*/

    /*for ( int i = 1 ; i < n ; i++ )
    {
        for ( int j =n ; j > 0 ; j-- )
        {
            cout << j ;
        }
        cout << endl ;
    }*/

    /*n = 4;
    int k = 1;
    for ( int i = 1 ; i < n ; ++i )
    {
        for ( int j =1 ; j < n ; ++j )
        { cout << k << " " ;
        k++ ;
        }
        cout<< endl ;
    }*/

    /*for ( int i = 1 ; i < n ; ++i )
    {
        for ( int j = 0 ; j < i ; ++j )
    {
        cout << "* ";
    }
    cout << endl ;
    }*/

    /*for ( int i = 1; i < n; i++ )
    {
        for ( int j = 0; j < i; j++ )
        {
            cout << i << " " ;
        }
    cout << endl;
    }*/

    /*int k = 1;
    for ( int i = 1; i < n; i++ )
    {
        for ( int j = 1 ; j < i; j++ )
        {
            cout << k << " " ;
            k++ ;
        }
    cout << endl;
    }*/

    /*for ( int i = 1; i < n; i++ )
    {
        for ( int j = 0 ; j < i; j++ )
        {
            k++ ;
            cout << i+j << " " ;
        }
    cout << endl;
    }*/

    /*for ( int i = 1; i < n; i++ )
    {   int k = i;
        for ( int j = 0 ; j < i; j++ )
        {
            cout << k << " " ;
            k--;
        }
    cout << endl;
    }*/

    /*n= 4;
    char ch = 'A' ;
    for ( int i = 1; i < n; i++ )
    {
        for ( int j = 1 ; j < n; j++ )
        {
            cout << ch << " " ;
        }
    cout << endl;
    ch++;
    }*/

    /*n= 4;
    char ch = 'A' ;
    for ( int i = 1; i < n; i++ )
    {
        for ( int j = 1 ; j < n; j++ )
        {
            cout << ch << " " ;
            ch++;
        }
    cout << endl;
    }*/

    /*n= 4;
    char ch = 'A' ;
    for ( int i = 1; i < n; i++ )
    {
        for ( int j = 0 ; j < i; j++ )
        {
            cout << ch << " " ;
        }
    cout << endl;
    ch++;
    }*/

    /*n= 4;
    char ch = 'A' ;
    for ( int i = 1; i < n; i++ )
    {
        for ( int j = 0 ; j < i; j++ )
        {
            cout << ch << " " ;
            ch++;
        }
    cout << endl;
    }*/

    /*n= 4;
    for ( int i = 0; i < n; i++ )
    {
        char ch = 'D'-i ;
        for ( int j = 0 ; j <= i; j++ )
        {
            cout << ch << " " ;
            ch++;
        }
    cout << endl;
    }*/

    /*n= 4;
    //char ch = 'D' ;
    for ( int i = 0; i < n; i++ )
    {
        char ch = 'D'-i ;
        for ( int j = 0 ; j <= i; j++ )
        {
            cout << ch << " " ;
            ch++;
        }
    cout << endl;
    }*/

    /*for ( int i = 1; i < n; i++ )
    {
        for ( int j = n-i ; j > 0; j-- )
        {
           cout << " ";
        }
        for ( int j = 0 ; j < i; j++ )
        {
           cout << "*";
        }
    cout << endl;
    }*/

    /*for ( int i = 1; i < n; i++ )
    {
        for ( int j = n-i ; j > 0; j-- )
        {
           cout << "* ";
        }
    cout << endl;
    }*/

    /*for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }*/

    /*for ( int i = 0; i < n; ++i )
    {
        for ( int j = n-i; j > 0; --j)
        { 
        cout<< "* " ;
        }
        cout << endl ;
    } */

/*for ( int i = 0; i < n; ++i )
{
    for ( int j = 0; j < i; j++)
    {
        cout << " ";
    }
    for ( int j = n - i; j > 0; j--)
    {
        cout << "*";
    }
    cout << endl;
}*/

/*for ( int i = 0; i < n; ++i )
{
    for ( int j = 0; j < i; j++)
    {
        cout << " ";
    }
    for ( int j = n - i; j > 0; j--)
    {
        cout << i ;
    }
    cout << endl;
}*/

/*for ( int i = 0; i < n; ++i )
{
    for ( int j = n-i; j > 0; j--)
    {
        cout << " ";
    }
    for ( int j = 0; j <  i; j++)
    {
        cout << i ;
    }
    cout << endl;
}*/

/*n =5;
int count =1;
for ( int i = 0; i < n; ++i )
{
    for ( int j = n-i; j > 0; j--)
    {
        cout << " ";
    }
    for ( int j = 0; j <  i; j++)
    {
        cout <<  count  ;
        count++;
    }
    cout << endl;
}       */

/*n = 5;
for ( int i = 1; i <= n; ++i )
{
    for ( int j = n - i - 1; j >= 0; --j )
    {
        cout << " ";
    }
    int k = 1;
    for ( int j = 1; j < i ; j++ )
    {
        cout<< k;
        k++;
    }
    int p=i-2;
    for ( int j = 2; j <i; ++j){
        cout<< p ;
        p--;
    }
    cout << endl;
}   */

cout << endl;
return 0;

}