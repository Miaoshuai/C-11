/*======================================================
    > File Name: thread_id.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2015年12月26日 星期六 21时55分51秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include <thread>


void getThreadId(void)
{
    std::cout<<getCurrentThreadId()<<std::endl;
}

int main(int argc,char **argv)
{
  std::thread t(getThreadId);
  t.join();
  return 0;
}
