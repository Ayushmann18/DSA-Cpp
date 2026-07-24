#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void ReverseList(Node* head){
    vector<int> arr;
    Node* temp = head;
    while(temp != NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    temp = head;
    for(int i = arr.size() - 1; i>=0; i--){
        temp->data = arr[i];
        temp = temp->next;
    }
}
void printLL(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main() {
    Node* first = new Node{10,NULL};
    Node* second = new Node{20,NULL};
    Node* third = new Node{30,NULL};
    Node* fourth = new Node{40,NULL};

    first->next = second;
    second->next = third;
    third->next = fourth;

    ReverseList(first);

    printLL(first);
    return 0;
}