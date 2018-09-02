#include<iostream>
#include<string>
using namespace std;
int main()
{
	string yu;
	cin>>yu;
	int i;
	i=yu.size();
	for(i--;i>=0;i--)
	cout<<yu[i];
	cout<<endl;
}
