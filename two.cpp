#include<iostream>
#include<string>
#include<map>
#include<unordered_set>
#include<algorithm>
#include<vector>


using namespace std;

int main()
{
map<string,int> mp;
string arr[]={"abc","xyz","pqr","abc","abc","mno","abc"};
int n=sizeof(arr)/sizeof(arr[0]);
int count;
for (int i =0;i<n;i++)
{
    count=0;
    if(mp.find(arr[i])==mp.end())
    {   count++;
        mp.insert({arr[i],count});
    
    }
    else
    {   
        auto itr=mp.find(arr[i]);
        count=itr->second +1;
        mp.erase(arr[i]);
        mp.insert({arr[i],count});
    }
    
}

for(auto itr1= mp.begin();itr1!=mp.end();itr1++)
{
    cout<<itr1->first <<"  "<<itr1->second<<"\n";
}

}