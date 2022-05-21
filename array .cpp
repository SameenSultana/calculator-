#include<iostream>
using namespace std;
int main(){
	int numbers[6];
	cout<<"enter 5 numbers:";
	for(int i=0;i<6;i++)
	{
		cin>> numbers[i];
	}
	cout<<"the numbers are:";
	for(int n=0;n<6; n++)
	{
		cout<<numbers[n]<<" "; 
	}
	return 0;
}
