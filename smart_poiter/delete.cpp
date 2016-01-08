/*======================================================
    > File Name: delete.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月08日 星期五 14时41分01秒
 =======================================================*/

#include <iostream>
#include <vector>
#include <string>
#include <memory>

int main(int argc,char **argv)
{
  std::shared_ptr<int> sp(new int[10],[](int *p){std::cout<<"hello\n"; delete []p;});
  return 0;
}
