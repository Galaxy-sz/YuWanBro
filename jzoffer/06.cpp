/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <vector>
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    vector<int> ans;
    vector<int> reversePrint(ListNode* head) {
        if (head == NULL) return ans;
        else{
            reversePrint(head->next);
            ans.push_back(head->val);
            return ans;
        } 
    }
};