//Insert elements in beg,middle,end of list

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
void insert_head(int el)
{

    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=el;
    newnode->next=head;
    head=newnode;

    if(tail==NULL)
        tail=newnode;

}
void insert_mid(int el)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=el;
    newnode->next=NULL;

    if(head==NULL)
        head=tail=newnode;
    else
    {
       struct node* temp=head;
       int len=0;
       while(temp!=NULL)
       {
        len++;
        temp=temp->next;
        }

       len/=2;
       temp=head;
       while(len>1)
       {
        temp=temp->next;
        len--;

       }
       newnode->next=temp->next;
       temp->next=newnode;
    }


}
void display()
{
    struct node* temp;
    temp=head;
    if(head==NULL)
         printf("\nList is Empty");
    else
    {
        printf("\nList after insertion:");
      while(temp!=NULL)
      {
        printf("%d ",temp->data);
        temp=temp->next;
      }
    }
}

int main()
{
    int el,c;
    char ch;
    initialize();

    do
    {
        printf("\n.....MENU.....\n1.Insert at beg of list \n2.Insert at end of list \n3.Insert in middle of list \nEnter your choice:");
        scanf("%d",&c);
        printf("\nEnter value:");
        scanf("%d",&el);

        switch(c)
        {
          case 1:insert_head(el);
                 display();
                 break;

          case 2:insert_tail(el);
                 display();
                 break;
          case 3:insert_mid(el);
                 display();
                 break;
        }
        printf("\nDo you want to continue?(y/n): ");
        scanf(" %c",&ch);
    }while(ch=='y');


}
