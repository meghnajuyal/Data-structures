//Delete element at specified position

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
void del(int position)
{
     struct node* temp=head;
    struct node *prev=NULL;

    while(position>0)
    {
      prev=temp;
      temp=temp->next;
      position--;
    }

    prev->next=temp->next;
    free(temp);






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
   printf("\nEnter index of  element you want to delete:");
   scanf("%d",&index);

   del(index);
   printf("\nUpdated linked list is ");
   display();
}
