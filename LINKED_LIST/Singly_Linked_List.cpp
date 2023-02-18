#include<iostream>
using namespace std;


// creating a node class
class Node{

    public:
    int data;
    Node* next;

 // constructor 
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

};

int main(){
    

    Node* node1 = new Node(10);  //creating a heap
    // created a new node 
    //constructor is called

    cout << node1 -> data << endl; //0  //data print
    cout << node1 -> next << endl; // 0  // data print next

    return 0;
}