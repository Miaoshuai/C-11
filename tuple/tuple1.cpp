/*************************************************************************
    > File Name: tuple1.cpp
    > Author: MiaoShuai
    > Mail: 945970809@qq.com 
    > Created Time: 2015年05月04日 星期一 20时54分31秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<numeric>
using namespace std;
int main(void)
{
	tuple<float,string>mytuple(3.14,"hello");
	pair<int,char>mypair(10,'a');
	auto myt = tuple_cat(mytuple,mypair);

	cout<<"tuple print\n";
	cout<<get<0>(myt)<<" ";
	cout<<get<1>(myt)<<" ";
	cout<<get<2>(myt)<<" ";
	cout<<get<3>(myt)<<endl;
	cout<<endl;

	return 0;
}
