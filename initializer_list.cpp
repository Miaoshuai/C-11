/*======================================================
    > File Name: initializer_list.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月19日 星期二 12时04分11秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include <initializer_list>

void func(std::initializer_list<int> il)
{
    for(auto x : il)
    {
        std::cout<<x<<"  ";
    }
    std::cout<<std::endl;
}

int main(int argc,char **argv)
{
  func({1,2,3,4,5}); 
  return 0;
}
