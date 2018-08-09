#include <iostream>
using namespace std;

int a= 7; 
bool adj[7][7]; 
bool visit[7]; 
int solution[250]; 

void HamiltonCircuit( int &count ); 
void backtrack( int n, int &count ); 

int main()
{
	int count = 0; 

	adj[0][1] = true; adj[0][3] = true; adj[0][5] = true; adj[0][6] = true; 
	adj[1][0] = true; adj[1][2] = true; adj[1][3] = true; 
	adj[2][1] = true; adj[2][3] = true; adj[2][4] = true; adj[2][5] = true;
	adj[3][0] = true; adj[3][1] = true; adj[3][2] = true; 
	adj[4][2] = true; adj[4][5] = true; 
	adj[5][0] = true; adj[5][2] = true; adj[5][4] = true; adj[5][6] = true;
	adj[6][0] = true; adj[6][5] = true;

   HamiltonCircuit( count );

	cout << " " << count << " " << endl << endl; 

system("pause"); 
return 0; 
}

void HamiltonCircuit( int &count ) 
{
	solution[0] = 0; 
	backtrack( 1, count ); 
}

void backtrack( int n, int &count ) 
{
	if ( n == a) 
	{
		int x = solution[a- 1]; 
		int y = solution[0]; 
		if( adj[x][y] )   //判断最后一个和第一个通不通 
		{
			for( int i = 0; i <= 7; i++ )
			{
				cout << solution[i] << " " ;    //输出结果
			}
			count++;    //回路个数加1
			cout << endl << endl;
		}
		return;
	   }

	int x = solution[n - 1];  
	
	for( int y = 1; y < a; y++ ) 
	{
		if( adj[x][y] && !visit[y] ) //x点与y点通且y没有走过
		{  
			visit[y] = true;//标记 y点以及走过
			solution[n] = y; //以及从x走到了y让下一个起点是y
			backtrack( (n + 1), count ); 
			visit[y] = false; 
		}
	}
}