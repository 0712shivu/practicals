#include<stdio.h>
#include<conio.h>
int stringlength(char str[]);
void stringCpy(char* s1,char* s2);
int stringCmp (char *s1,char *s2);
void stringCat (char *s1,char *s2);

int main()
 {
   char str[100],str2[100];
   int length;

   printf("\nEnter the String : ");
   gets(str);

   printf("\nEnter the String2 : ");
   gets(str2);


   length = stringlength(str);

   printf("\nLength of the String is : %d", length);

   stringCpy(str2,str);
   printf("\n After copy String 1: %s \nString 2: %s\n",str,str2);

    if(stringCmp(str,str2))
        printf("\n stringCmp :String are same.");
    else
        printf("\n stringCmp  :String are not same.");

    stringCat(str,str2);
    printf("\nAfter concatenate strings are :\n");
    printf("String 1: %s \nString 2: %s",str,str2);

   return 0;
}

int stringlength(char str[])
 {
   int len = 0;
   while (str[len] != '\0')
      len++;
   return len;
}

void stringCpy(char* s1,char* s2)
{
    int i=0;
    while(s2[i]!='\0')
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
}

int stringCmp (char *s1,char *s2)
{
    int i=0;
    for(i=0; s1[i]!='\0'; i++)
    {
        if(s1[i]!=s2[i])
            return 1;
    }
    return 0;
}

void stringCat(char *s1,char *s2)
{
    int len,i;
    len=strlen(s1);
    for(i=0;i< strlen(s2); i++)
    {
        s1[len+i]=s2[i];
    }
    s1[len+i]='\0';
}
