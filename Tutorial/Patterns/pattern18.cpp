#include<iostream>
using namespace std;

/*
*    
**    
***    
****    
*****  
*/

int main(){

    int n;
    cin >> n;
   
    int i = 1;
    
    while(i<=n)
    {
        int star = 1;

        while(star<=i)
        {
            cout<<"*";
            star++;
        }

        int space = n -1;
        while(space)
        {
            cout<<" ";
            space--;
        }

        cout<<endl;
        i++;
    }
}