#include <iostream>
#include <climits>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
void findMaxMin(Node* head)
{
    if(head == NULL)
    {
        cout << "Linked List is Empty";
        return;
    }
    int maxi = head->data;
    int mini = head->data;
    Node* temp = head;
    while(temp != NULL)
    {
        if(temp->data > maxi)
            maxi = temp->data;
        if(temp->data < mini)
            mini = temp->data;
        temp = temp->next;
    }
    cout << "Maximum = " << maxi << endl;
    cout << "Minimum = " << mini << endl;
}
int main()
{
    // Creating Linked List:
    // 10 -> 50 -> 20 -> 70 -> 30
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();
    first->data = 10;
    second->data = 50;
    third->data = 20;
    fourth->data = 70;
    fifth->data = 30;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    findMaxMin(first);
    return 0;
}