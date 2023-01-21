#include<iostream>
using namespace std;
class Queue
{
	public:
		int size;
		int front=-1;
		int rear=-1;
		int *Arr;
		Queue(int s)
		{
			size=s;
			front=0;
			rear=0;
			Arr=new int[size];
		}
	void enqueue(int element)
	{
		if((front==0&&rear==size-1)||(rear==front-1)%(size-1))
			{
				cout<<"Queue is full"<<endl;
			}
			else if(front==-1)
			{
				front=rear=0;
				Arr[rear]=element;
			}
			else
			{
				rear++;
				Arr[rear]=element;
			}
			
	}	
	int dequeue()
	{
		if(front==-1)
		{
			cout<<"Queue is empty"<<endl;
		}
		int x=-1;
		x=Arr[front];
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front ++;
		}
		return x;
	}
	int qfront()
	{
		if(front==rear)
		{
			cout<<"Queue is empty"<<endl;
		}
		else
		{
			cout<<Arr[front];
		}
	}
	void empty()
	{
		if(front==rear)
		{
			cout<<"Queue is empty "<<endl;
		}
		else
		{
			cout<<"Stack is non empty"<<endl;
		}
	}
};
int main()
{
	int ss;
	cout<<"Enter the size of queue"<<endl;
	cin>>ss;
	Queue*q=new Queue(ss);
	q->enqueue(11);
    q->enqueue(22);
	q->enqueue(33);
	q->enqueue(44);
	cout<<"Chuck queue is empty or not"<<endl;
	q->empty();
	
}
