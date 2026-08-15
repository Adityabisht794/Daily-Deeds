class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0)
            return head;
        ListNode* temp1 = head;
        int count = 1;
        while (temp1->next) 
        {
            temp1 = temp1->next;
            count++;
        }
        k %= count;
        if (k == 0)
            return head;

        temp1->next = head;
        int steps = count - k - 1;
        ListNode* temp2 = head;

        while (steps--)
        {
            temp2 = temp2->next;
        }
        head = temp2->next;
        temp2->next = nullptr;
        return head;
    }
};