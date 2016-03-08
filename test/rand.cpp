/*======================================================
    > File Name: yy.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年03月09日 星期三 00时00分51秒
 =======================================================*/
#include <iostream>
#include <random>
#include <thread>
#include <mutex>
using namespace std;

std::mutex mutex_;
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> dis(1,1000);

void func(void)
{
    
    for (int i = 0; i < 10; i++)
    {
        std::lock_guard<std::mutex> guard(mutex_);
        int randomX = dis(gen);
        cout << "\nRandom X = " << randomX<<std::endl;
    }
}

int main()
{
    thread t1(func);
    thread t2(func);
    thread t3(func);
    t1.join();
    t2.join();
    t3.join();
}
