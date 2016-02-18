/*======================================================
    > File Name: test.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年02月19日 星期五 00时49分43秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<memory>

void func(const std::shared_ptr<int> &p)
{
    if(p.unique())
    {
        std::cout<<"独一的"<<std::endl;
    }
    else
    {
        std::cout<<"非独一"<<std::endl;
    }   
}

int main(int argc,char **argv)
{
  std::shared_ptr<int> p= std::make_shared<int>(5);
  func(p); 
  return 0;
}
