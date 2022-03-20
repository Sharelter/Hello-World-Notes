bool check()
{

}
//检查中点是否满足条件


int bsearch(int l,int r)
{
    while(l < r)
    {
        int mid = (l + r) >> 1;
        if(check()) r = mid;
        else 
    }
    return l;
}