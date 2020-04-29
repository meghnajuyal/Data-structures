//Insert element at specified index in linked list

#include<stdio.h>

struct node {
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
void insert(int position,int el)
{
     struct node* prev=NULL;
    struct node* cur=head;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=el;
  if(head==NULL)
  {
    newnode->next=NULL;
    head=newnode;

  }
  else
  {
      while(position>0)
      {
          prev=cur;
          cur=cur->next;
          position--;
      }
      prev->next=newnode;
      newnode->next=cur;
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

int main()
{
  char ch;
  int el,index;
  do
  {
      printf("\nEnter element for linked list ");
      scanf("%d",&el);
      insert_tail(el);
      printf("Do you want to continue?(y/n)");
      scanf(" %c",&ch);
  }while(ch!='n');

  printf("\nLinked list is ");
   display();
   printf("\nEnter index at which you want to insert element:");
   scanf("%d",&index);
   printf("\nEnter element:");
   scanf("%d",&el);
   insert(index,el);
   printf("\nUpdated linked list is ");
   display();
}
