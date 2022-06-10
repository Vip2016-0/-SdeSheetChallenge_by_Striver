
// Time Complexity :- O(n + m)
// Space Complexity :- O(n)
  
int findIntersection(Node *firstHead, Node *secondHead)
{
    map<Node*, int> mp;
    while(firstHead != NULL){
        mp[firstHead]++;
        firstHead = firstHead -> next;
    }
    
    while(secondHead != NULL){
        if(mp[secondHead] > 0)
            return secondHead -> data;
        secondHead = secondHead -> next;
    }
    
    return -1;
}

// Time Complexity :- O(2*(n + m))
// Space Complexity :- O(1)
// Say A length = a + c, B length = b + c, after switching pointer, pointer A will move another b + c steps, pointer B will move a + c more steps,
// since a + c + b + c = b + c + a + c, it does not matter what value c is. Pointer A and B must meet after a + c + b (b + c + a) steps. If c == 0, they meet at NULL.

int findIntersection(Node *firstHead, Node *secondHead)
{
    if(!firstHead || !secondHead)
        return -1;
    
    Node* head1 = firstHead;
    Node* head2 = secondHead;
    while(head1 != head2){
        head1 = head1 == NULL ? secondHead : head1 -> next;
        head2 = head2 == NULL ? firstHead : head2 -> next;
    }
    
    if(head1) return head1 -> data;
    
    return -1;
}

