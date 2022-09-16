#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        
        //memory free
        if(this->next !=NULL){
            delete next;
            this->next =  NULL;
        }
        cout<<"memory is free >> "<<endl;
    }
};
void InsertionHead(Node* &head , int d){
    if (head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
    }
}
void InsertionTail(Node * &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->next = NULL;
}

// recurtion
void print(Node * &head){
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    print(head->next);
}
Node*  reverse(Node* &head){
    if(head == NULL|| head->next == NULL){
        return head ;
    }
    Node* chhotahead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return chhotahead;
}
void printKnode(Node* head,int k){
    if(head == NULL){
        return;
    }
    printKnode(head->next,k);
    k--;
    if(k==0){
        cout<<"k number data >> "<<head->data<<" ";
    }
}
int main(){
    // Node *node1 = new Node(11);
    Node* head = new Node(10);
    InsertionHead(head,11);
    InsertionHead(head,12);
    InsertionHead(head,13);
    InsertionHead(head,14);
    InsertionHead(head,15);
    print(head);
    cout<<endl;
    // head= reverse(head);
    // print(head);
    int k = 3;
    printKnode(head,k);

    return 0;
}