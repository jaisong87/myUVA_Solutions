#include<stdio.h>
#define MAX 1000001

int main()
{
long arr[MAX],i,temp,temp2;

for(i=0;i<MAX;i++) arr[i]=0;

for(i=1;i<MAX;i++)
	{
		if(arr[i]==0)
		{
			temp=i;
			temp2=temp;
			while(temp2>0) { temp+=temp2%10; temp2/=10; }
			
			while( (temp<MAX)&&(arr[temp]==0) )
			{
			arr[temp]++;
			temp2=temp;
			while(temp2>0) { temp+=temp2%10; temp2/=10; }
			}
		}
	}

for(i=1;i<MAX;i++)
	if(arr[i]==0) printf("%d\n",i);

return 0;
}


