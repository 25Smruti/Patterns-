#include<bits/stdc++.h>
using namespace std;

int main()
{

    int rows;
    cout << "Enter the Number of rows - "; 
    cin >> rows;

    cout << "Triangle of " << rows << " using * -\n";
    for( int i = 1; i <= rows; i++ ) 
    {
        for( int j = 1; j <= i; j++ )
        {
            cout << "*  ";
        }
        cout<<endl;
    }
    
    return 0;
}

