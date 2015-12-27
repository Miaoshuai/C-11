/*************************************************************************
    > File Name: tuple.cpp
    > Author: MiaoShuai
    > Mail: 945970809@qq.com 
    > Created Time: 2015年05月04日 星期一 20时37分40秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include <tuple>
using namespace std;
int main(void)
{
	auto t1 = make_tuple(1,'a',"hello",3.5);
	cout<<"tuple中的值为:"<<endl;
	cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1)<<" "<<get<3>(t1)<<endl;


	return 0;
}
