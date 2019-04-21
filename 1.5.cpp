#include<iostream>                   //使用cin,cout，须调用iostream库
using namespace std;
int main()
{
	char a;                      //定义字符变量,
	cin>>a;                      //输入给定一个字符
	cout<<"  "<<a<<endl;         //输出1个字符,先输出2个空格
	cout<<" "<<a<<a<<a<<endl;    //输出3个字符,先输出1个空格
	cout<<a<<a<<a<<a<<a<<endl;   //输出5个字符
	return 0;                    //结束程序
}

