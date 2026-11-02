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
    bool hasCycle(ListNode* head) {
        if (!head) return false;
        set<int> visited_vals;
        ListNode* curr;
        curr = head;
        int count = 0;
        while (curr->next) {
            visited_vals.insert(curr->val);
            curr = curr->next;
            count++;
            if (visited_vals.size() != count) return true;
        }
        return false;
    }
};
