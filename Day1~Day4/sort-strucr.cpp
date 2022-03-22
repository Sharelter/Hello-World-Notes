#include<iostream>
#include<algorithm>
#include<vector>
//用sort排结构体
using namespace std;

struct Rec 
{
    int x,y;
    //比较函数也可以直接写在结构体里面，写成重载小于号的方式
    bool operator < (const Rec &t) const{ //operater也可以重载等于和大于号但是最常用的是重载小于号

        return x > t.x;
    }
} a[5]; //开五个名字叫做a的全局Rec变量
        
//operater怎么用呢
//重载小于号之后比较 if(a[1] < a[2]) 定义这里的小于号为满足其他的条件时成立，这样就可以直接用小于号了

bool cmp(Rec a, Rec b) // 定义一个比较函数，让x更小的排在前面
{
    return a.x > b.x;
}
int main()
{
     for(int i = 0;i < 5;i++)
     {
         a[i].x = i,a[i].y = -i;
     }

     for(int i = 0;i < 5;i++) printf("(%d,%d)",a[i].x,a[i].y);

     sort(a,a+5);
    cout << endl;
     for(int i = 0; i < 5 ; i++) printf("(%d,%d)",a[i].x,a[i].y);

     return 0;
}