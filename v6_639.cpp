#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 8

class chess{
      int rook;
      int max;
      int N;
      int board[MAX][MAX];
      public:
             bool get();
             void put();
             void print();
             void displace(int,int);
             void place(int,int);
      };
      
bool chess::get()
     {
     char ch;
     if( (cin>>N)&&(N) ) 
                       {
     for(int x=0;x<N;x++)
             for(int y=0;y<N;y++)
                     {
                     cin>>ch;
                     if(ch=='X') board[x][y]=-1;
                     else board[x][y]=0;            
                     }
     rook=max=0;
     return true;
                }
     return false;
     }

void chess::print()
     {
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
            cout<<max<<endl;
     return;
     }

void chess::put()
     {
     for(int x=0;x<N;x++)
             for(int y=0;y<N;y++)
                     {
                    if( board[x][y]==0) 
                                        {
                                        place(x,y);
                                        put();
                                        displace(x,y);            
                                        }             
                     }
     if(rook>max) max=rook;   
     return;     
     }
     
void chess::place(int r,int c)
     {
     rook++;
     board[r][c]++;
     int r1,c1;
     r1=r-1; 
     while(r1>=0 && board[r1][c]!=-1) { board[r1][c]++; r1--; }
     r1=r+1; 
     while(r1<N && board[r1][c]!=-1) { board[r1][c]++; r1++; }
     c1=c-1; 
     while(c1>=0 && board[r][c1]!=-1) { board[r][c1]++; c1--; }
     c1=c+1; 
     while(c1<N && board[r][c1]!=-1) { board[r][c1]++; c1++; }
     return;              
     }
     
void chess::displace(int r,int c)
     {
     rook--;
     board[r][c]--;
     int r1,c1;
     r1=r-1; 
     while(r1>=0 && board[r1][c]!=-1) { board[r1][c]--; r1--; }
     r1=r+1; 
     while(r1<N && board[r1][c]!=-1) { board[r1][c]--;   r1++; }
     c1=c-1; 
     while(c1>=0 && board[r][c1]!=-1) { board[r][c1]--; c1--; }
     c1=c+1; 
     while(c1<N && board[r][c1]!=-1) { board[r][c1]--; c1++; }
     return;              
     }
     
     int main()
         {
         int n;
         chess c1;      
               while( c1.get()) 
               {
                 c1.put();
                 c1.print();
                 }
         return 0;
         }
