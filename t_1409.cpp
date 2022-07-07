#include<iostream>

int main()
{
    int h, l,total = 0;

    std::cin>>h>>l;
    total = h+l;
    h = total - h - 1;
    l = total - l - 1;
    std::cout<<h<<' '<<l<<std::endl;

}
