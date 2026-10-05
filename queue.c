#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,queue[15],data,i,size;
void enqueue()
{
if(rear==size-1)
{
printf("\nThe queue is full");
}
else
{
printf(" \nEnter the data to be inserted:");
scanf("%d",&data);
rear++;
queue[rear]=data;
printf("The element is inserted");
if(front==-1)
{
front=0;
}
}
}
void dequeue()
{
if ((front==-1)||(front>rear ))
{
printf("\nThe queue is empty");
}
else
{
printf("%d is deleted ",queue[front]);
front++;
}
}
void display()
{
if(front==-1)
{
printf("\nThe queue is empty");
}
else
{
printf("\nThe elements are:");
for(i=front;i<=rear;i++)
{
printf("\t %d",queue[i]);
}
}
}
int main()
{
int ch;
printf("\n enter the size of queue:");
scanf("%d",&size);
printf("1.for enqueue \n2.for dequeue \n3.for display \n4. exit \n ");
do
{
printf("\nEnter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue();
break;
case 2: dequeue();
break;
case 3: display();
break;
case 4:exit(0);
default:
printf("invalid");
}
}
while(1);
}


