/*======================================================
    > File Name: exit.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年03月01日 星期二 20时01分54秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<thread>
#include<unistd.h>

int *p;

void func(void)
{
    std::cout<<*p<<std::endl;   
}

void func1(void)
{
    std::cout<<"哈哈"<<std::endl;
    sleep(100000);
    std::cout<<"谔谔"<<std::endl;   
}

int main(int argc,char **argv)
{
  std::thread t1(func1);
  std::thread t2(func1);
  std::thread t3(func);

  t1.join();
  t2.join();
  t3.join();
  std::cout<<"啊啊"<<std::endl;
  return 0;
}
