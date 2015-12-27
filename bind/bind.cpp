/*************************************************************************
    > File Name: bind.cpp
    > Author: MiaoShuai
    > Mail: 945970809@qq.com 
    > Created Time: 2015年10月26日 星期一 21时13分04秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<functional>

void output(int x)
{
	std::cout<<x<<std::endl;
}

int main(void)
{
	auto fr = std::bind(output,std::placeholders::_1);

	fr(3);
	

	return 0;
}
