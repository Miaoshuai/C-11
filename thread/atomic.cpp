/*======================================================
    > File Name: atomic.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月26日 星期二 12时12分01秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<atomic>
#include<thread>

std::atomic_int n(0);
int a = 0;
int b = 0;

void sum(void)
{
    while(n <= 10000000)
    {
        a++;
        n++;
    }
}


int main(int argc,char **argv)
{
  std::thread t(sum);
  while(n <= 10000000)
  {
    b++;
    n++;
  }
  t.join();
  int c = a+b;
  std::cout<<"n:"<<n<<"   "<<"a:"<<a<<"  "<<"b:"<<b<<"  "<<"c:"<<c<<std::endl;  
  return 0;
}
