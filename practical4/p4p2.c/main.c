#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define N 10
int top=-1;
int a[N];
void push(char val)
{
    a[++top]=val;
}
int pop()
{
    return a[top--];
}
int main()
{
    char exp[50];
    char *e;
    int n1,n2,n3,num;
    printf("\n Enter postfix operation : ");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0')
    {
        if(isdigit(*e))
        {
            num=*e-48;
            push(num);
        }
        else
        {
            n1=pop();
            n2=pop();
            switch(*e)
            {
                case '+':
                    n3=n1+n2;
                    break;
                case '-':
                    n3=n1-n2;
                    break;
                case '*':
                    n3=n1*n2;
                    break;
                case '/':
                    n3=n1/n2;
                    break;
            }
            push(n3);
        }
        e++;
    }
    printf("\n Result of expression %s :%d  ",exp,pop());
    return 0;
}

