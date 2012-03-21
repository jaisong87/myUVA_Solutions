import java.io.*;
import java.util.*;

class Main{

public static void main(String args[])
{
/*
InputStreamReader isr = new InputStreamReader(System.in);
BufferedReader br = new BufferedReader(isr);
*/
Scanner scan1 = new Scanner(System.in);
int n = scan1.nextInt();

for(int i=1;i<=n;i++)
	{
		int atScore[] = new int[10]; 
		int dfScore[] = new int[10];
		String name[] = new String[10];
	
	for(int j=0;j<10;j++)
		{
			name[j] = scan1.next();
			atScore[j] = scan1.nextInt();
			dfScore[j] = scan1.nextInt();
		}

//Sort by atScore descending
for(int j = 0 ;j<10;j++)
	for(int k=j+1;k<10;k++)
		{
			boolean swapIt = false;
			if(atScore[k] > atScore[j] ) swapIt = true;
			else if(atScore[k] == atScore[j])
				{
					if(dfScore[k] < dfScore[j])  swapIt = true;
					else if(dfScore[k] == dfScore[j]) 
						{
							if(name[k].compareTo(name[j]) < 0 )
								swapIt = true;
						}
				}

			if(swapIt)
				{
					String ts = name[k]; name[k] = name[j]; name[j] = ts;
					int t1 = atScore[k]; atScore[k] = atScore[j]; atScore[j] = t1;
					int t2 = dfScore[k]; dfScore[k] = dfScore[j]; dfScore[j] = t2;
				}
		}
	
//System.out.print("Hello UVA!\n");
//System.out.print(" Case : "+ i +"\n");
String atk[] = new String[5];
String def[] = new String[5];

for(int l =0; l<5;l++)
	{
	atk[l] = name[l];
	def[l] = name[5+l];
	}

java.util.Arrays.sort(atk);
java.util.Arrays.sort(def);

System.out.print("Case "+i+":\n");

System.out.print("("+atk[0]);
for(int j=1;j<5;j++)
	System.out.print(", "+atk[j]);
System.out.print(")\n");


System.out.print("("+def[0]);
for(int j=1;j<5;j++)
	System.out.print(", "+def[j]);
System.out.print(")\n");

/*
emotionalblind, jaan, sameezahur, sohelh, tanaeem)

(brokenarrow, muntasir, shadowcoder, shamim, sidky)
*/
	}
}

};
