#include<iostream>
using namespace std;
double x;
int main()
{
    cin>>x;
    cout<<ceil(log(1-x/100)/log(0.98));
    return 0;
}
//黑历史时期抄过的一篇题解
#include<bits/stdc++.h>
double x;
int main()
{
    std::cin>>x;
    std::cout<<ceil(log(1-x/100)/log(0.98));
    return 0;
}