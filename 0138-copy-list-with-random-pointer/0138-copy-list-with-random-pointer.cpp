class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) {
            return NULL;
        }

        Node* curr = head;
        while(curr != NULL){
            Node* temp = new Node(curr -> val);
            temp -> next = curr -> next;
            curr -> next = temp;
            curr = temp -> next;
        }
        
        curr = head;
        while(curr != NULL){
            if(curr -> random != NULL){
                curr -> next -> random = curr -> random -> next; 
            }
            curr = curr -> next -> next;
        }
        
        Node* newHead = head -> next;
        Node* Old = head;
        Node* New = newHead;

        while(Old != NULL){
            Old -> next = New -> next;
            Old = Old -> next;
            if(Old != NULL){
                New -> next = Old -> next;
                New = New -> next;
            }
        }
        return newHead;
    }
};