#include<iostream>
using namespace std;
class stack
{
public:
bool isFull(int top, int size)
{
if(top==size-1)
{
return true;
}
return false;
}

bool Push(int arr[], int data, int &top, int size)
{

if(!isFull(top, size))
{
top=top+1;
arr[top]=data;
return true;
}
return false;
}

bool isEmpty(int top)
{
if(top==-1)
{
return true;
}
return false;
}

bool Pop(int arr[] , int &top, int &dataout)
{
if(!isEmpty(top))
{
dataout=arr[top];
top=top-1;
return true;
}
return false;
}

bool StackTop(int arr[], int top, int &data)
{
if(!isEmpty(top))
{
data=arr[top];
return true;
}
return false;
}

bool StackCount(int top)
{
return (top+1);
}
};

int main()
{
stack s;
int arr[100];
int top = -1;
int size, data, dataout, option;

cout<<"Enter Stack Size:";
cin>>size;

cout<<"\n1. Push Stack, 2. Pop Stack,3. Stack Top: ,4. Full Stack, 5. Empty Stack: ,6.
Stack Count: ,7. Exit:\n";

while(true)
{
cout<<"\nSelect an Option:";
cin>>option;

switch(option)
{
case 1:
cout<<"Enter data:";
cin>>data;

if(s.Push(arr, data, top, size))
cout<<"Inserted";
else
cout<<"Stack is Full";
break;

case 2:
if(s.Pop(arr, top, dataout))
cout<<"Popped element:"<<dataout;
else
cout<<"Stack is Empty";
break;

case 3:

if(s.StackTop(arr, top, data))
cout<<"Top element:"<<data;
else
cout<<"Stack is Empty";
break;

case 4:
if(s.isFull(top, size))
cout<<"Stack is Full";
else
cout<<"Stack is Not full";
break;

case 5:
if(s.isEmpty(top))
cout<<"Stack is Empty";
else
cout<<"Stack is not Empty";
break;

case 6:
if(s.isEmpty(top))
cout << "Stack is Empty; Count: " << s.StackCount(top);
else
cout << "Count: "<< s.StackCount(top);
break;

case 7:
cout<<"Exiting";
return 0;

default:
cout<<"Invalid Choice";
}
}
return 0;
}
