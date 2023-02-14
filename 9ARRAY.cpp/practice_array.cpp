#include<bits/stdc++.h>
using namespace std;
int maxi(int arr[] , int n){
    int max = INT_MIN;
    for(int i = 0; i<n; i++){

        if(arr[i] > max){

           max = arr[i];
        }
    }
    return max;


}
int mini(int arr[] , int n){
    int min = INT_MAX;

    for(int i = 0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int n , i;
    cin >>n;
    int arr[n];

    for(i = 0; i<n; i++){
        cin >> arr[i];
    }

    cout<<"Maximum no. is :- "<<maxi(arr, n);
    cout <<"Minimum no. is :-"<<mini(arr, n);
    return 0;
}