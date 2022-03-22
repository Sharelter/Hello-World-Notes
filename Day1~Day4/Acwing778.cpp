#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int N = 1e5 + 10;
int n;
struct nums
{
    int x,y;
};
nums num[N];
bool cmp(nums a,nums b)
{
    return a.x < b.x;
}

int main()
{
    cin >> n;

    for(int i = 0;i < n;i++)
    {
        scanf("%d",&num[i].x);
        num[i].y = i;
    }

    sort(num,num + n,cmp);

    long long ans = 0;
    for(int i = n - 1;i >= 0;i --)
        for(int j = i;j >= 0;j--)
        {
            if(num[i].x > num[j].x && num[i].y < num[i].y) ans ++;
        }
    
    cout << ans;
    return 0;
}