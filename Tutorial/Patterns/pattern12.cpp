#include<iostream>
using namespace std;

/*
A B C D E 
B C D E F 
C D E F G 
D E F G H 
E F G H I 
*/

int main(){
   int n;
   cin>>n;

   int i = 1;
   //char ch = 'A';
   while(i<=n)
   {
    int j  = 1;
    char ch = 'A'+ i + j - 2; 
    while(j<=n)
    {
        cout<<ch<<" ";
        ch++;
        j++;
    }
   // ch = 'A' + i;
    cout<<endl;
    i++;
   }
}