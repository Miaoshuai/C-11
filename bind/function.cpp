/*======================================================
    > File Name: function.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年02月12日 星期五 08时46分11秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<functional>

void test(std::function<void(int,int)> fc)
{
    int x = 1;
    int y = 2;
    fc(x,y);
}

void func(int x,int y)
{
    std::cout<<x<<"  "<<y<<std::endl;
}

int main(int argc,char **argv)
{
  test(std::bind(&func,std::placeholders::_1,std::placeholders::_2));  
  return 0;
}
