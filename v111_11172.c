#include<stdio.h>

int main()
{
 int count;
 long a,b;
 scanf("%d",&count);
      while(count)
                                    {   
                                    scanf("%ld %ld",&a,&b);
                                    if(a<b) printf("<\n");
                                    else if(a>b) printf(">\n");
                                    else printf("=\n");
                                    count--;
                                    }
    return 0;
}
