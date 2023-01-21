#include<iostream>
using namespace std;
class Stack
{
	public:
	int size;
	int *arr;
	int top;
	Stack(int s)
	{
		size=s;
		arr=new int[size];
		top=-1;
	}
	void push(int element)
	{
		if(top>=size-1)
		{
			cout<<"Stack is overflow"<<endl;
		}
		else
		{
			top++;
			arr[top]=element;
		}
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"Stack is empty"<<endl;
		}
		else
		{
			cout<<"The pop element is"<<arr[top]<<endl;
			top--;
		}
	}
	void empty()
	{
		if(top==-1)
		{
			cout<<"Stack is empty"<<endl;
		}
		else
		{
			cout<<"Stack is non empty"<<endl;
		}
	}
	void display()
	{
		if(top<=-1)
		{
			cout<<"Stack is empty"<<endl;
		}
		else
		{
			cout<<arr[top]<<endl;
		}
	}
};
int main()
{
	int ss;
	cout<<"Enter the size of stack"<<endl;
	cin>>ss;
	Stack*st=new Stack(ss);
	st->push(11);
	st->push(22);
	st->push(33);
	cout<<"After pop 1 element your pop element is"<<endl;
	st->pop();
	st->display();
	cout<<"Chuck stack is empty or not"<<endl;
	st->empty();
}
