#include<iostream>
using namespace std;

/*
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1 
1 * * * * * * * * 1 
*/

int main(){

    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        int value = n - i + 1;
        while(j<=n)
        {
            cout<< value<<" ";
            j++;
        }

        int star = 2*(i-1);
        
        while(star)
        {
            cout << "*" <<" ";
            star--;
        }

        int k = n - i + 1;
        while(k)
        {
            cout<<k<<" ";
            k--;
        }

        cout<<endl;
        i++;    
    }
}