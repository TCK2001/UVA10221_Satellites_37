/*
Sample Input
500 30 deg
700 60 min
200 45 deg
Sample Output
3633.775503 3592.408346
124.616509 124.614927
5215.043805 5082.035982
*/

#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <cmath>
#define _USE_MATH_DEFINES //M_PI���� ���ؼ�  

using namespace std;

int main()
{
	double s,a,r=6440;
	string name;
	while(cin>>s>>a>>name)
	{
		if(name=="min") //1 degree = 60min;
		{
			a=a/60;
		} 
		while(a>=360) //360������ ���༭ 180�� �̳��� �����; 
		{
			a=a-360;	
		}
		
		if(a>180) //180������ ���� ����ϱ�; 
		{
			a=a-180;
		}
		cout<<fixed<<setprecision(6);
		cout<<(s+r)*a*M_PI/180<<" "; //����*����*180����3.14�� ���� �ѷ�; 
		cout<<(s+r)*sin(a/2*M_PI/180)*2<<endl; //���̸� ���ҷ��� ����*sin(���� / 2) �ΰ��� ���ϱ� 2; 
	} 

return 0;
}

