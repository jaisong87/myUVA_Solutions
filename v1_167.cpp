#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 8

class chess{
      int col[MAX];
      int scol;
      int cases;
      int sum;
      int max;
      int board[MAX][MAX];
      int score[MAX][MAX];
      public:
             void get();
             void put();
             void print();
             void displace(int,int);
             void place(int,int);
      };
      
void chess::get()
     {
     for(int a=0;a<MAX;a++) col[a]=-1;
     for(int x=0;x<MAX;x++)
             for(int y=0;y<MAX;y++)
                    {
                   board[x][y]=0;
                   cin>>score[x][y];
                   }
     sum=0;
     max=0;
     return;
     }

void chess::print()
     {
     printf("%5d\n",max);
     /*
     cout<<".........BOARD.........."<<endl;
     for(int a=0;a<MAX;a++)
            {
              for(int b=0;b<MAX;b++)
                     cout<<board[a][b]<<" ";
            cout<<endl;         
            }     
     cout<<".........COL.........."<<endl;
            for(int i=0;i<MAX;i++) cout<<col[i]<<"  ";
            cout<<endl;
     */
     return;
     }

void chess::put()
     {

     if(1)
              {
                    int i=0;
                    for(i=0;(col[i]>=0)&&(i<MAX);i++);
              if(i==MAX)
                        {
                        if(sum>max) max=sum;
                        }
              
              else {
                   for(int j=0;j<MAX;j++)
                           {
                   if(board[j][i]==0)
                                     {
                                     place(j,i);
                                     put();
                                     displace(j,i);
                                         }              
                           }
                   }
              }    
     else ;
        
     return;     
     }
     
void chess::place(int r,int c)
     {
     sum+=score[r][c];
     col[c]=r;
     for(int i=0;i<MAX;i++)
                           {  board[r][i]++; board[i][c]++; }
      
      int r1=r-1,c1=c-1;
      while( r1>=0 && c1>=0 ) { board[r1][c1]++; r1--; c1--; }
      r1=r+1;     
      c1=c+1;
      while(r1<MAX && c1<MAX) { board[r1][c1]++; r1++; c1++; }
      r1=r-1;     
      c1=c+1;
      while(r1>=0 && c1<MAX) { board[r1][c1]++; r1--; c1++; }
      r1=r+1;     
      c1=c-1;
      while(r1<MAX && c1>=0) { board[r1][c1]++; r1++; c1--; }
     board[r][c]--;
     
     return;              
     }
     
void chess::displace(int r,int c)
     {
     sum-=score[r][c];
     col[c]=-1;
 
    for(int i=0;i<MAX;i++)
                           {  board[r][i]--; board[i][c]--; }
      
      int r1=r-1,c1=c-1;
      while( r1>=0 && c1>=0 ) { board[r1][c1]--; r1--; c1--; }
      r1=r+1;     
      c1=c+1;
      while(r1<MAX && c1<MAX) { board[r1][c1]--; r1++; c1++; }
      
      r1=r-1;     
      c1=c+1;
      while(r1>=0 && c1<MAX) { board[r1][c1]--; r1--; c1++; }
      r1=r+1;     
      c1=c-1;
      while(r1<MAX && c1>=0) { board[r1][c1]--; r1++; c1--; }
      board[r][c]++;
      
     return;              
     }
     
     int main()
         {
         int n;
         chess c1;      
               cin>>n;
         for(int x=0;x<n;x++)
                 {
                 c1.get();
                 c1.put();
                 c1.print();
                 }
         return 0;
         }
