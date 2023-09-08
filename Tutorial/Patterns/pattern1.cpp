#include<iostream>
using namespace std;

/*
11111
22222
33333
44444
55555
*/

int main(){

    int n;
    cin >> n;

    int i = 1;

    while(i<=n)
    {

        int j = 1;

        while(j<=n)
        {
            cout << i;
            j++;

        }
        cout << endl;
         i++;
    }

}