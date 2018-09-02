#include<iostream>
#include<string>
using namespace std;
int main()
{
	string yu[5];
	int i,j;
	int len1,len2;
	for(i=0;i<5;i++)
	cin>>yu[i];
	for(i=0;i<5;i++)
	{
		int p=i;
		for(j=i+1;j<5;j++)
		{
			if(yu[p]>yu[j])
			p=j;
		}
		if(p!=i)
		{
			string hui;
			hui=yu[p];
			yu[p]=yu[i];
			yu[i]=hui;
		}
	}
	for(i=0;i<5;i++)
	cout<<yu[i]<<endl;
}
