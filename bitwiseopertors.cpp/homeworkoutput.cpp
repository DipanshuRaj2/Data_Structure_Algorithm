#include<iostream>
using namespace std;
int main(){
    // for(int i=0;i<=5;i++){
    //     cout<<i<<" ";
    //     i++;
    // }
        for(int i=0;i<=5;i+=2){
        cout<<i<<" ";
        i++; 
        if(i&1){

            continue;
        } 
        i++; 
    }
}