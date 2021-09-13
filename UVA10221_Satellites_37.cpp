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
#define _USE_MATH_DEFINES //M_PI쓰기 위해서  

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
		while(a>=360) //360넘으면 빼줘서 180도 이내로 만들기; 
		{
			a=a-360;	
		}
		
		if(a>180) //180안으로 만들어서 계산하기; 
		{
			a=a-180;
		}
		cout<<fixed<<setprecision(6);
		cout<<(s+r)*a*M_PI/180<<" "; //길이*각도*180분의3.14는 원의 둘레; 
		cout<<(s+r)*sin(a/2*M_PI/180)*2<<endl; //길이를 구할려면 길이*sin(각도 / 2) 두개라서 곱하기 2; 
	} 

return 0;
}

