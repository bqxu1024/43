#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x,y,a,b;
	double z;
	cin>>x>>a>>y>>b;
	z=(y*b-x*a)/(b-a);//�����������
	cout<<setiosflags(ios::fixed)<<setprecision(2);//������λС��
	cout<<z<<endl;
	return 0;
}

