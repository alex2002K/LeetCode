/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* newHead = nullptr;  
        ListNode* current = head;      
        ListNode* next = nullptr; 

        while (current != nullptr) {

            next = current->next;
            current->next = newHead;

            newHead = current;
            current = next;
        }

         if (n == 1) {
            newHead = newHead->next;
        } else {
            ListNode* curr = newHead;
            int count = 1;
            while (curr != nullptr && curr->next != nullptr) {
                if (count == n - 1) {
                    curr->next = curr->next->next;
                    break;
                }
                count++;
                curr = curr->next;
            }
        }

        ListNode* finalHead = nullptr;
        current = newHead;
        while (current != nullptr) {
            next = current->next;
            current->next = finalHead;
            finalHead = current;
            current = next;
        }

        return finalHead;
    }
};
