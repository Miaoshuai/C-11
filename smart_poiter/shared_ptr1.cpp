/*======================================================
    > File Name: shared_ptr1.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月16日 星期六 15时49分28秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<memory>

int main(int argc,char **argv)
{
  std::shared_ptr<void> p = std::make_shared<int>(5);
  std::cout<<*p<<std::endl;
  return 0;
}
