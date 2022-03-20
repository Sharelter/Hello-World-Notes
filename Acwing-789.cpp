#include<iostream>
using namespace std;

int main()
{
    int n,qst;
    scanf("%d%d",&n,&qst);
    int q[n];
    for(int i=0;i<n;i++) scanf("%d",&q[i]);
    
    while(qst--)
    {
        int x;
        scanf("%d",&x);
        int l = 0,r = n-1;
        while(l < r) 
        {
            int mid = (l + r) >> 1;
            if(q[mid]>=x) r = mid;
            else l = mid+ 1;
        }
        
        if(q[l]!=x) cout<<"-1 -1"<<endl;
        else 
        {
            cout<<l<<" ";
            l = 0,r = n-1;
            while(l < r)
            {
                int mid = (l + r + 1) >> 1;
                if(q[mid] <= x) l = mid;
                else r = mid - 1;
            }
            cout<<l<<endl;
        }
        
    }
    return 0;
}