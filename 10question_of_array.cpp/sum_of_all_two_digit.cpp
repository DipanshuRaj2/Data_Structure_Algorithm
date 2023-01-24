//Find out the sum of all the two digit numbers in an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum =0;
    int array[13] = {12, 11, 10, 4, 5 ,3 ,2 ,11 ,12 ,6, 3, 20 ,13};
    
    cout <<"Array Elements are :-\n";
    for(int i = 0; i < 13; i++){
  
        cout << array[i]<<" ";
    }
    cout << endl;

    cout <<"Sum of all two digit numbers in an given array:-\n";
    for(int i = 0; i < 13; i++){
        if(array[i] / 10){
            sum = sum +array[i];
        }
    }
    cout << sum;
}

