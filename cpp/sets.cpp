#include<bits/stdc++.h>
using namespace std;
class Sample{
    public:
    int x;
    int y;
    Sample(){

    }
    Sample(int p, int q){
        x=p;
        y=q;
    }

};
class cmp{
    public:
    cmp(){}
    bool operator()(const Sample &a,const Sample &b){ // i am comparing w.r.t "y" attribute of object 
        return a.y > b.y;
    }
    
};
int main(){
    set<int>s;
    //inserting
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(9);
    vector<int> a={12,2,5,2,12,5,3,6,7,7,89};
    s.insert(a.begin(),a.end());
    //iterating
    for( set<int>:: iterator it =s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //iterating using foreach
    for(auto it : s){
        cout<<it<<" ";
    }
    cout<<endl;
    //searching
    auto x =s.find(5);
    if(x == s.end()){
        cout<<"element not found";
    }else{
        s.erase(x);
        cout<<s.size();
    }
    
    cout<<endl;
    //erasing
    s.erase(5);
    cout<<s.size();
    
    cout<<s.size()<<" ";
    cout<<endl;
    //upperbound lowerbound
    auto u=s.upper_bound(7); // just greater element is returned
    cout<<*u<<" ";
    // cout<<*s.upper_bound(7); // short version
    cout<<*s.lower_bound(8)<<" "; // if 8 is present then lower bound is 8 else just greater element than 8 is returned
    cout<<endl;

    // sets with objects
    Sample obj=Sample(4,6);
    Sample obj2=Sample(3,2);
    Sample obj3=Sample(5,1);
    set<Sample,cmp> sobj; // we need to choose how to compare objects
    sobj.insert(obj);
    sobj.insert(obj2);
    sobj.insert(obj3);
    for(auto i : sobj){
        cout<<i.x<<" "<<i.y<<endl;
    }
    return 0;
}