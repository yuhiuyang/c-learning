#include<iostream>
using namespace std;
class time
{
	public:
		void set_time();
		void show_time();
	private:
		int hour;
		int minute;
		int sec;
};
int main()
{
	time t;
	t.set_time();
	t.show_time();
	return 0;
}
void time::set_time()
{
	cin>>hour;
	cin>>minute;
	cin>>sec;
}
void time::show_time()
{
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}
