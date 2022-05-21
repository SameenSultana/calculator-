#include<iostream>
using namespace std;
int main()
{
	int ROW = 3;
	int COL = 3;
	int matrix[ROW][COL];
	
	for(int i=0 ;i<ROW ; i++)
	{
		for(int j=0; j<COL; j++)
		{
			cin>>matrix[i][j];
			
		}
	}
	for (int a=0; a<ROW; a++)
	{
		for(int b=0; b<COL; b++)
		{
			cout<<matrix[a][b]<<"\t";
		}
	}
}
