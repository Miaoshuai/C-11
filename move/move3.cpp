/*======================================================
    > File Name: move3.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2015年12月25日 星期五 17时09分11秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include <memory>

int main(int argc,char **argv)
{
  std::vector<std::unique_ptr<int>> v;
  std::unique_ptr<int> p1(new int(1));
  std::unique_ptr<int> p2(new int(2));
  std::unique_ptr<int> pt = NULL;
  //std::unique_ptr<int> pr = p1.release();
  //std::cout<<*pr<<std::endl;
  //v.push_back(p1.release());
  v.push_back(std::move(p1));
  pt = v.pop_back();
  std::cout<<*pt<<std::endl;
  return 0;
}
