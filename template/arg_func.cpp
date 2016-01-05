/*======================================================
    > File Name: arg_func.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月05日 星期二 16时34分27秒
 =======================================================*/
#include<iostream>
#include<vector>
#include<string>



void hello(int a,double b,const char *c,const char *d)
{
    std::cout<<a<<"   "<<b<<"   "<<c<<"   "<<d<<std::endl;
}

template <typename... Args>
void foo(Args... args)
{
    hello(args...);
}

int main(int argc,char **argv)
{
  foo(1,2.5,"hello","world");
  return 0;
}
