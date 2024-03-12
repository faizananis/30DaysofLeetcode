#include<iostream>
#include<vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums)
{
    vector<int>temp;
    int product1=1;
    int product2=1;
    int count=0;
    int flag=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        {
            flag++;
            product2=product2*nums[i];
            if(i<nums.size()-1)
            {
                i++;
            }
            else
            {
                continue;
            }
        }
        product1=product1*nums[i];
    }
    int k=0;
    for(int j=0;j<nums.size();j++)
    {
        if(flag>1)
        {
            temp.push_back(product2);
            continue;
        }
        if(nums[j]==0)
        {
            temp.push_back(product1);
            continue;
        }
        if(flag==0)
        {
            temp.push_back(product1/nums[j]);
        }
        else
        {
            temp.push_back(product2);
        }
    }
    return temp;
}
int main()
{
    vector<int> king{-1,1,0,-3,3};
    vector<int> temp;
    temp=productExceptSelf(king);
    for(int i=0;i<4;i++)
    {
        cout<<temp[i]<<"   ";
    }
    cout<<endl;
    return 0;
}
