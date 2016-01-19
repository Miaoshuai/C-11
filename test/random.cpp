/*======================================================
    > File Name: random.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月19日 星期二 12时45分30秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<random>

int main(int argc,char **argv)
{
  std::default_random_engine e;

  for(int i=0; i < 10; i++)
  {
    std::cout<<e()<<"  ";
  }
  std::cout<<std::endl;
  return 0;
}
