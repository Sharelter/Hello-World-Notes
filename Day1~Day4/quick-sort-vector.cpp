#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int N = 1e5 + 10;
int n;
vector<int> q;
int a[N];

void quick_sort(vector<int> q,int l,int r)
{
    if(l >= r) return ;

    int i = l - 1,j = r + 1,x = q[(l + r) >> 1];
    while(i < j)
    {
        do i++; while(q[i] < x);
        do j--; while(q[j] > x);
        if(i < j)  swap(q[i],q[j]);
    }
    quick_sort(q,l,j),quick_sort(q,j+1,r);
}

int main()
{
    cin >> n;
    for(int i = 0;i < n;i ++) 
    {
        int tmp;
        scanf("%d",&tmp);
        q.push_back(tmp);
    }
    quick_sort(q,0,n-1);

    for(int x : q) cout << x << ' ';
    return 0;
}