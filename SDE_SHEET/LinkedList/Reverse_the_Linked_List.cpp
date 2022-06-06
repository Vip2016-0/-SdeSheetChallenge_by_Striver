
// 3 pointers approach is usedto reverse the linked list

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* agla = NULL;
    
    while(curr){
        agla = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = agla;
    }
    
    return prev;
}

