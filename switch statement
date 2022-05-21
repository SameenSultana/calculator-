#include<iostream>
using namespace std;

int a[4], n, elem, i, pos;

void create()
{

cout<<"\nEnter the size of the array elements: ";
cin>>"%d", &n;
cout<<"\nEnter the elements for the array:\n";
for(i=0; i<n; i++)
cin>>"%d", &a[i];
}

void display()
{
	
	int i;
cout<<"\nThe array elements are:\n";
for(i=0; i<n; i++)
{
cout<<"%d\t", a[i];
}

}

void insert() 
{
cout<<"\nEnter the position for the new element: ";
cin>>"%d", &pos;
cout<<"\nEnter the element to be inserted: ";
cin>>"%d", &elem;
for(i=n-1; i>=pos; i++)

{
a[i+1] = a[i];
}
a[pos] = elem;
n = n+1;
}

void del()
{

cout<<"\nEnter the position of the element to be deleted: ";
cin>>("%d", &pos);
elem = a[pos];
for(i=pos; i<n-1; i++)
{
a[i] = a[i+1];
}
n = n-1;
cout<<"\nThe deleted element is = %d",
elem; }

void main()
{
	int ch;

do{

cout<<"1.Create\n 2.Display\n 3.Insert\n 4.Delete\n 5.Exit\n";

cout<<"\nEnter your choice: ";
cin>>"%d", &ch;
switch(ch)

{
case 1: create();
break;
case 2: display();
break;
case 3: insert();
break;
case 4: del();
break;
case 5: exit();
break;
default: printf("\nInvalid choice:\n");
break;
}

}
while(ch!=5);
return 0;
}
