/*======================================================
    > File Name: unique1.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月28日 星期四 15时43分07秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<memory>

std::unique_ptr<int> func(void)
{
    return std::unique_ptr<int>(new int(5));
}


int main(int argc,char **argv)
{
  std::unique_ptr<int> p = func();
  std::cout<<*p<<std::endl;
  return 0;
}
