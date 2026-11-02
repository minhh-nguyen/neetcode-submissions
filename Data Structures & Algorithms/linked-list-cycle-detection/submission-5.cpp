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
        set<ListNode*> seen;
        ListNode* curr;
        curr = head;
        int count = 0;
        while (curr->next) {
            seen.insert(curr);
            curr = curr->next;
            count++;
            if (seen.size() != count) return true;
        }
        return false;
    }
};
