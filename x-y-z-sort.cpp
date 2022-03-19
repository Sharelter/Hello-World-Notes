#include<iostream>
#include<algorithm>

using namespace std;

struct tri
{
    int x;
    double y;
    string z;
};

bool cmp(tri a,tri b)
{
    return a.x < b.x;
}

int main()
{
    int n;
    cin >> n;

    tri dat[100001];
    for(int i = 0;i < n;i ++)
    {
        cin >> dat[i].x >> dat[i].y >> dat[i].z;
    }

    sort(dat,dat + n,cmp);

    for(int i = 0;i < n;i++)
    {
        cout << dat[i].x << ' ';
        printf("%.2lf",dat[i].y);
        cout <<  ' ' << dat[i].z;
        cout << endl;
    }

    return 0;
}