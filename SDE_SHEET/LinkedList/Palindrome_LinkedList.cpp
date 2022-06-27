#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

// Time Complexity :- O(n)
// Space Complexity :- O(1)
LinkedListNode<int>* reverse(LinkedListNode<int>* head){
    
    if(!head || !head -> next) return head;
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* agla = head;
    
    while(curr){
        agla = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = agla;
    }
    
    return prev;
}

bool isPalindrome(LinkedListNode<int> *head) {
    if(!head || !head -> next)
        return true;
    
    LinkedListNode<int>* slow = head;
    LinkedListNode<int>* fast = head;
    
    while(fast && fast -> next){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    
    slow = reverse(slow);
    
    while(slow){
        if(head -> data != slow -> data)
            return false;
        
        slow = slow -> next;
        head = head -> next;
    }
    
    return true;
}
