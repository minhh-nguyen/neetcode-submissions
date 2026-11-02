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
        unordered_set<ListNode*> seen;
        ListNode* curr;
        curr = head;
        int count = 0;
        while (curr->next) {
            if (!seen.insert(curr).second) {
                return true;
            }
            curr = curr->next;
        }
        return false;
    }
};
