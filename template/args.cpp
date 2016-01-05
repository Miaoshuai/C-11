/*======================================================
    > File Name: args.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月05日 星期二 15时11分10秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>


template <typename T>
void foo(T t)
{
    std::cout<<t<<std::endl;
}

template <typename T,typename... Args>
void foo(T t,Args... args)
{
    std::cout<<t<<", ";
    foo(args...);
}

int main(int argc,char **argv)
{
  foo(1,2.5,"hello","world");
  return 0;
}
