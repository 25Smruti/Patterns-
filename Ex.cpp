#include<iostream>
using namespace std;

int main() {
    
   
    int row=3 ;
    int col =3;

    cin >> row >> col;
    for (int i = 1; i <= row; i++) { 
        for (int j = 1; j <= col; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}



