#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>&nums)
{
    int flag=0;
    for(auto i=nums.begin();i!=nums.end();++i)
    {
        flag=0;
        for(auto j=nums.begin();j!=nums.end();++j)
        {
            if(*i==*j)
            {
                flag++;
            }
        }
        if(flag==1)
        {
            return *i;
        }
    }
    return 0;
}
int main()
{
    vector<int>seg{65,75,65,95,75};
    cout<<singleNumber(seg);
    cout<<endl;
    return 0;
}