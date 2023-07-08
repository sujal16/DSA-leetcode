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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* ans = new ListNode(0);
        ListNode* temp1 = ans;
        int sum = 0;
        while(temp!=NULL){
            if(temp->val==0){
                ListNode* ans1 = new ListNode(sum);
                temp1->next = ans1;
                temp1 = temp1->next;
                sum = 0;
            }
            else{
                sum += temp->val;
            }
            temp = temp->next;
        }
        return ans->next;
    }
};

