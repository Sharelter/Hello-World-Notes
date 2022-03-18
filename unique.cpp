#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int a[] = {1,1,2,2,3,4,5};

    int n = unique(a,a + 7) - a;

    for(int i=0;i < n;i++) cout << a[i] << ' ';


    // vector<int> a = {1,1,2,2,3,3,4,5};
// 
    // a.erase(unique(a.begin(),a.end()),a.end());
// 
    // for(int i = 0;i < a.size();i ++) cout << a[i] << ' ';
// 
    return 0;
}