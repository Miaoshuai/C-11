/*======================================================
    > File Name: condtion.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2015年12月24日 星期四 15时38分45秒
 =======================================================*/
#include <thread>
#include <stdio.h>
#include <mutex>
#include <condition_variable>

int sum = 0;
std::mutex g_lock;
std::condition_variable_any condtion;
void work(int n)
{
    while(1)
    {
        std::lock_guard<std::mutex> guard(g_lock);
        sum++;
        printf("%d:被加到%d\n",n,sum);
        condtion.notify_one();
        
    }    
}

int main(void)
{
    std::thread t1(work,1);
    std::thread t2(work,2);
    std::thread t3(work,3);
    
    while(1)
    {
        std::lock_guard<std::mutex> guard(g_lock);
        condtion.wait(g_lock);
        while(sum > 0)
        {
            sum--;
        }
               
        printf("sum被减为sum = %d\n",sum);
        
    }    
    return 0;
}
