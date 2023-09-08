#include<iostream>
using namespace std;

/*
A B C D E 
F G H I J 
K L M N O 
P Q R S T 
U V W X Y 
*/

int main(){
    int n;
    cin>> n;

    int i = 1;
    char ch = 'A';
    while(i<=n)
    {
        
        int j = 1;
        
        while(j<=n)
        {
            
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}