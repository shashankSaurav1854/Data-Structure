#include<iostream>
using namespace std;

//creating a function of sum
int sumarr(int arr[] , int size){
    int sum =0;

//for printing the array sum
    for(int i = 0; i < size ;i ++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int size;
 //taking the size of array 
 cout << "Enter the elemnt size of the array"<< endl;  
    cin>> size;

    int num[100];

    cout<< "Enter the element of the array " << endl;
//taking array value input from user
    for(int i = 0; i < size ;i++){
        
        cin>> num[i];
    }
    cout<<"THe sum of all the elemnt in the array is: "<<sumarr(num,size) <<endl;
}