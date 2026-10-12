/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    if(!head){  // checking if linked list is empty
        return NULL;
    }

// checking if k is > than length of linked list
    struct ListNode* check = head;
    for( int i = 0 ; i<k ; i++ ){
        if(check == NULL ){
            return head;
        }
        check = check->next ;
    }

// finding the length of linked list
    struct ListNode* ll = head;
    int n = 0 ;
    while(ll){
        n++;
        ll = ll->next;
    }

// main program
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* ptr = &dummy;
    struct ListNode* a ;
    struct ListNode* b;
    while( n >= k ){
        a = ptr->next;
        b = a->next ;
        for( int i = 1 ; i<k ; i++ ){
            a->next = b->next;
            b->next = ptr->next;
            ptr->next = b;
            b = a->next;
        }
        ptr = a;
        n -= k;
    }
    return dummy.next;
}