# include <stdio.h>
#include<conio.h>

void reverse(char *str);

int main()
{
   char a[50];
   printf("Enter a string:");
   scanf("%s",&a);
   printf("After reverse:");
   reverse(a);
   return 0;
}
void reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}
