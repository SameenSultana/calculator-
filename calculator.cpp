#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a;
	int b;
	int choice;
	int d;
	
	cout<<"Enter the value a "<<endl;
	cin>>a;
	
	cout<<"Enter the value b "<<endl;
	cin>>b;
	
	cout<<"Enter your choice: \n1. Sin() \n2. Cos() \n3. Tan()"<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			int mychoice;
			cout<<"\n for which value you want to calculate Sin\n1\n2"<<endl;
			cin>>mychoice;
			if(mychoice==1)
			{
				cout<<"value of Sin("<<a<<") is"<<sin(a);
			}
			if(mychoice==2)
			{
			cout<<"value of Sin("<<b<<") is"<<sin(b);
					
			}
			else
			{
				cout<<"invalid value"<<endl; 	
	        }  
			break;
		case 2:
			int ChoiceVar;
				cout<<"\n for which value you want to calculate Cos\n1\n2"<<endl;
			cin>>ChoiceVar;
			if(ChoiceVar==1)
			{
				cout<<"value of Cos("<<a<<") is" <<cos(a);
			}
			if(choice==2)
			{
			cout<<"value of Cos("<<b<<") is"<<cos(b);	
			}
			else
			{
				cout<<"invaild value"<<endl;
			}
			break;
		case 3:
			int MyChoice;
			cout<<"\n for which value you want to calculate Tan\n1\n2"<<endl;
			cin>>MyChoice;
			if(MyChoice==1)
			{
				cout<<"value of Tan("<<a<<") is" <<tan(a);
			}
			if(choice==2)
			{
				cout<<"value of Tan("<<b<<") is" <<tan(b);
			}
			else
			{
				cout<<"invalid choice"<<endl;
			}
			break;
		default:
			cout<<"Invalid choice"<<endl;
			break;
   }  
}


