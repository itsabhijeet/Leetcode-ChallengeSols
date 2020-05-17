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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL) return head;
        
        ListNode* odd=NULL,*oddHead=NULL;
        ListNode* even = NULL,*evenHead=NULL;
        
        int i=1;
        ListNode* temp = head;
        while(temp!=NULL){
            
            ListNode* next = temp->next;
            
            if(i==1){
                odd = temp;
                oddHead = odd;
            }
            else if(i==2) {even=temp;
                           evenHead=temp;
                          }
            else{
                if(i&1){
                    odd->next = temp;
                    odd = odd->next;
                }
                else{
                    even->next = temp;
                    even = even->next;
                }
            }
            
           
           // if(odd!=NULL)
            temp=next;;
            i++;
        }
        odd->next = NULL; 
        if(even!=NULL)
        even->next=NULL;
        
        odd->next = evenHead;
        return oddHead;
    }
};