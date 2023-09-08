#include<iostream>
using namespace std;

/*
    1
   121
  12321
 1234321
123454321
*/

int main(){

    int n;
    cin >> n;
   
    int i = 1;

    while(i<=n)
    {
        //print space(1st triangle)

        int space = n-i;
        while(space)
        {
            cout << " ";
            space--;
        }
        //print 2nd triangle

        int j = 1;
        while(j<=i)
        {
            cout << j;
            j++;
        }

        //print 3rd triangle

        int k = i-1;
        while(k)
        {
            cout << k;
            k--;
        }

        cout<<endl;
        i++;
    }
}