#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  	char str[100], str2[100], Newstr[100];
  	int i;

  	printf("\n Enter any String :");
  	gets(str);

  	printf("\n Enter string that you want to Search for :");
  	gets(str2);

  	printf("\n Enter the New string :");
  	gets(Newstr);

  	while(str[i] != '\0')
  	{
  		if(str[i] == str2[i])
		{
  			str[i] = Newstr[i];
 		}
 		i++;
	}

	printf("\n The Final String after Replacing All Occurrences of %s with %s = %s ", str2, Newstr,Newstr);

  	return 0;
}
