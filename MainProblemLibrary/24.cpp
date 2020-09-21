class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head -> next == NULL) return head;
        if(head->next->next == NULL){
            ListNode* nextOne = head->next;
            head->next->next = head;
            head -> next = NULL;
            return nextOne;
        }else{
            ListNode* nextOne = head->next;
            ListNode* nextTwo = head->next->next;
            head->next->next = head;
            head->next = swapPairs(nextTwo);
            return nextOne;
        }
    }
};
