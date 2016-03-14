/*======================================================
    > File Name: shared_ptr3.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年03月14日 星期一 17时36分20秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<memory>

class A
{
    public:
        ~A()
        {
            std::cout<<"哈哈\n";
        }
    public:
        std::shared_ptr<A> p;
};

int main(int argc,char **argv)
{
  std::shared_ptr<A> ptr(new A);
  ptr->p = ptr;
  std::cout<<ptr.use_count()<<std::endl;
  return 0;
}
