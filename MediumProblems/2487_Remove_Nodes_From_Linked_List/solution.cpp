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
    ListNode* removeNodes(ListNode* head) 
    {
        std::vector<int> myList;
        while(head != nullptr)
        {
            myList.push_back(head->val);
            head = head->next;
        }

        std::vector<int> newList;

        for (int &value : myList) 
        {
            while (!newList.empty() && newList.back() < value) 
            {
                newList.pop_back();
            }
            newList.push_back(value);
        }

        ListNode* new_head = new ListNode();
        ListNode* current = new_head;
        for(int &value : newList)
        {
            current->next = new ListNode(value);
            current = current->next;      
        }
        return new_head->next;
    }
};
