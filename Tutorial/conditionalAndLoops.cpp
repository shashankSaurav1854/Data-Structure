#include<iostream>
using namespace std;

int  main(){

//Number is postive or negative

    /*
    int a;
    cin>>a;

    if (a>0){
        cout<<"A is postive"<< endl;
    }
    else{
        cout<<"A is negative"<< endl;
    }
    */
    
//Two number is greater

    /*
    int a,b;

    cout<<"enter the value of a "<< endl;
    cin>>a;
    cout<<"enter the value of b "<< endl;
    cin>>b;

    if(a>b){
        cout<<"a is greater "<< endl;    
    }
    if (b>a){
        cout<<"b is greater"<< endl;
    }
    */

//Number is postive or negative or zero 

    /*
    int a;
    cout<<"enter the value of a "<<endl;
    cin>>a;

    if(a>0){
        cout<<"a is postive";
    }
    else if(a<0) {
        cout<<"a is negative";
    }
    else{
        cout<<"a is 0";
    }
    */

//using ASCII value to identify the charater in the input
     
    /*   
    char ch;
    cout<< "Enter the value of ch" << endl;
    cin>>ch;

    if (ch>96 && ch<123){
        cout<<"Lower case";
    }
    
    else if(ch>64 && ch<91){
        cout<<"Upper case";
    }
    else if(ch>47 && ch<58){
        cout<<"numerical";
    }
    else{
        cout<<"symbol";
    }
    return 0;
    */

// sum of even numbers with whileloop

   /*
   int n;
   cin>>n;

   int i = 2;
   int sum = 0;

    while(i<=n){
        sum = sum + i;
        i = i + 2;
    }
    cout << "value of sum of n is " << sum <<endl;
    */

//to covert ferenheit to celsius

    /*
   float c,f;
   cout<< "enter the value of temperature" << endl;
   cin >> f;

   c = 5*(f-32)/9;

   cout<< "the value of celsius " << c <<endl;
    */

   int n;
   cin >> n;

   int i = 2;

   while(i<n){
     
     if(n%i==0)
     {
        cout<<"not a prime number for "<<i<<endl;
     }
     else{
        cout<<"prime number for "<<i<<endl;
     }
     i++;
   }

} 