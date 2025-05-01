#include<stdio.h>
void check(char*,char*);
void delete(char*,char*);
void main()
{
	char m[20],s[20];
	printf("Enter main string\n");
	scanf("%[^\n]",m);
	printf("enter sub string\n");
	scanf(" %[^\n]",s);
	
	check(m,s);
	printf("%s\n",m);

}
void check(char*p,char*q)
{
	int i,j;

	for(i=0;p[i];i++)
	{
		if(p[i]==q[0])
		{
			for(j=1;q[j];j++)
			{
				if(p[i+j]!=q[j])
				{
					break;
				}
			}
			if(q[j]=='\0')
			{
				if(*(p+i+j)==32)
				delete(p+i,(p+i+j+1));
				else
				delete(p+i,p+i+j);
				i--;
			}
		}
	}
}
void delete(char*p,char*q)
{
	while(*p++=*q++);
}
