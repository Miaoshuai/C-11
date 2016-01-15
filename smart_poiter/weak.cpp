/*======================================================
    > File Name: weak.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月15日 星期五 17时23分59秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<memory>

int main(int argc,char **argv)
{
  std::shared_ptr<int> sp;
  std::weak_ptr<int> wp;
  {
    auto p = std::make_shared<int>(5);
    wp = p;
    sp = wp.lock();
  }
  std::cout<<*sp<<std::endl;
  return 0;
}
