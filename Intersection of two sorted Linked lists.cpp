Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    
    //pointers to iterate both LLs at a time
    Node* ptr1=head1;
    Node* ptr2=head2;
    
    Node* head=NULL; //answer LL
    Node* cur=NULL; //pointer that iterates answer LL
    
    while(ptr1!=NULL and ptr2!=NULL)
    {
        if(ptr1->data<ptr2->data)
        {
            ptr1=ptr1->next;
        }
        else if(ptr2->data<ptr1->data)
        {
            ptr2=ptr2->next;
        }
        else if(ptr2->data==ptr1->data)
        {
            //agar first node hai to
            if(head==NULL)
            {
                Node* t=  new Node(ptr1->data);
                head=t;
                cur=t;
            }
            else
            {
                Node* t= new Node(ptr1->data);
                cur->next=t;
                cur=cur->next;
            }
            
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
    }
    
    return head;
}
