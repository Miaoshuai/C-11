/*======================================================
    > File Name: func1.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2015年12月26日 星期六 17时45分25秒
 =======================================================*/

#include<iostream>
#include <thread>
#include <unistd.h>
#include <functional>
class Test
{
    public:
        Test(int m):n(m),testThread_(std::bind(&Test::print,this))
        {
        
        }
        void print(void)
        {
            std::cout<<n<<std::endl;
        }
    private:
        int n;
        std::thread testThread_;
};

int main(int argc,char **argv)
{
  Test test(8);
  sleep(1000); 
  return 0;
}
