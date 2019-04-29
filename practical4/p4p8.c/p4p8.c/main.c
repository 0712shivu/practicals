#include<stdio.h>
#include<conio.h>
#define size 100
int stack[size];
int top=-1;
void push(int);
int reverseinsert(int);
int reverse();
int pop();
int main()
{
    int i,n,info;
    printf("\n enter no. of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter element %d : ",i);
        scanf("%d",&info);
        push(info);
    }
    reverse();
    while(!isempty())
    {
        printf("\t %d ",stack[top]);
        pop();
    }
    return 0;
}
int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
void push(int item)
{
    if(top==size-1)
        printf("\n Stack is Overflow");
    else
        top=top+1;
        stack[top]=item;
}
int pop()
{
    int item;
    if(top<0)
        printf("\n Stack is underflow");
    else
    {
        item=stack[top];
        top=top-1;
    }
    return item;
}
int reverseinsert(int x)
{
    int temp;
    if(isempty(1))
        push(x);
    temp=pop();
    reverseinsert(x);
    push(temp);
}
int reverse()
{
    if(isempty())
    {
        int x=pop();
        reverse();
        reverseinsert(x);
    }
}
