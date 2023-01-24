#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10] , n , pos, i;
    cin>>n;
    for(i =0; i<=n; i++){
        cin>>arr[i];
    }
    cout<<" enter the element you want to search" ;
    cin>>pos;
    for(i=pos; i<n; i++){
        arr[i]=arr[i+1];
    }
    for(i=0; i<n-1; i++){
        cout<<arr[i]<<" ";
    } 