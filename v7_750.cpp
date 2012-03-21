#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 8

class chess{
      int col[MAX];
      int scol;
      int cases;
      int board[MAX][MAX];
      public:
             void get();
             void put();
             void print();
             void displace(int,int);
             void place(int,int);
      };
      
void chess::get()
     {
     int srow;
     cin>>srow>>scol;
     for(int a=0;a<MAX;a++) col[a]=-1;
                 col[scol-1]=srow-1;
     for(int x=0;x<MAX;x++)
             for(int y=0;y<MAX;y++)
                     board[x][y]=0;
     cout<<"SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n"<<endl;
     cases=0;
     place(srow-1,scol-1);
     return;
     }

void chess::print()
     {
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
     return;
     }

void chess::put()
     {
     //print();
     /*
     bool legal=true;     
          for(int a=0;a<MAX;a++)
                  for(int b=0;b<MAX;b++)
                          if(board[a][b]>=2) legal=false;
     */
             
     if(1)
              {
                    int i=0;
                    for(i=0;(col[i]>=0)&&(i<MAX);i++);
              //cout<<"I is :"<<i<<endl;
              if(i==MAX)
                        {
                        cases++;
                        printf("%2d",cases);
                        cout<<"     ";
                        for(int k=0;k<MAX;k++) cout<<" "<<col[k]+1;                    
                        cout<<endl;
                        }
              
              else {
                   for(int j=0;j<MAX;j++)
                           {
                   if(board[j][i]==0)
                                     {
                                     place(j,i);
                                     //cout<<"PLACE("<<j+1<<","<<i+1<<")"<<endl;
                                     put();
                                     //cout<<"DISPLACE("<<j+1<<","<<i+1<<")"<<endl;
                                     displace(j,i);
                                     //print();
                                         }              
                           }
                   }
              }    
     else ;//cout<<"Cutting this....."<<endl;             
              
     return;     
     }
     
void chess::place(int r,int c)
     {
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
                 if(x) cout<<endl;
                 c1.get();
                 c1.put();
                 }
         return 0;
         }
