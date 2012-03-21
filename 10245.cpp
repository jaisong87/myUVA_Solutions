#include<cstdio>
#include<iostream>
#include<cmath>
#include<set>
using namespace std;

bool fdbg = false;

struct Point{
double X;
double Y;
};

bool compareByX(Point P1, Point P2)
{
if(P1.X < P2.X) return true;
else if(P1.X == P2.X) 
	{
	if(P1.Y < P2.Y) return true;
	}
return false;
}

bool compareByY(Point P1, Point P2)
{
return (P1.Y < P2.Y);
}

bool (*XSort)(Point, Point) = compareByX;
bool (*YSort)(Point, Point) = compareByY;

double dis(Point P1, Point P2)
{
double dx = P1.X - P2.X;
double dy = P1.Y - P2.Y;
double d = sqrt(dx*dx+dy*dy);
return d;
}

double bfDis(set<Point, bool (*)(Point, Point)> P)
{
double d = 10000000;
for(set<Point>::iterator i = P.begin(); i!= P.end(); i++)
	{
	set<Point>::iterator j = i;
	j++;
	while(j != P.end())
		{
		double d1 = dis(*i, *j);
		if(d1 < d) d = d1;
		j++;
		}	
	}
	return d;
}

double minDistance(set<Point, bool (*) (Point, Point)> P)
{ 
//base case
if(P.size() == 2) { 
set<Point>::iterator i = P.begin();
Point P0 = *i;
i++;
Point P1 = *i;
return dis(P0,P1);
}

if( P.size() < 2 ) return 100000000;
//other cases - Divide and conquer
set<Point, bool (*) (Point, Point)> L(XSort), R(XSort);
int z = P.size();

double xl = 0 , xmid = 0;
int pos = 0;
for(set<Point>::iterator i = P.begin();i != P.end() ;i++)
	{
	if(pos<=(z/2)) { L.insert(*i); xl = (*i).X; }
	else R.insert(*i);
	pos++;
	}

xmid = (xl + (*(R.begin())).X)/2;
//cout<<" xmid is "<<xmid<<endl;
double dl = minDistance(L);
double dr = minDistance(R);

double d = min(dl,dr);


set<Point>::iterator xlow,xhigh;
Point plow; 
plow.X = xmid - d;
plow.Y = 0;

Point phi;
phi.X=xmid+d+1;
phi.Y = 0;

xlow = P.lower_bound(plow);
xhigh = P.lower_bound(phi);

set<Point> P2;
for(set<Point>::iterator i = xlow; i != xhigh && i!= P.end(); i++)
	{
//compare straight away 
//P2.insert(*i);

set<Point>::iterator k = i;
k++;

while( k != xhigh && k!= P.end())
	{
	double td = dis(*i, *k);
	if(td<d) d = td;
	k++;
	}


/*
Point Pt;
Pt.X = Pt.Y =0;

double td =d;
set<Point>::iterator j = i++;
if( j != P.end()) td = dis(*i, *(j));
if(td < d) d= td;


j++;
if( j != P.end()) td = dis(*i, *(j));
if(td < d) d= td;

j++;
if( j != P.end()) td = dis(*i, *(j));
if(td < d) d= td;

//X + d/2 and now 3 verticals
Pt.X = (*i).X+double(d/2);
j = P.lower_bound(Pt);
if(j!= P.end()) td = dis(*i, *j);

j++;
if( j != P.end()) td = dis(*i, *(j));
if(td < d) d= td;

j++;
if( j != P.end()) td = dis(*i, *(j));
if(td < d) d= td;

//X + D.. This one only 1 pt is reqd
Pt.X = (*i).X+d;
j = P.lower_bound(Pt);
if(j!= P.end()) td = dis(*i, *j);
	
j++;
if( j != P.end()) td = dis(*i, *(j));
if(td < d) d= td;
*/
}

return d;
}

int main()
{
int N, X, Y ;
set< Point, bool (*) (Point, Point) > P(XSort);
while(cin>>N && N)
	{
	double di = 1000000000;
	if(fdbg) cout<<" N is "<<N<<endl;
	P.clear();
	for(int i=0;i<N;i++)
		{
		cin>>X>>Y;
		Point Pt;
		Pt.X = X;
		Pt.Y = Y;
		if(fdbg) cout<<"("<<X<<","<<Y<<") ";
		if(P.find(Pt) != P.end() ) di = 0;
		P.insert(Pt);
		}

	if(fdbg)
		{	
	cout<<endl;
	for(set<Point>::iterator i = P.begin(); i!= P.end(); i++)
		cout<<"("<<(*i).X<<","<<(*i).Y<<") ";
		
	cout<<endl;	
		}

	di  = min(di, minDistance(P));
	if(di < 10000 ) printf("%.4f\n", di);
	else printf("INFINITY\n");
	//cout<<bfDis(P)<<endl;
}

return 0;
}

