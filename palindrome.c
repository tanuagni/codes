#include<stdio.h>
#include<conio.h>
// reverse of the string
char checkpalindrome(char str[]);

void main()
{
	char s[10];
	int n,i;
	printf("enter number of characters",n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf ("%s",&s[i]);
	}
	checkpalindrome(s);
	return 0;
}

char checkpalindrome(char str[])
{
	int i,j,len=0;
	char b[10];
	for(i=0;str[i]!='\0';i++)
	{
	len++;	
	}
	printf("%d",len);
	for(i=len-1;i>=0;i--)
	{
		b[len-1-i]=str[i];	
}
printf("%s",b);
int k=strcmp(b,str);
if(k==0)
{
	printf("palindrome");
}
else
{
	printf("not palindrome");
}
}
