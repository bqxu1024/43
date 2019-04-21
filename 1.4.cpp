#include<iostream>               //使用cin,cout，须调用iostream库
	using namespace std;
	int main()
	{
		int s1,s2,s3;                 //变量定义
		s1=15*20;                     //15头牛20天所食的草量
		s2=20*10;                     //20头牛10天所食的草量
		s3=(s1-s2)/(20-10);       //每天新生的草量单位数
		cout<<"s="<<s3<<endl;  //1单位为1头牛1天的食量
		return 0;                        //结束程序
	}

