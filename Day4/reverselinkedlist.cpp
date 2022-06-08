LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
      LinkedListNode<int> *dummy = NULL;

   while(head != NULL){

    LinkedListNode<int> *nextt = head->next;

    head->next = dummy;

       dummy = head;

       head = nextt;

   }

   return dummy;
    
}