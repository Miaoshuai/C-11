/*======================================================
    > File Name: instance.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月04日 星期一 15时48分29秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>

class Instance
{
    public:
        static Instance &getInstance()
        {
            static Instance instance;
            return instance;
        }
        void addN(void)
        {
            n++;
        }
        void printN(void)
        {
            std::cout<<n<<std::endl;
        }
    private:
        Instance(){n = 1;}
        int n;
};

int main(int argc,char **argv)
{
  Instance &a = Instance::getInstance();
  a.printN();
  a.addN();
  a.printN();
  Instance &b = Instance::getInstance();
  a.printN();  
  return 0;
}
