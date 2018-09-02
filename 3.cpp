#include<iostream>
using namespace std;
int main()
{
	int max(int x,int y,int z=0);
	max(10,20,100);
}
int max(int x,int y,int z)
{
	if(x<y)
	x=y;
	if(x<z)
	x=z;
	cout<<x;
}







