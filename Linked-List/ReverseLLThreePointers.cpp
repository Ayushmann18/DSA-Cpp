#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* ReverseAlist(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void Traversal(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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

    cout << "Original Linked List: ";
    Traversal(first);
    Node* head = ReverseAlist(first);
    cout << "Reversed Linked List: ";
    Traversal(head);
    return 0;
}
//TC : O(n)
//SC : O(1)