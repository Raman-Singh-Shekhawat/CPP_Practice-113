/*129. Swap two Nodes of LL: You have been given a singly linked list of integers along with two integers, 'i,' and 'j.' Swap the nodes that are present at the 'i-th' and 'j-th' positions. 
Note: Remember, the nodes themselves must be swapped and not the data. No need to print the list, it has already been taken care. Only return the new head to the list.
*/

/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *swapNodes(Node *head, int i, int j)
{
	Node* temp_a = head;
    Node* temp_b = head;
    
    for(int first = 0; first < i - 1; first++){
        
        temp_a = temp_a -> next;
    }
     
    
    
	for(int last = 0; last < j - 1; last++){
        
        temp_b = temp_b -> next;
    }
    
    Node* initial = temp_a -> next;
    Node* fina1 = temp_b -> next;
    if(initial -> next == fina1){
        
        temp_a -> next = fina1;
        initial -> next = fina1 -> next;
        fina1 -> next = initial;
        
        return head;
    }
    
    Node* initial_succeeder = initial -> next;
    

    Node* fina1_succeeder = fina1 -> next;
    
    temp_a -> next = fina1;
    fina1 -> next = initial_succeeder;
    
    temp_b -> next = initial;
    initial -> next = fina1_succeeder;
    return head;
}
