// Hare and Tortorise is used in which two pointers named slow and fast are initially pointing to head node fast pointer moves twice tto that of slow pointer 
// so when fast reaches the end of list the slow reaches to the middle.

Node *findMiddle(Node *head) {
    Node* slow = head;
    Node* fast = head;
    
    while(fast && fast -> next){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    
    return slow;
}
