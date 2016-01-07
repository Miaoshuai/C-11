/*======================================================
    > File Name: static.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月06日 星期三 22时46分03秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>

class Test
{
    public:
        static void func(void)
        {
            n = 5;
        }
    private:
        static int n;

};

int Test::n = 0;

int main(int argc,char **argv)
{
  Test::func();
  
  return 0;
}
