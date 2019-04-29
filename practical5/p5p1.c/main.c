#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define N 100
int rear=0,front=0,ch,q[N];
void enqueue();
void dequeue();
void dispaly();
void enqueue()
{
    printf("\n Enter Element : ");
    scanf("%d",&ch);
    if(rear<N)
    {
        rear++;
        q[rear]=ch;
        if(front==0)
            front=1;
    }
    else
        printf("\n Queue is Overflow");
}
void dequeue()
{
    if(front==0)
    {
        printf("\n Underflow");
        return ;
    }
    else
    {
        ch=q[front];
        printf("\n Element Deleted : %d",ch);
    }
    if(front==rear)
    {
        rear=0;
        front=0;
    }
    else
    {
        front++;
    }
}
void display()
{
    int i;
    if(front==0)
        return;
    for(i=front;i<=rear;i++)
        printf("%d \t",q[i]);
}
int main()
{
    int k=0,choice;
    do
    {
        printf("\n Queue Operations ");
        printf("\n 1.Enqueue");
        printf("\n 2.Dequeue");
        printf("\n 3.Display");
        printf("\n Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case  1:
                enqueue();
                printf("\n Queue after enqueue : \n");
                display();
                break;
        case 2 :
                dequeue();
                printf("\n Queue after dequeue : \n");
                display();
                break;
        case 3:
                display();
                break;
        }
    }while(choice!=3);
    return 0;
}
