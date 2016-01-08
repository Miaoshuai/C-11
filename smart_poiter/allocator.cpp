/*======================================================
    > File Name: allocator.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月08日 星期五 15时55分57秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<memory>

int main(int argc,char **argv)
{
  std::allocator<int> alloc;
  std::vector<int> v(5,7);
  auto p = alloc.allocate(v.size() *3);
  auto q = std::uninitialized_copy(v.begin(),v.end(),p);
  

  for(int i=0; i < 5; i++ )
  {
      std::cout<<*p++<<" ";
  }
  std::cout<<std::endl;
  std::vector<int> vv(5,6);
  std::uninitialized_copy(vv.begin(),vv.end(),q);

  for(int j = 0; j < 5; j++)
  {
    std::cout<<*q++<<" ";
  }
  std::cout<<std::endl;

  std::vector<int> vvv(5,5);
  std::uninitialized_fill_n(q,vvv.size(),5);


  for(int j = 0; j < 5; j++)
  {
    std::cout<<*q++<<" ";
  }
  std::cout<<std::endl;
  return 0;
}
