#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

};
void traversing(node *head){
    node *temp = head;
    while(temp !=NULL){
        cout << temp->data<<" ";
        temp =temp->next;
    }
}

int main(){
   node* head = new node();
   node* second = new node();
   node* third = new node();
   node* fourth = new node();

   head->data = second;
   second->data = third;
   third->data = fourth;
   fourth->data = 40;
   
   
   traversing(head);

}