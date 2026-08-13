#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || k == 1) return head;

        // Step 1: Calculate the length of the linked list
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* curr = dummy;
        ListNode* nex = dummy;
        ListNode* prev = dummy;
        
        int count = 0;
        while (curr->next != NULL) {
            curr = curr->next;
            count++;
        }

        // Step 2: Reverse nodes in groups of k
        while (count >= k) {
            curr = prev->next;
            nex = curr->next;
            
            // Reverse k-1 links inside the group
            for (int i = 1; i < k; i++) {
                curr->next = nex->next;
                nex->next = prev->next;
                prev->next = nex;
                nex = curr->next;
            }
            
            // Move prev pointer to the end of the newly reversed group
            prev = curr;
            count -= k;
        }

        ListNode* newHead = dummy->next;
        delete dummy; // Clean up the dummy node memory
        return newHead;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Creating the list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    Solution obj;
    int k = 2; // Try changing this to 3 to see different results
    
    ListNode* reversedHead = obj.reverseKGroup(head, k);

    cout << "Reversed in groups of " << k << ": ";
    printList(reversedHead);

    return 0;
}