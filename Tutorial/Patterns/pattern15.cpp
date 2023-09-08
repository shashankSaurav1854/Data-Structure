#include<iostream>
using namespace std;

/*
A 
B C 
C D E 
D E F G 
E F G H I 
*/

int main(){
   int n;
   cin >> n ;

   int i  = 1;
    
   while(i<=n)
   {
    int j = 1;
    char ch = 'A'+ i - j;
    //char ch = 'A' + i + j - 2; 
    while(j<=i)
    {
        cout<<ch<<" ";
        ch++;
        j++;
    }
    cout << endl;
    i++;
   } 
}