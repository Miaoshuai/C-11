/*======================================================
    > File Name: map.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月06日 星期三 15时26分10秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include <map>

int main(int argc,char **argv)
{
  std::map<int,int> m;
  m.insert(std::pair<int,int>(5,2));
  m.insert(std::pair<int,int>(3,4));
  
  std::cout<<m.size()<<std::endl;
  std::cout<<(--m.end())->first<<std::endl;
  for(auto t : m)
  {
    std::cout<<t.first<<" ";
  }
  return 0;
}
