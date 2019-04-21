#include<iostream>               //使用cin,cout，须调用iostream库
	using namespace std;
	int main()
	{
		int x,y;                                //定义整型变量
		cout<<"Input x=";               //输入提示
		cin>>x;        	              //小朋友的人数
		y=10*x; 		              //计算总票价
		cout<<"total="<<y<<endl;  //输出总票价
		return 0;                             //结束程序
	}

