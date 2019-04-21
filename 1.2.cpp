#include<cstdio>                //printf和scanf调用cstdio库,在C语言中可调用stdio.h库
#include<cstdlib>               // 使用system( )调用cstdlib库
using namespace std;       //在C语言中要省略，例如在VC++和TC++中
int main()                           //有的C语言可用void main(),例如TC++和VC++
{                                        //整个程序开始
	float s,h,up,down;     // float定义s,h,up,down为单精度实型变量
	up=15; 	                 //已知上底
	down=25; 	  //已知下底
	h=2*150/up;             //根据上底求出梯形的高
	s=(up+down)*h/2; 	  //求出梯形的面积
	printf("s=%0.2f\n",s);// \n是换行控制符，0.2f按实际位数输出，保留2位小数
	system("pause");     //暂停作用，TC++和VC++中使用system( )调用stdlib.h库
	return 0;                   //结束程序，在TC++和VC++中也要保留
}

