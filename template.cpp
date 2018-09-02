#include<iostream>
#include<string>
using namespace std;
template<typename t>
	int rank_num(t a[],int n)
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
				t c ;
				c=a[p];
				a[p]=a[i];
				a[i]=c;
				
			}
		}
		for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
		cout<<endl;
	}
int main()
{
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

