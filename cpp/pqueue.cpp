#include<bits/stdc++.h>
using namespace std;
class Sample{
    public:
    int x;
    int y;
    Sample(){

    }
    Sample(int p,int q){
        x=p;
        y=q;
    }
};
class Cmp{
    public:
    Cmp(){

    }
    bool operator() (const Sample &a,const Sample &b) const {
        if(a.y == b.y){
            return a.x > b.x;
        }else{
            return a.y > b.y;
        }
    }
};
int main(){
    /* 
    default priority queue (Max heap)  
    priority_queue<int>q;
    */
    /* 
    priority queue (Min heap)
    priority_queue<int,vector<int>,greater<int>>q;
     */

    //priority queue with objects and custom condition
    priority_queue<Sample,vector<Sample>, Cmp> que;
    vector<Sample> v={Sample(4,5),Sample(3,9),Sample(5,1),Sample(5,5),Sample(7,6)};
    for(Sample s : v){
        que.push(s);
    }
    while(!que.empty()){
        cout<<que.top().x<<" - "<<que.top().y<<endl;
        que.pop();

    }
    return 0;
}
