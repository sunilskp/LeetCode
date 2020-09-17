class Solution {
public:
      ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p = NULL, *res = NULL, *prev = NULL;
        int carry = 0;
        while (l1 || l2 || carry) {
            int sum = carry;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            sum %= 10;
            
            p = new ListNode(sum);
            if (prev) prev->next = p;
            else  res= p;
            
            prev = p;
        }
        return res;
    }
};
