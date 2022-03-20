#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        char c;
        cin >> s >> c;
        int len = s.size();

        bool flag = false;
        if(len % 2 == 0) flag = 0;
        else if(len == 1 && s[0] == c) flag = true;
        else if(s[0] == c || s[len - 1] == c) flag = true;
        else
        {
            for(int i = 0;i < len;i++)
           {
                if(s[i] == c && i > 1 && i < len - 2) flag = true;
            }
        }
        if(flag) cout << "YES";
        else cout << "NO";

        cout << endl;
    }

}