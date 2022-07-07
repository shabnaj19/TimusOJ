#include<iostream>

int main()
{
    int n, m, cnt;
    std::cin>>n>>m;
    cnt = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            cnt++;
            //std::cout<<i<<' '<<j<<std::endl;
        }
    }
    std::cout<<cnt<<std::endl;

}
