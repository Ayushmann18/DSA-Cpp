#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL){};
};
Node* ReverseBetween(Node* head, int left, int right){
    if(head == NULL || head->next == NULL || left == right) return head;
    Node* dummy = new Node(0);
    dummy->next = head;

    Node* prev = dummy;
    for(int i = 1; i<left; i++){
        prev = prev->next;
    }
   Node* curr = prev->next;
   Node* nextNode = NULL;
   for(int i = 0; i<right - left; i++){
      nextNode = curr->next;
      curr->next = nextNode->next;
      nextNode->next = prev->next;
      prev->next = nextNode;
   }
   return dummy->next;
}
void PrintLL(Node* head){
    while(head != NULL){
        cout<<head->data;
        if(head->next != NULL) cout<<"->";
        head = head->next;
    }
    cout<<endl;
}
void FreeLL(Node* head){
    while(head != NULL){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int left = 2, right = 4;
    cout<<"Original List : "<<endl;
    PrintLL(head);
    head = ReverseBetween(head, left, right);
    cout << "Reversed List (left = " << left << ", right = " << right << "): ";
    PrintLL(head);
    FreeLL(head);
    return 0;
}