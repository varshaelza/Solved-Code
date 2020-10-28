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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *a=l1;
        ListNode *b=l2;
        int carry=0;
        vector<int> arr;
        while(a!=NULL&&b!=NULL)
        {
            arr.push_back((a->val+b->val+carry)%10);
            carry=(a->val+b->val+carry)/10;
            a=a->next;
            b=b->next;
        }
         while(a!=NULL)
        {
            
           arr.push_back((a->val+carry)%10);
            carry=(a->val+carry)/10;
             a=a->next;
        }
         while(b!=NULL)
        {
           arr.push_back((b->val+carry)%10);
            carry=(b->val+carry)/10;
             b=b->next;
            
        }
        if(carry>0)
        {
            arr.push_back(carry);
        }
        
        
        ListNode *c=NULL;
        vector<int>:: iterator i;
        for(i=arr.end()-1;i>=arr.begin();i--)
        {
            ListNode *temp=new ListNode();
            temp->val=*i;
            temp->next=c;
            c=temp;
            
        }
        
       return c; 
    }
};
