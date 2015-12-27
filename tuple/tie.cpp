/*************************************************************************
    > File Name: tie.cpp
    > Author: MiaoShuai
    > Mail: 945970809@qq.com 
    > Created Time: 2015年05月04日 星期一 21时15分28秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<tuple>
using namespace std;
int main(void)
{
	int myint;
	char mychar;
	float myfloat;

	tuple<int,float,char>mytuple;
	mytuple = make_tuple(10,2.6,'a');
	tie(myint,myfloat,mychar) = mytuple;
	cout<<"myint:"<<myint<<endl;
	cout<<"myfloat:"<<myfloat<<endl;
	cout<<"mychar:"<<mychar<<endl;

	get<0>(mytuple) = 1000;
	cout<<"myint:"<<myint<<endl;
	cout<<"get<0>(mytuple)"<<get<0>(mytuple)<<endl;

	return 0;
}
