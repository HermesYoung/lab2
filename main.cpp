#include <iostream>
#include <unistd.h>
#include <fstream>
#include "lab2.h"
using namespace std;
int main() {
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out",ios::out);
	float m,h;
	Data data;
	if(!inFile||!outFile){
	cerr<<"Failed Opening"<<endl;
	}
	else
	{
	while(inFile>>m>>h){
		data.Get_Mass(m);
		data.Get_height(h);
	outFile<<data.Cal_BMI()<<" "<<data.Set_cate()<<endl;
	}
	
	}
	return 0;
}
