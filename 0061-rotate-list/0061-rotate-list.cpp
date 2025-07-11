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
    ListNode* rotateRight(ListNode* head, int k) {
       if(head== NULL||head->next==NULL||k==0)
            return head;
        int length=1;
        ListNode* temp= head;
        while(temp->next!=NULL){
            temp=temp->next;
            length++;
        }
        temp->next=head;
        k=k%length;
        k=length-k;
        while(k-- >0){
            temp=temp->next;
         }
        head=temp->next;
        temp->next=NULL;
        return head;
        }

};