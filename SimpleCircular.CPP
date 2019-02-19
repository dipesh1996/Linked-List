#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<malloc.h>

struct node
{
 struct node *next;
 int info;
};

void main()
{
 struct node *first, *new1,*temp;
 int i;
 clrscr();

 first=(struct node*)malloc(sizeof (struct node));
 cout<<"Enter value of 1st node=>";
 cin>>first->info;

 first->next=NULL;
 temp=first;

 for(i=0;i<5;i++)
 {
  new1=(struct node*)malloc(sizeof (struct node));
  cout<<"Enter new node=>";
  cin >>new1->info;
  new1->next = NULL;
  temp->next = new1;
  temp=new1;
 }
 new1->next=first;
 while(first !=NULL)
  {
	cout << first->info<<"\n";
	first = first ->next;
  }
getch();
}
