/*======================================================
    > File Name: cas.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年04月05日 星期二 18时06分18秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<atomic>

struct Test
{
    int a;
};

int main(int argc,char **argv)
{
  std::atomic<Test> *p1 = new std::atomic<Test>();
  //p1->a = 5;
  Test b,c; 

  if(std::atomic_compare_exchange_weak(p1,&b,c))
  {
      std::cout<<"成功\n";
  }
  else
  {
    std::cout<<"失败\n";
  }
  return 0;
}
