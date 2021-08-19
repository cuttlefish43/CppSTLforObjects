#include<bits/stdc++.h>
using namespace std;
class info{
	public:
		int rollno;
		string name;
		int grade;
		info(){
		}
		info(int r,string n, int g){
			rollno=r;
			name=n;
			grade=g;
		}
		//~info(){
		//}
};
int main(){

	vector<info> v;
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		string c;
		cin>>a>>c>>b;
		info obj= info(a,c,b);
		v.push_back(obj);
		//obj.~info();
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i].rollno<<" "<<v[i].name<<" "<<v[i].grade<<endl;
	}
	//lambda functions allowed only in c++11 or above
	//else use traditional compare function
	sort(v.begin(),v.end(),[ ]( const auto& lhs, const auto& rhs){ //third argument is a labmda function
			return lhs.grade < rhs.grade; //comparison according to custom value
			});

	for(int i=0;i<v.size();i++){
		cout<<v[i].rollno<<" "<<v[i].name<<" "<<v[i].grade<<endl;
	}
	//v.clear();
	cout<<v.size();
	return 0;
}


