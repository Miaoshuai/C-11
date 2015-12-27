/*======================================================
    > File Name: move2.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2015年12月25日 星期五 16时14分05秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include <utility>
#include <memory>

int main(int argc,char **argv)
{
  std::unique_ptr<int> pu(new int(5));
  std::unique_ptr<int> pt(new int(6));
  std::unique_ptr<int> pr = std::move(pu);
  if(pu == NULL)
  {
    std::cout<<"hello"<<std::endl;
  }

  std::cout<<*pr<<std::endl;
  pu = std::move(pt);
  std::cout<<*pu<<std::endl; 
  return 0;
}
