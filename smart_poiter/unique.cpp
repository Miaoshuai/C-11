/*======================================================
    > File Name: unique.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月19日 星期二 22时09分04秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<memory>
#include<functional>

void func(int *)
{
    std::cout<<"哈哈"<<std::endl;
}

int main(int argc,char **argv)
{
  std::unique_ptr<int,decltype(func) *> pu(new int(0),func);
  pu.reset(new int(1));
  std::cout<<*pu<<std::endl;
  pu.reset(new int(2));
  std::cout<<*pu<<std::endl;
  return 0;
}
