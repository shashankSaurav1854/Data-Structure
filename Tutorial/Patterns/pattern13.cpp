#include<iostream>
using namespace std;

/*
A 
B B 
C C C 
D D D D 
E E E E E 
*/

int main(){
   int n;
   cin >>n;

    int i = 1;
    
   while(i<=n)
   {
    int j = 1;
    
    while(j<=i)
    {
        char ch = 'A'+i-1;
        cout<<ch<<" ";
        j++;
    }
    cout<<endl;
    i++;
   }
}