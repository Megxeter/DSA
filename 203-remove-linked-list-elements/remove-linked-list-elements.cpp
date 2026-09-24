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
    /* ListNode* remove(ListNode*head,int val){
        if(head==nullptr) return head;
        ListNode* temp=head;
        ListNode* prev=NULL;
    
        while(temp!=NULL){
            if(temp->val==val){
                prev->next=prev->next->next;
                
            }
            prev =temp;
            temp=temp->next;
        }
        return head;
    }*/
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr && head->val==val){
            head=head->next;

        }
        ListNode* temp=head;
        while(temp!=nullptr && temp->next!=nullptr){
            if(temp->next->val==val){
                temp->next=temp->next->next;

            }
            else{
                temp=temp->next;
            }

        }
        return head;
      
        
        
    }
};