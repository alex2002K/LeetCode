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
    ListNode* insertGreatestCommonDivisors(ListNode* head) 
    {
        ListNode* current = head; 

        while (current != nullptr && current->next != nullptr) 
        {
            int value = gcd(current->val, current->next->val);

            ListNode* gcd = new ListNode(value);
            gcd->next = current->next;
            current->next = gcd;

            current = gcd->next;
            
        }
        return head;
    }

    int gcd(int a, int b) 
    { 
    
        int result = std::min(a, b); 
        while (result > 0)
	{ 
            if (a % result == 0 && b % result == 0) 
	    { 
            	break; 
            } 
            result--; 
        } 
        return result; 
    } 
};
