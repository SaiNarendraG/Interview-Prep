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

// length of linked list
int length(ListNode* head){
    ListNode* dummy=head;
    int c=0;
    while(dummy!=NULL){
        dummy=dummy->next;
        c++;
    }
    return c;
}

ListNode* reverseKGroup(ListNode* head, int k) {
    if(head==NULL){
        return NULL;
    }
    
    ListNode* curr=head;
    ListNode* prev=NULL;
    ListNode* forward=NULL;
    int count=0;
    
    // if length is not greater than k return 
    if(length(head)<k){
        return head;
    }

    while(curr!=NULL and count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    
    // recursive call
    if(forward!=NULL){
        head->next=reverseKGroup(forward,k);
    }
    
    return prev;
}
};