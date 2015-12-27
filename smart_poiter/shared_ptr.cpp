/*************************************************************************
    > File Name: shared_ptr.cpp
    > Author: MiaoShuai
    > Mail: 945970809@qq.com 
    > Created Time: 2015年05月06日 星期三 21时29分38秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<tr1/memory>
using namespace std;

void fun(int *a)
{
	cout<<"a+5="<<*a+5<<endl;
}

int main(void)
{
	tr1::shared_ptr<int> pi(new int(5));
	
	
	cout<<"a = "<<*pi<<endl;

	fun(pi.get());
	return 0;
}
