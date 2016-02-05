/*======================================================
    > File Name: mo.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年02月05日 星期五 15时32分05秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<functional>

class Father
{
    public:
        
        virtual void func(void) = 0;
};

template<typename T>
class Son : public Father
{
    public:
     typedef T type;
     virtual void func(void)
     {
           
     }   
};

template<typename T>
void hello(typename Son<T>::type x)
{
    std::cout<<x<<std::endl;
}

int main(int argc,char **argv)
{
  hello<int>(5);
  return 0;
}
