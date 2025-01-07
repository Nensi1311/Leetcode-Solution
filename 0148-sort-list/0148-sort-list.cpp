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
    ListNode* FindMiddle(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        while(l1!=NULL && l2!=NULL){
            if(l1->val < l2->val){
                temp->next=l1;
                temp=l1;
                l1=l1->next;
            }
            else{
                temp->next=l2;
                temp=l2;
                l2=l2->next;
            }
        }
        if(l1){
            temp->next=l1;
        }
        else{
            temp->next=l2;
        }
        return dummy->next;
    }
public:
    ListNode* sortList(ListNode* head) {
        // ListNode* temp=head;
        // vector<int> a;

        // while(temp!=NULL){
        //     a.push_back(temp->val);
        //     temp=temp->next;
        // }
        // sort(a.begin(), a.end());
        // int i=0; temp=head;

        // while(temp!=NULL){
        //     temp->val = a[i];
        //     i++;
        //     temp=temp->next;
        // }
        // return head;
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* middle=FindMiddle(head);
        ListNode* right=middle->next;
        middle->next=nullptr;
        ListNode* left=head;

        left = sortList(left);
        right = sortList(right);
        return merge(left, right);
    }
};