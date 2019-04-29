#include<stdio.h>
#define N 30
int val1[N],val2[N],p1=-1,p2=-1;
void enque(int s)
{
    if(p1>N)
        printf(" Queue is overflow\n");
    else
       val1[++p1]=s;
}
void deque()
{
    if(p1==-1)
    {
        printf(" Queue is underflow\n");
        return;
    }
    int i;
    for(i=p1;i>0-1;i++)
        val2[++p2]=val1[p1--];
    printf("dequeued element is : %d\n",val2[p2--]);
    for(i=p2;i>-1;i++)
        val1[++p1]-val2[p2--];
}
void display()
{
    int i;
    if(p1==-1)
    {
        printf("\n empty queue \n");
        return;
    }
    printf("\n elements\n");
    for(i=0;i<=p1;i++)
        printf("%d\t",val1[i]);
    printf("\n");
}
void main()
{
    int n,ch;
    do
    {
        printf("Queue Operation\n");
        printf("1.enqueue \t 2.dequeue \t 3.display \t 4.exit \n");
        printf("enter your choice=");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("enter element : ");
                scanf("%d",&n);
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
