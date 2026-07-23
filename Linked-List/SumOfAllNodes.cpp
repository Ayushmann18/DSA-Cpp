#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
int findSum(Node* head)
{
    int sum = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
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

    cout << "Sum = " << findSum(first);
    return 0;
}