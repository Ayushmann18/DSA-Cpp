#include<bits/stdc++.h>
#include<list>
using namespace std;
    class Node{
    public :
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
    Node* head;
    Node* tail;

    public : 
    List(){
        head = tail = NULL;
    }
void push_front(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = tail = newNode;
        return;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
}
void insert(int val, int pos){//TC : O(1)
    if(pos < 0){
        cout<<"Invalid position!"<<endl;
        return;
    }
    if(pos == 0){
        push_front(val);
        return;
    }
    Node* temp = head;
    for(int i = 0; i<pos - 1; i++){
        if(temp = NULL){
            cout<<"Invalid!\n";
            return;
        }
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    newNode->next=temp->next;
    temp->next = newNode;
}
void printLL(){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
int main() {
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.insert(4,1);
    ll.printLL();
    return 0;
}