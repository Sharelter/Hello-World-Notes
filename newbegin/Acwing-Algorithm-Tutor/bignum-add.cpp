#include<iostream>
#include<vector>
#include<string>

const int N = 100010;

using namespace std;

vector<int> add(vector<int> &A,vector<int> &B)
{
    vector<int> C;
    
    int t = 0;
    for(int i =0;i < A.size() || i < B.size(); i++)
    {
        if(i < A.size()) t += A[i];
        if(i < B.size()) t += B[i];
        C.push_back(t % 10);
        t /= 10;
    }
    
    if(t) C.push_back(1);
    
    return C;
}

int main()
{
    string a,b;
    cin >> a >> b;
    
    vector<int> A,B;
    
    for(int i = a.size() -1; i >= 0;i --) A.push_back(a[i] - '0');
    for(int i = b.size() -1; i >= 0;i --) B.push_back(b[i] - '0');
     
     auto C = add(A,B);
     
     for(int i = C.size() -1;i >= 0;i --) cout << C[i];
     return 0;
}
