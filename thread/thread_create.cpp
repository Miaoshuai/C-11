/*======================================================
    > File Name: thread_create.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2015年12月24日 星期四 14时46分58秒
 =======================================================*/
#include <iostream>
#include <thread>
#include <string>
#include <unistd.h>

void thread_worker(int n,std::string s,int m)
{
    std::cout<<"n = "<<n<<std::endl;
    std::cout<<"s = "<<s<<std::endl;
    std::cout<<"m = "<<m<<std::endl;
}

int main(int argc,char **argv)
{
  std::thread t(thread_worker,5,"shreck",6);
  t.detach();
  sleep(1);
  return 0;
}
