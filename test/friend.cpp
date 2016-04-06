/*======================================================
    > File Name: friend.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年03月15日 星期二 14时54分42秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>


class Test
{
    public:
        Test(int m):n(m){}
        friend class Friend;
    private:
        int n;
};

class Friend
{
    public:
        void func(Test &t)
        {
            std::cout<<t.n<<std::endl;
        }
};


int main(int argc,char **argv)
{
  Test t(3);
  Friend f;
  f.func(t);
  return 0;
}
