#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>

using namespace std;


bool compare(int a,int b) //比较函数，判断a是否应该排在b的前面
{
     return a < b; // 这里的a < b 满足就返回true 不满足就返回false
     //return a > b; 按从大到小排
}
int main()
{
    vector<int> a = {1,4,2,3,6,5,7,9};
    srand(time(0)); //从1970到现在的秒数传入作为随机数种子
    //radom_shuffle这个函数会用到一个随机种子，如果不指定，那么默认为0
    random_shuffle(a.begin(),a.end()); //随机打乱数组元素的顺序

    for(int x : a) cout << x << ' ';

    sort(a.begin(),a.end(),compare);//sort 函数最后传入的greater从大到小排序,也可以自己写一个比较函数
    cout << endl;


//sort还有一个非常神奇的用法叫做排结构体 单独写在sort-strucr.cpp里面

    for(int x : a) cout << x << ' ';
    

    return 0;
}