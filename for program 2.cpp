#include<iostream>
using namespace std;
int main()
{
	int B[14]={11,59,3,3.5,55,34,26,41};
	int length= 11;
	int sum= 0;
	int avg= 0;
	for(int i=0;i<length;i++)
	{
		sum+=B[i];
	}
	avg = sum/length;
	cout<<"sum:" <<sum;
	cout<<"Average:" <<avg;
}
