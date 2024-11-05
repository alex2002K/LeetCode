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
    std::vector<int> nextLargerNodes(ListNode* head) {
        // Step 1: Convert linked list to array/vector
        std::vector<int> values;
        ListNode* ptr = head;
        while (ptr != nullptr) {
            values.push_back(ptr->val);
            ptr = ptr->next;
        }
        
        // Step 2: Create a result array initialized with 0s
        std::vector<int> result(values.size(), 0);
        
        // Step 3: Use a monotonic stack to find the next greater elements
        std::stack<int> s; // This will store indices of `values`
        
        for (int i = 0; i < values.size(); ++i) {
            while (!s.empty() && values[i] > values[s.top()]) {
                result[s.top()] = values[i];
                s.pop();
            }
            s.push(i);
        }
        
        return result;
    }
};
