#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(10);
    //vector<int>v(10,7); size 10 value 7
    int x=0;
    //iteration
    for(auto &i : v){ //ref
        i=x++; //assignment
    }
    for(auto i : v){ //copy
        cout<<i<<" ";
    }
    cout<<endl;
    //pushback
    v.push_back(19);
    //random access
    cout<<v[10]<<endl;
    //insert
    v.insert(v.begin()+3,44);
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    //erase
    v.erase(v.begin()+4);
    v.erase(v.end()-2);
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    //resize 
    // if greater than original then new elements are valued 0
    v.resize(20);
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    // if less than original then back elements are lost
    v.resize(7);
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    // sort with custom comparison
    sort(v.begin(),v.end(),[](const int a, const int b){
        return a > b;
    });
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}