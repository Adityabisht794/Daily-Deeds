class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // Base case: 0 or 1 node
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* t1 = head;
        ListNode* t2 = head->next;
        t1->next = swapPairs(t2->next);
        t2->next = t1;
        return t2;
    }
};