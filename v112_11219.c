#include<stdio.h>

int main()
{
    
    long d1,m1,y1,d2,m2,y2,v1,v2,age,count,i,n;
    char s1[12],s2[12];    
    
    scanf("%d",&count);
    
    n=1;
    
    while(count)
                {
                scanf("%s %s",&s1,&s2);
                
                for(i=0;i<12;i++) 
                                  {
                                  if(s1[i]=='/') s1[i]=' ';
                                  if(s2[i]=='/') s2[i]=' ';
                                  }
                                  
                sscanf(s1,"%ld %ld %ld",&d1,&m1,&y1);
                sscanf(s2,"%ld %ld %ld",&d2,&m2,&y2);
                 
                 v1=y1*10000+m1*100+d1;
                 v2=y2*10000+m2*100+d2;
                 
                 age=(v1-v2)/10000;
                
                //printf("%ld %ld\n",v1,v2);
                
                printf("Case #%ld: ",n);
                if(v1<v2) printf("Invalid birth date\n");
                else if(age>130) printf("Check birth date\n");
                else printf("%ld\n",age); 
                 
                count--;
                n++;
                }
    return 0;
}
