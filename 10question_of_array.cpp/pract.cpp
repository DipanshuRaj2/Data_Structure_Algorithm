/*
//Insertion at the last of an Array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout <<"Enter the size of the Array :- ";
    cin>>n;
    int arr[10]  ;
    int elem ;
    
    cout <<"Enter n Array Elements :-"<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
   
    cout <<"Enter the Elements you want to insert :-"<<endl;
    cin >> elem;
    n = n+1 ;
    arr[n-1] = elem;

    cout << "The New Array is :- ";

    for(int i=0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}
*/
#include<iostream>
using namespace std;
int main(){
    int a =0;
    int b =1;
    cout << a%b;
}

