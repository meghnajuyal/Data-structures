//Reverse elements of list

#include<stdio.h>

struct node
{
    int data;
  struct node *next;
}*head,*tail;
void initialize()
{
    head=tail=NULL;

}

void insert_tail(int el)
{

  struct node* newnode=(struct node*)malloc(sizeof(struct node));

     newnode->data=el;
     newnode->next=NULL;
    if(head==NULL)
        head=tail=newnode;
     else
     {
        tail->next=newnode;
        tail=newnode;

     }

}

void display()
{
    struct node* temp;
    temp=head;
    if(head==NULL)
         printf("List is Empty");
    else
    {

      while(temp!=NULL)
      {
        printf("%d ",temp->data);
        temp=temp->next;
      }
    }
}
void reverse()
{
    struct node *prev,*cur,*next_n;
    prev=next_n=NULL;
    cur=head;

    while(cur!=NULL)
    {
        next_n=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next_n;

    }
  tail=head;
  head=prev;


}

int main()
{
    int el;
    char ch;
	initialize();
	do
    {

        printf("\nEnter Value for adding in list: ");
        scanf("%d",&el);
        insert_tail(el);

        printf("Do you want to enter another value?(y/n):");
        scanf(" %c",&ch);
    }while(ch=='y');
    printf("\nOriginal list:");
    display();
    reverse();

    printf("\nAfter reverse:");
    display();
}
