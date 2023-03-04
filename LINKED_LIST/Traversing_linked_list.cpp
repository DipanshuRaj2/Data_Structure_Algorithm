#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void traversing(node *head){
    node* temp = head;
    while(temp != NULL){
        cout <<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    
    traversing(head);

    return 0;
}
