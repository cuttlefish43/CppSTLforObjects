#include<bits/stdc++.h>
using namespace std;
class info{
	public:
		int data1;
		int data2;
		string data3;
		info(int d1,int d2,string d3){
			data1=d1;
			data2=d2;
			data3=d3;
		}
		info(){
		}
};
int main(){
	vector<pair<int,info>> infolist;
	info obj;
	//pair<int,info> infopair;
	
	for(int i=0;i<5;i++){
		obj=info(i*i,i*2,"const");
		//infopair=make_pair(i,obj);
		infolist.push_back(make_pair(i,obj));
	}
	sort(infolist.begin(),infolist.end(),[ ](const auto& lhs,const auto& rhs){
			return lhs.second.data2 > rhs.second.data2;
			});
	for(int i=0;i<infolist.size();i++){
		cout<<infolist[i].first<<" : "<<infolist[i].second.data1<<" "<<infolist[i].second.data3<<endl;
	}
	return 0;
	vector<int>vec;
	for(int i=0;i<7;i++){
		cout<<vec[i];
	}
}
	
