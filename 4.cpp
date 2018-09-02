#include<iostream>
using namespace std;
int main()
{
	int max(int &a,int &b);
	int x,y;
	cin>>x>>y;
	max(x,y);
	cout<<x<<endl<<y;
}
int max(int &a,int &b)
{
	if(a<b)
	{
		int c;
		c=a;
		a=b;
		b=c;
	}
}





