#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int n){
    
    int maxi = INT_MAX;

    for(int i = 0; i<n; i++){
        maxi = max(maxi, num[i]);
        }
        return maxi;
}

int getMin(int num[], int n){
    
    int mini = INT_MAX;

    for(int i = 0; i<n; i++){
        mini = max(mini, num[i]);
        }
        return mini;
}

int main(){

    int size;
    cin >> size;
    int num[100];

    for(int i = 0; i<size; i++){

        cin>> num[i];

        cout << "Maximum "<< getMax(num, size) <<endl;
        cout << "Minimum "<< getMin(num, size) <<endl;
    }
}