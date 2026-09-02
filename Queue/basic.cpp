#include <bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class Queue{
    Node* head;
    Node* tail;
    public: 
    Queue(){
        head = tail = NULL;
    }
    void push(int data){//insert data at the tail of the linked list  O(1)
        Node* newNode = new Node(data);
        if(empty()){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop(){//delete data from the head of the linked list       O(1)
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    int front(){//return the data at the head of the linked list   O(1)
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return head->data;
    }
    bool empty(){//O(1)
        return head == NULL;
    }
};
int main() {
    Queue q;
    q.push(1);  
    q.push(2);
    q.push(3);
    cout << q.front() << endl; // Output: 1
    q.pop();
    cout << q.front() << endl; // Output: 2
    return 0;
}