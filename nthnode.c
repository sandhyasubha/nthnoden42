#include<stdio.h>
#include<malloc.h>
struct node{
 int data;
 struct node *next;
}*head=NULL;
int lengthsize(struct node *);
void create(struct node *);
void nthnode(struct node *,int);
 void main()
{
 int m,n;
 struct node *temp;
 clrscr();
 temp = head;
 create(temp);
 temp=head;
 m=lengthsize(temp);
 printf("\nTotal nodes are %d",m);
 nthnode(temp,m);
  
}
 
void create(struct node *temp)
{
 struct node *newnode;
 char choice; 
 do
{
  
 newnode = (struct node*)malloc(sizeof(struct node));
 printf("Enter the data to be inserted");
 scanf("%d",&newnode->data);
 newnode->next=NULL;
 if(head==NULL)
 {
 head=newnode;
 }
 else
{ 
 temp=head; 
 while(temp->next!=NULL)
 {
 temp=temp->next; 
 }
 temp->next=newnode;
 } 
 printf("\nPress y or Y to create another node");
 fflush(stdin);
 scanf("%c",&choice); 
 }
while(choice=='Y'||choice=='y'); 
}
 
int lengthsize(struct node *temp)
{
 int count=0;
 while(temp != NULL)
{
 count++;
 temp = temp->next;
  
 } 
 return count;
}
 
void nthnode(struct node *temp,int m)
{
 int n;
 printf("\nEnter the nth node position from the end:");
 scanf("%d",&n);
 if(m<n)
 {
 printf("\nNot possible");
 }
 else
 for(int i=0;i<m-n;i++) { temp=temp->next;
 }
 printf("Node at position %d from backward has data %d",n,temp->data);
}

 temp->next=newnode;
 } 
 printf("\nPress y or Y to create another node");
 fflush(stdin);
 scanf("%c",&choice); 
 }while(choice=='Y'||choice=='y'); 
}
 
void nthnode(struct node *temp,int n)
{
 struct node *nthnode=temp;
 for(int i=0;i<n;i++) temp=temp->next; 
 while(temp){
 temp=temp->next;
 nthnode=nthnode->next;
 }
 printf("\nData at position %d from end is %d",n,nthnode->data);
}
