#include<iostream>
using namespace std;
int main()
{
	int n;
	int a=2;
	int b=1;
	int c=1;
	cout<<"press 1 for For loop";
	cout<<"Press 2 for While loop";
	cout<<"press 3 for Do While loop";
	cin>>n;
	switch(n)
	{
		case 1:
			for(int i=1;i<=10;i++)
			{
				cout<<a<< " * "<<i<<" = "<<a*i;
				
			}
			break;
			case 2:
				while(b<=10)
				{
					cout<<a<<" * "<<b<<" = "<<a*b;
					b++;
				}
				break;
				case 3:
					do
					{
						cout<<a<<" * "<<c<<" = "<<a*c;
						c++;
					}
					while (c<=10);
					break;
					default:
						cout <<" invalid choce";
	}
}
