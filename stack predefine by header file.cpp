#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s;
	s.push(2);
	s.push(3);
	s.pop();
	cout<<"Printing top element"<<endl;
	s.top();
	if(s.empty())
	{
		cout<<"Stack is empty"<<endl;
	}
}
