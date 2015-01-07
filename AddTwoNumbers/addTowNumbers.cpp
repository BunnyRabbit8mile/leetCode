/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int moreNum=0;
        ListNode* result=new ListNode(0);
        ListNode* head = result;
        while (l1 && l2){
            result->next=new ListNode((l1->val+l2->val+moreNum)%10);
            moreNum = (l1->val+l2->val+moreNum)/10;
            l1=l1->next;
            l2=l2->next;
            result=result->next;
        }

        while (l1){
            result->next=new ListNode((l1->val+moreNum)%10);
            moreNum = (l1->val+moreNum)/10;
            l1=l1->next;
            result=result->next;
        }

        while (l2){
            result->next=new ListNode((l2->val+moreNum)%10);
            moreNum = (l2->val+moreNum)/10;
            l2=l2->next;
            result=result->next;
        }

        if (moreNum>0){
            result->next = new ListNode(moreNum);
        }

        return head->next;
    }
};
