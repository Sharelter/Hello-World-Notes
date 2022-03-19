#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int num = 4;
    int res = 0;
    unsigned int un = num;
    while(un) res += un & 1, un >>= 1;
    cout << res;

    return 0;
}