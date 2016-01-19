/*======================================================
    > File Name: random1.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月19日 星期二 15时38分24秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<random>
#include<ctime>

int main(int argc,char **argv)
{
  std::uniform_int_distribution<unsigned> u(0,9);
  std::default_random_engine e(std::time(0));

  for(int i=0; i< 10; i++)
  {
    std::cout<<u(e)<<" ";
  }
  std::cout<<std::endl;
  return 0;
}
