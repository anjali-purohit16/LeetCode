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
   void length(ListNode* head , int &len, int n){
        ListNode* temp = head;
        while(temp != nullptr){
            len++;
            temp = temp -> next;
        }
        len = len - n;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int len = 0;
        length(head,len,n);

        ListNode* temp = head;
        ListNode* temp2 = head;
        int cnt = 0;

        if(cnt == len){
            head = head -> next;
        }
        while(cnt != len && temp2 && temp2 ->next){
            temp2 = temp->next;
            cnt++;
            if(cnt == len){
                temp->next = temp->next->next;
                temp2->next = nullptr;
                delete temp2;
            }
            temp = temp ->next;
        }
        return head;
    }
};