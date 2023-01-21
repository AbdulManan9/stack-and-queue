#include<iostream>
using namespace std;
class Queue
{
	private:
	int *arr;
	int front;
	int rear;
	int size;
	public:
		Queue(int s)
		{
			this->size=s;
			front=0;
			rear=0;
			arr=new int[s];
		}
		void enqueue(int data)
		{
		if(rear==size)
		{
			cout<<"Queue is full"<<endl;
		}
		else
		{
			arr[rear]=data;
			rear++;
		}
	}
	int dequeue()
	{
		if(front==rear)
		{
			cout<<"Queue is empty"<<endl;
		}
		else
		{
			int ans=arr[front];
			arr[front]=-1;
			front++;

			if(front==rear)
			{
				front=0;
				rear=0;
			}
			return ans;
		}
	}
	int qfront()
	{
		if(front==rear)
		{
			return -1;
		}
		else
		{
			return arr[front];
		}
	}
};
int main()
{
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	Queue q1= Queue(n);
	q1.enqueue(11);
	q1.dequeue();
	cout<<q1.qfront();
	
}
