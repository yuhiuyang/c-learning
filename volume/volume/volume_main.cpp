#include<iostream>
#include"volume.h"
using namespace std;
int main()
{
	Volume v1, v2, v3;
	v1.set_value();
	v1.get_volume();
	v1.show_volume();
	v2.set_value();
	v2.get_volume();
	v2.show_volume();
	v3.set_value();
	v3.get_volume();
	v3.show_volume();
	system("pause");
	return 0;
}