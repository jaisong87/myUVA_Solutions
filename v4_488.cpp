/////////////////////////////
//ScrewJack's solution     //
//kbjtpo@gmail.com         //
//4 (Triangle wave)        // 
//volume:4 problem no.488  //
/////////////////////////////       


#include<stdio.h>
int main()
{
    int count;
    scanf("%d",&count);
    int amp=0,frq=0;//amplitute,frequency
    
for(int scan=0;scan<count;scan++)
   {    
    //if(scan!=0) printf("\n");
    scanf("%d %d",&amp,&frq);
      for(int a=1;a<=frq;a++)
      {
        
        for(int b=1;b<=amp;b++)      
             { for(int i=1;i<=b;i++) printf("%d",b);  printf("\n"); }
       
        for(int c=amp-1;c>=1;c--)      
             { for(int j=1;j<=c;j++) printf("%d",c);  if(!((scan==(count-1))&&(c==1)&&(a==frq)))printf("\n"); }
       
       if(!((scan==(count-1))&&(a==frq)))printf("\n");
      }
      
   }//count loop
printf("\n"); 
return 0;   
}

