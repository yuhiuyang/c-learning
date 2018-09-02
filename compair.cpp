#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	int compair(int &a,int &b,int &c);
	compair(x,y,z);
	
}
int compair(int &a,int &b,int &c)
{
	int max,min,mid;
	max=a>b?a:b;
	min=a>b?b:a;
	max=max>c?max:c;
	mid=max>c?c:max;
	if(mid<min)
	{
		int s;
		s=min;
		min=mid;
		mid=s;
	}
	cout<<max<<"\t"<<mid<<"\t"<<min<<endl;
}
