#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> divi(vector<int> &A,int &b,int &r)
{
    vector<int> C;
    r = 0;
    for(int i = A.size() - 1;i >= 0;i --) 
    {
        r = A[i] + r * 10;
        C.push_back(r / b);
        r %= b;
    }
    reverse(C.begin(),C.end());
    while(C.back() == 0 && C.size() > 1) C.pop_back();
    return C;
}

int main()
{
    string a;
    int b;
    cin >> a >> b;
    
    vector<int> A;
    for(int i = a.size() - 1;i >= 0;i --) A.push_back(a[i] - '0');
    
    int r;
    auto C = divi(A,b,r);
    
    for(int i = C.size() - 1;i >= 0;i --) cout << C[i];
    cout << endl << r;
    return 0;
}
