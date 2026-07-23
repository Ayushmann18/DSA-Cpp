#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
int countNodes(Node* head)
{
    int count = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    // Creating Linked List: 10 -> 20 -> 30 -> 40
    Node* first = new Node();
    first->data = 10;

    Node* second = new Node();
    second->data = 20;

    Node* third = new Node();
    third->data = 30;

    Node* fourth = new Node();
    fourth->data = 40;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    cout << "Number of Nodes = " << countNodes(first);
    return 0;
}
//TC : O(n)
//SC : O(1)