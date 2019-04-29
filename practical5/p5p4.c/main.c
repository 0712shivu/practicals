#include<stdio.h>
#define N 30
int q[N];
int front=-1,rear=-1;
void enque(int n)
{
    if(rear>=N-1 && front!=0)
        rear=-1;
    if(rear<N-1)
        q[++rear]=n;
    if(front==-1)
        front++;
}
void deque()
{
    if(rear==front)
        printf("underflow\n");
    else
        printf("Dequeue element=%d\n",q[front++]);
}
void display()
{

    int i;
    printf("\n elements\n");
    if(rear<front)
    {
      for(i=front;i<N;i++)
            printf("%d\t",q[i]);
      for(i=0;i<=rear;i++)
        printf("%d\t",q[i]);
    }
    else
    {
       for(i=front;i<=rear;i++)
        printf("%d\t",q[i]);
    }
    printf("\n");
}
void main()
{
    int n,ch;
    do
    {
        printf("queue operations\n");
        printf("1.enqueue \t 2.dequeue \t 3.display \t 4.exit \n");
        printf("enter your choice=");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                if(front==rear && front>0 || rear>=N)
                    printf("\n overflow\n");
                else
                {
                    printf("enter elements=");
                    scanf("%d",&n);
                    enque(n);
                }
                display();
                break;
            case 2:
                deque();
                display();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
        }
    }while(ch!=4);
}


