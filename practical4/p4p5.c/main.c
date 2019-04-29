#include<stdio.h>
#include<conio.h>
#define N 100
int a[N];
int temp_a[N];
int top1=-1;
int top2=-1;
void push(int val)
{
    if(top1!=N-1)
    {
        top1++;
        a[top1]=val;
    }
}
int isempty()
{
    if(top1==-1)
        return 1;
    else
        return 0;
}
int pop()
{
    int temp=0;
    if(top1!=-1)
    {
        temp=a[top1];
        top1--;
    }
    return temp;
}
void push_temp(int val)
{
    if(top2!=N-1)
    {
        top2++;
        temp_a[top2]=val;
    }
}
void display_temp()
{
    int i;
    if(top2==-1)
        printf("\n Stack is overflow");
    else
    {
        printf("\n Stored element in stack is : \n ");
        for(i=top2;i>=0;i--)
        {
            printf("%d \t ",temp_a[i]);
        }
    }
}
void display()
{
    int i;
    printf("\n Unsorted data in stack is : \n");
    for(i=top1;i>=0;i--)
    {
        printf("%d \t",a[i]);
    }
}
int pop_temp()
{
    int temp=0;
    if(top2!=-1)
    {
        temp=temp_a[top2];
        top2--;
    }
    return temp;
}
int isempty_temp()
{
    if(top2==-1)
        return 1;
    else
        return 0;
}
int pop_temp()
{
    int temp=0;
    if(top2!=-1)
        temp=temp_a[top2];
    return temp;
}
int main()
{
    int top;
    int n,i,ele,t;
    printf("\n Enter no.of elements  to push : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter element : ");
        scanf("%d",&ele);
        push(ele);
    }
    while(top1>0)
    {
        pop_temp();
        printf("\n Element taken out : %d",top);
        if(temp_a[top2-1]<top)
            push_temp(top);
        else
        {
            while(temp_a[top2-1]>top)
                push(pop_temp());
            push_temp(top);
        }
        printf("\n Input : ");
        display();
        printf("\n Output : ");
        display_temp();
    }
    printf("\n Final sorted list : \n");
    display_temp();
    return 0;
}
