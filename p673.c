#include<stdio.h>
#include<string.h>
#define MAX 150

int main()
{
char str[MAX],stack[MAX];
int top,i,l,count;

gets(str);
sscanf(str,"%d",&count);
while(count>0)
	{
count--;
gets(str);
top=-1;
l=strlen(str);
for(i=0;i<l;i++)
		{
		if( (str[i]=='[')||(str[i]==']')||(str[i]=='(')||(str[i]==')') )
				{
				if(top>=0) 
					{
					if( (str[i]==')')&&(stack[top]=='(') ) top--;
					else if( (str[i]==']') && (stack[top]=='[') ) top--;
					else { top++; stack[top]=str[i]; }
					}
				else { top++; stack[top]=str[i]; }
				}
		}
	if(top==-1) printf("Yes\n");
	else printf("No\n"); 
	}
return 0;
}


