#include<cstdio>                //printf��scanf����cstdio��,��C�����пɵ���stdio.h��
#include<cstdlib>               // ʹ��system( )����cstdlib��
using namespace std;       //��C������Ҫʡ�ԣ�������VC++��TC++��
int main()                           //�е�C���Կ���void main(),����TC++��VC++
{                                        //��������ʼ
	float s,h,up,down;     // float����s,h,up,downΪ������ʵ�ͱ���
	up=15; 	                 //��֪�ϵ�
	down=25; 	  //��֪�µ�
	h=2*150/up;             //�����ϵ�������εĸ�
	s=(up+down)*h/2; 	  //������ε����
	printf("s=%0.2f\n",s);// \n�ǻ��п��Ʒ���0.2f��ʵ��λ�����������2λС��
	system("pause");     //��ͣ���ã�TC++��VC++��ʹ��system( )����stdlib.h��
	return 0;                   //����������TC++��VC++��ҲҪ����
}

