/*======================================================
    > File Name: mutex.h
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2015年12月24日 星期四 15时10分46秒
 =======================================================*/

#include <iostream>
#include <string>
#include <thread>
#include <mutex>

int sum = 0;

std::mutex g_lock;  //创建互斥锁对象

void thread_worker(int thread_number)
{
    while(1)
    {
        g_lock.lock();
        sum++;
        std::cout<<"线程"<<thread_number<<":sum = "<<sum<<std::endl;
        g_lock.unlock();
    }
}

int main(int argc,char **argv)
{
  std::thread t1(thread_worker,1);
  std::thread t2(thread_worker,2);
  std::thread t3(thread_worker,3);
  t1.join();
  t2.join();
  t3.join();
  return 0;
}
