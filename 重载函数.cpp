#include<iostream>
#include<string>
using namespace std;
int main()
{
	int rank_num(int a[],int n);
	float rank_num(float a[],int n);
	double rank_num(double a[],int n);
	int n;
	int x[10];
	float y[10];
	double z[10];
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	cin>>x[i];
	for(i=0;i<n;i++)
	cin>>y[i];
	for(i=0;i<n;i++)
	cin>>z[i];
	rank_num(x,n);
	rank_num(y,n);
	rank_num(z,n);
}
int rank_num(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		int p=i;
		for(j=i+1;j<n;j++)
		{
			if(a[p]>a[j])
			p=j;
		}
		if(p!=i)
		{
			int c ;
			c=a[p];
			a[p]=a[i];
			a[i]=c;
			
		}
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	cout<<endl;
}
float rank_num(float a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		int p=i;
		for(j=i+1;j<n;j++)
		{
			if(a[p]>a[j])
			p=j;
		}
		if(p!=i)
		{
			float c ;
			c=a[p];
			a[p]=a[i];
			a[i]=c;
			
		}
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	cout<<endl;
}
double rank_num(double a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		int p=i;
		for(j=i+1;j<n;j++)
		{
			if(a[p]>a[j])
			p=j;
		}
		if(p!=i)
		{
			double c;
			c=a[p];
			a[p]=a[i];
			a[i]=c;
			
		}
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	cout<<endl;
}


