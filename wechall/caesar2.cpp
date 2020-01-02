#include<bits/stdc++.h>
using namespace std;

void rot(vector<int>& v){
	for(int i=0;i<v.size();i++){
		v[i]=(v[i]+1)%128;
	}
}

vector<int> v;
int main(void){
	ifstream is("input.txt");
	ofstream os("output.txt");
	while(!is.eof()){
		int t;
		is>>hex>>t;
		v.push_back(t);
	}
	for(int i=0;i<128;i++){
		for(int j:v){
			os<<(char)j<<"";
		}
		os<<"\n";
		rot(v);
	}
}
