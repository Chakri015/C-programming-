#include<stdio.h>
#include<string.h>
char * my_strchr(char *,char);
int digit_check(char*,char*);
void delete(char *,char *);
void main()
{
	char s[50];
	printf("Enter string\n");
	scanf("%[^\n]",s);
	char *p,*q;
	p=s;
	while(q=my_strchr(p,' '))
	{
		if(digit_check(p,q))
			delete(p,q+1);
		else 
			p=q+1;
	}
	if(digit_check(p,p+strlen(p)))
		*p=*(p+strlen(p));	
		//delete(p,p+strlen(p));
	printf("%s\n",s);
}
void delete(char *r,char *t)
{
	while(*t)
	{
		*r++=*t++;
	}
	*r='\0';
}
int digit_check(char *r,char *t)
{
	while(r<t)
	{
		if((*r>='0')&&(*r<='9'))
			return 1;
		r++;
		
	}
	return 0;
}
char * my_strchr(char *r,char t)
{
	while(*r)
	{
		if(*r==t)
			return r;
		r++;
	}
	return 0;
}



/*#include<stdio.h>

void main()
{
char s[30]="vector indi1 pv2";
int i,j,a,b,len;

for(len=0;s[len];len++);


for(i=0,a=0;i<len+1;i++)
{
	b=i;
	if(s[i]==32||s[i]=='\0')
	{
		check_digit(s,a,b);
		a=b+1;
	}


}
printf("%s\n",s);
}
void check_digit(char *p,int a,int b)
{
	int i,j;
	for(i=a,j=b-1;i<j;i++,j--)
	{
		if((p[i]>='0'&&p[i]<='9')||(p[j]>='0'&&p[j]<='9'))
		{
			revers(p,a,b);
			break;
		}
	}
}
void revers(char *p,int a,int b)
{
	int i,j;
	char t;
	for(i=a,j=b-1;i<j;i++,j--)
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;	
	}
//	printf("%s\n",p);
}*/

