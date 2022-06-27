// You have been given a singly linked list which may or may not contain a cycle. You are supposed to return the node where the cycle begins (if a cycle exists).

// Time Complexity :- O(n)
// Space Complexity :- O(1)

Node *firstNode(Node *head)
{
    if(!head || !head -> next) return NULL;
    
    Node* slow = head;
    Node* fast = head;
    
    while(fast && fast -> next){
        slow = slow -> next;
        fast = fast -> next -> next;
        
        if(slow == fast){
            Node* temp = head;
            
            while(slow != temp){
                slow = slow -> next;
                temp = temp -> next;
            }
            return slow;
        } 
    }
    
    return NULL;
}

