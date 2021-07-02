#include<stdio.h>

// ****** NODE ****** //
struct Node{
    int data;
    Node *next;
};

// ****** CODE ****** //
Node *getnode(){
    Node *temp=new Node;
    if (temp==NULL)
        printf("Memory Allocation Error");
    else{
        printf("Enter Data: ");
        scanf("%d",&temp->data);
        temp->next=NULL;
    }
    return temp;
}
Node *create(Node *head){
    int no;
    Node *temp= NULL,*last=NULL;
    printf("\nNodes..?: ");
    scanf("%d",&no);
    for(int i=0;i<no;i++){
        temp= getnode();
        if (head==NULL)
            head=temp;
        else{
            last=head;
            while(last->next!=NULL)
                last=last->next;
            last->next=temp;
        }
    }
    return head;
}
void display(Node *temp){
    if(temp==NULL)
        printf("\nEMPTY");
    else{
        while(temp->next!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
    delete temp;
}

// ***** MAIN ***** //
int main(){
    Node *head=NULL;
    head=create(head);
    display(head);
    delete head;
}