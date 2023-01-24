#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100] ,pos, i ,tot;
    cout<<"Enter the size of array:";
    
    cin>>tot;


    cout<<tot <<"  the Array elements "<<endl;
 
    for(i=0; i<tot; i++){
        cin >>a[i];

    }

    cout<<"\nEnter the Position you want to delete: ";
    cin>>pos;
    
    for(i =pos; i<tot; i++){
        a[i] =a[i+1];
    }
    for(i=0; i<tot-1; i++){
        cout<<a[i]<<" ";
    }
    



}