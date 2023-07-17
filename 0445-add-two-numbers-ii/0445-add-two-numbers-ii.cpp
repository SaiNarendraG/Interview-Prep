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
    
    ListNode* rev(ListNode* h) {
        ListNode* cur = h;
        ListNode* prev = NULL;
        while(cur) {
            ListNode* n = cur->next;
            cur->next = prev;
            prev = cur;
            cur = n;
        }
        return prev;
    }
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* rev_list1 = rev(l1);
        ListNode* rev_list2 = rev(l2);
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int sum=0, carry=0;
        while( (rev_list1 != NULL || rev_list2 != NULL) || carry) {
            int sum = 0; 
            if(rev_list1 != NULL) {
                sum += rev_list1->val; 
                rev_list1 =rev_list1-> next; 
            }
            
            if(rev_list2 != NULL) {
                sum += rev_list2 -> val; 
               rev_list2 = rev_list2 -> next; 
            }
            
            sum += carry; 
            carry = sum / 10; 
            ListNode *node = new ListNode(sum % 10); 
            temp -> next = node; 
            temp = temp -> next; 
        }
        return rev(dummy -> next); 
    }

};