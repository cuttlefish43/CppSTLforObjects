#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>m;
    m.insert({3,5});
    m.insert({9,7});
    m.insert({8,4});
    m.insert({4,8});
    m.insert({4,7});
    m.insert({4,7});
    m.
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    map<int,vector<int>>mv;
    mv.insert({3,{5}});
    mv.insert({4,{7}});
    mv.insert({8,{4}});
    mv.insert({4,{8}});
    mv.insert({4,{7}});
    mv.insert({9,{7}});
    for(auto i : mv){
        cout<<i.first<<" ";
        for(auto ii : i.second){
            cout<<ii<<" ";
        }
        cout<<endl;
    }
    multimap<int,int>mm;
    mm.insert({3,5});
    mm.insert({9,7});
    mm.insert({8,4});
    mm.insert({4,8});
    mm.insert({4,7});
    mm.insert({4,7});
    for(auto i : mm){
        cout<<i.first<<" "<<i.second<<endl;
    }
    multimap<int,vector<int>>mmv;
    mmv.insert({3,{5}});
    mmv.insert({4,{7}});
    mmv.insert({8,{4}});
    mmv.insert({4,{8}});
    mmv.insert({4,{7}});
    mmv.insert({9,{7}});
    for(auto i : mmv){
        cout<<i.first<<" ";
        for(auto ii : i.second){
            cout<<ii<<" ";
        }
        cout<<endl;
    }
    return 0;
}