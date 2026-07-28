#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void Traversal(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int Length(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
bool Search(Node* head, int key)
{
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}
Node* InsertAtBeginning(Node* head, int value){
    Node* newNode = new Node{value, NULL};
    newNode->next = head;
    head = newNode;
    return head;
}
Node* InsertAtEnd(Node* head, int value){
    Node* newNode = new Node{value, NULL};
    if(head == NULL) return newNode;
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
Node* InsertAtPosition(Node* head, int value, int pos){
    if(pos == 1) return InsertAtBeginning(head, value);
    Node* newNode = new Node{value, NULL};
    Node* temp = head;
    for(int i = 1; i<pos-1 && temp != NULL; i++){
        temp = temp->next;
    }
        if(temp == NULL) return head;
        newNode->next = temp->next;
        temp->next = newNode;
        return head;
}
Node* DeleteFirst(Node* head){
    if(head == NULL) return NULL;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node* DeleteEnd(Node* head){
    if(head == NULL) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
        delete temp->next;
        temp->next = NULL;
        return head;
    }
Node* DeleteAtPosition(Node* head, int pos){
    if(head == NULL) return NULL;
    if(pos == 1) return DeleteFirst(head);
    Node* temp = head;
    for(int i = 1; i< pos-1 && temp != NULL; i++){
        temp = temp->next;
    }
        if(temp == NULL || temp->next == NULL) return head;
        Node* nodetodelete = temp->next;
        temp->next = temp->next->next;
        delete nodetodelete;
        return head;
    }
int main() {
    Node* head = NULL;
    head = InsertAtEnd(head, 10);
    head = InsertAtEnd(head, 20);
    head = InsertAtEnd(head, 30);
    cout<<"Traversal : ";
    Traversal(head);

    cout<<"Length : "<<Length(head)<<endl;

    cout << "Search 20: ";
    if(Search(head, 20))
        cout << "Found\n";
    else
        cout << "Not Found\n";

    head = InsertAtBeginning(head, 5);
    cout << "After Insert at Beginning: ";
    Traversal(head);

    head = InsertAtPosition(head, 15, 3);
    cout << "After Insert at Position: ";
    Traversal(head);

    head = DeleteFirst(head);
    cout << "After Delete First: ";
    Traversal(head);

    head = DeleteEnd(head);
    cout << "After Delete Last: ";
    Traversal(head);

    head = DeleteAtPosition(head, 2);
    cout << "After Delete at Position: ";
    Traversal(head);
    return 0;
}