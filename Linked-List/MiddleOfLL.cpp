#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* MiddleNode(Node* head){
   Node* slow = head;
   Node* fast = head;
   while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
   }
   return slow;
}
int main() {
    
    Node* first = new Node{1, NULL};
    Node* second = new Node{2, NULL};
    Node* third = new Node{3, NULL};
    Node* fourth = new Node{4, NULL};
    Node* fifth = new Node{5, NULL};

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node* middle = MiddleNode(first);

    cout << "Middle of the linked list is: " << middle->data << endl;

    return 0;
}
//TC : O(n)
//SC : O(1)