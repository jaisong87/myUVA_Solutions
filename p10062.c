#include<stdio.h>
#include<string.h>
#define MAX 1003

int main()
{
char str[MAX];
int frq[256],i,len,max=0,count=0;

while(gets(str)!=NULL)
	{
	count++;
	if(count>1) printf("\n");
	
	for(i=0;i<256;i++) frq[i]=0;
	max=0;
	
	len=strlen(str);
	for(i=0;i<len;i++) {
			   frq[str[i]]++;
			   if(frq[str[i]]>max) max=frq[str[i]]; 
			    }
        for(len=1;len<=max;len++)
		for(i=255;i>=0;i--)
			{
			if(frq[i]==len) printf("%d %d\n",i,len);
			}
	}

return 0;
}


