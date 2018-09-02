#include<iostream> 
using namespace std;
class student{
	private:
		int num;
		float score;
	public:
		void studata()
		{
			cin>>num;
			cin>>score;
		};
	void dispaly()
	{
		cout<<"num="<<num<<endl;
		cout<<"score="<<score<<endl;
	};
};
student stu1,stu2;
int main()
{
	stu1.studata();
	stu1.dispaly();
	stu2.studata();
	stu2.dispaly();
}
