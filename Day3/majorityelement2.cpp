#include <bits/stdc++.h> 
vector < int > majorityElementII(vector<int> &arr){
 int k=arr.size()/3;
unordered_map<int,int>mp;
for(auto it:arr){
 mp[it]++;
}
vector<int>v;
for(auto a:mp){
 if(a.second>k)
     v.push_back(a.first);
}
return v;
}