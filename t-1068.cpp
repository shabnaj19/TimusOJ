#include<iostream>

int main()
{
    int n, total =0;
    std::cin>>n;
    if(n>0)
    {
        for(int i =1; i<=n; i++)
        {
            total = total + i;
            //std::cout<<i<<' '<<total<<std::endl;
        }
    }
    else if(n==0)
    {
        total = 1;
    }
    else
    {
        total = 1;
        for(int i=-1; i>=n; i--)
        {
            total = total + i;
            //std::cout<<i<<' '<<total<<std::endl;
        }
    }
    std::cout<<total<<std::endl;

}
