//Find the number of elements in an array which are greater than 25.
#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[13] = {23,45,55,32,12,43,54,12,43,54,2,4,56};

cout <<"Array Elements are :-" << endl;
for(int i = 0; i < 13; i++){
    
    cout << arr[i]<<" ";
}
cout << endl;

cout <<"Elements which is greater than 25 :-"<<endl;
for(int i = 0; i < 13; i++){

    if(arr[i] > 25){

        cout << arr[i]<<" ";

    }
  
    
}

}