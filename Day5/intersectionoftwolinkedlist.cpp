int length(Node* head){
   int count = 0;
   while(head!=NULL){
       count++;
       head = head->next;
   }
   return count;
}
int findIntersection(Node *firstHead, Node *secondHead){
   if(firstHead == NULL || secondHead == NULL) return -1;
   Node* temp1 = firstHead;
   Node* temp2 = secondHead;
   int l1 = length(temp1);
   int l2 = length(temp2);
   if(l1-l2 < 0){
       int diff = l2-l1;
       while(diff--) temp2 = temp2->next;
   }
   else{
       int diff = l1-l2;
       while(diff--) temp1 = temp1->next;
   }
   while(temp1!=temp2 && temp1->next!=NULL && temp2->next!=NULL){
       temp1 = temp1->next;
       temp2 = temp2->next;
   }
   if(temp1 == temp2) return temp1->data;
   else return -1;
}