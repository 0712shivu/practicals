#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N 100
char a[N];
char temp_a[N];
int top1=-1;
int top2=-1;
void push(char val)
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
char pop()
{
    char temp;
    if(top1!=-1)
    {
        temp=a[top1];
        top1--;
    }
    return temp;
}
void push_temp(char val)
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
    if(top1==-1)
        printf("\n Stack is underflow");
    else
    {
        printf("\n unsorted element in stack is : \n ");
        for(i=top1;i>=0;i--)
        {
            printf("%d \t ",a[i]);
        }
    }
}
char pop_temp()
{
    char temp;
    if(top2!=-1)
    {
        temp=temp_a[top2];
        top2--;
        return temp;
    }
}
char peek_temp()
{
    char temp;
    if(top2!=-1)
    {
        temp=temp_a[top2];
        return temp;
    }
}
int isempty_temp()
{
    if(top2==-1)
        return 1;
    else
        return 0;
}
int main()
{
    char temp,*s;
    printf("\n Enter the string : ");
    gets(s);
    top1=strlen(s)-1;
    display();
    while(!isempty())
    {
        temp=pop();
        while(temp>peek_temp() && !isempty_temp())
        {
            push(pop_temp);
        }
        push_temp(temp);
    }
    display_temp();
}
