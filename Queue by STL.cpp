#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int> q;
	q.push(11);
	q.push(12);
	q.push(112);
	cout<<"Chuck the size of queue"<<endl<<q.size();
	q.pop();
	cout<<"Now chuck the size of queue"<<endl<<q.size()<<endl;
	cout<<"Chuck the front value of queue"<<endl;
	cout<<q.front();
	if(q.empty())
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		cout<<"Queue is non empty"<<endl;
	}
}
