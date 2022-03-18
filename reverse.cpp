#include<algorithm> //这个库里面会有好多好多已经帮我们实现好的函数
#include<iostream> 
#include<vector>

using namespace std;

int main()
{
    vector<int> a{1,2,3,4,5};

    reverse(a.begin(),a.end());

    for(int x : a) cout << x << ' ';

    return 0;
}