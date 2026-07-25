#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* DetectCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            slow = head;
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}
int main() {
    Node* first  = new Node{3, NULL};
    Node* second = new Node{2, NULL};
    Node* third  = new Node{0, NULL};
    Node* fourth = new Node{-4, NULL};

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = second;

    Node* ans = DetectCycle(first);

    if(ans != NULL)
        cout << "First node of cycle is : " << ans->data << endl;
    else
        cout << "No Cycle Found";

    return 0;
}