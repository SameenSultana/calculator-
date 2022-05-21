#include<iostream>
using namespace std;
int main()
{
	int num ,sum=10;
	do
	{
		cout<<"enter a number:";
		cin>>num;
		sum+=num;
	}
	while (num!=0);
	cout<<"sum is"<<sum;
}
