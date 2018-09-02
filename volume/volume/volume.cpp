#include<iostream>
#include"volume.h"
using namespace std;
void Volume::set_value()
{
	cin >> length>> width >> height;
}
void Volume::get_volume()
{
	volume = length*width*height;

}
void Volume::show_volume()
{
	cout << "volume=:" << volume << endl;
}