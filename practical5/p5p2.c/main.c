#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct queue *next;
}*front=NULL,*rear=NULL;
void enque(int n)
{
    printf("\n Enter elements : ");
    scanf("%d",&n);
    struct queue *new;
    new=(struct queue*)malloc(sizeof(struct queue));
    new->next=NULL;
    new->data=n;
    if(front==NULL)
        front=new;
    else
        rear->next=new;
    rear=new;
}
void deque()
{
   struct queue *tmp;
   tmp=front;
   if(front==NULL)
        printf("\n underflow\n");
   else
   {
       front=front->next;
       printf("\n dequeue element=%d\n",tmp->data);
       free(tmp);
   }
}
void display()
{
    struct queue *tmp;
    tmp=front;
    if(front==NULL)
    {
        printf("\n queue is empty\n");
        return;
    }
    printf("\n elemewnts of queue\n");
    while(tmp!=NULL)
    {
        printf("%d\t",tmp->data);
        tmp=tmp->next;
    }
}
void main()
{
    int n,ch;
    do
    {
        printf("Queue operationss\n");
        printf("1.enqueue \n 2.dequeue \n 3.display \n 4.exit \n");
        printf("enter your choice=");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enque(n);
                break;
            case 2:
                deque();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
        }
    }while(ch!=4);
}


