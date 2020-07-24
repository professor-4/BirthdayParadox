//Birthday paradox Problem
#include<bits/stdc++.h>
#include<cstring>
#include<algorithm>
using namespace std;



int main(){
#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
#endif
		float x = 10;
		//x denotes probability of 2ppl having different birthday.
		int pepole = 0;
		float num = 365;
		float denum = 365;
		float p;
		cin>>p;
		while(x>=1-p){
			x=x*(num/denum);
			num--;
			pepole++;
			
		}
		cout<<"Max People can be: "<<pepole<<endl;

}
