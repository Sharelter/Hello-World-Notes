#include<iostream>
#include<algorithm>
#include<vector>

//lower_bound和upper_bound在不想要写二分的时候可以使用，节约一些时间
using namespace std;

int main()
{
    vector<int> a = {1,2,3,4,5};
    int l = lower_bound(a.begin(),a.end(),3) - a.begin(); //lower_bound 传入三个变量，前两个分别是要二分查找的首地址和尾地址，第三个传入要比较的值
    //lower_bound返回第一个大于等于传入数值（传入的第三个参数）的地址，上面的这样的写法是得到第一个大于等于传入数值的下标
    //如果找不到一个大于等于传入数值的数，就返回二分区间的后一个地址

    cout << a[l];

    cout << endl;
    int u = upper_bound(a.begin(),a.end(),3) - a.begin(); //upper_bound返回第一个严格大于x的第一个元素的地址或者迭代器
    //如果传入的是一个数组，那么就返回一个地址，如果传入的是一个vector,返回的是一个迭代器
    cout << a[u] ;
    //如果要找大于最大值的元素，返回的是二分尾地址的后一个地址

    return 0;
}