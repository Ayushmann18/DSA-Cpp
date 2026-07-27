#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* next;
};
Node* mergeTwoLists(Node* head1, Node* head2){
    if(head1 == NULL || head2 == NULL){
        return head1 == NULL ? head2 : head1;
    }
    if(head1->val <= head2->val){
        head1->next = mergeTwoLists(head1->next, head2);
        return head1;
    }
    else{
        head2->next = mergeTwoLists(head1, head2->next);
        return head2;
    }
}
int main()
{
    Node* first1 = new Node{1, NULL};
    Node* second1 = new Node{2, NULL};
    Node* third1 = new Node{4, NULL};

    first1->next = second1;
    second1->next = third1;

    Node* first2 = new Node{1, NULL};
    Node* second2 = new Node{3, NULL};
    Node* third2 = new Node{4, NULL};

    first2->next = second2;
    second2->next = third2;

    Node* head = mergeTwoLists(first1, first2);

 
    cout << "Merged Linked List: ";
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}