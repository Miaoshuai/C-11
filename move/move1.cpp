/*======================================================
    > File Name: move1.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2015年12月25日 星期五 15时05分04秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include <utility>

int main(int argc,char **argv)
{
  int i = 3;
  int &&rr  = std::move(i);
  return 0;
}
