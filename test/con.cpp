/*======================================================
    > File Name: con.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年02月19日 星期五 11时42分42秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<memory>

class A
{
    public:
        A(std::shared_ptr<int> &p)
        {
            if(p.unique())
            {
                std::cout<<"独一的"<<std::endl;
            }
            else
            {
                std::cout<<"非独一"<<std::endl;
            }
        }
};

int main(int argc,char **argv)
{
  std::shared_ptr<int> p(new int(5));
  A a(p);
  return 0;
}
