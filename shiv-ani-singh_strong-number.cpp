#include<bits/stdc++.h>
using namespace std;
int fac(int x);
int main(){
	int n,p,s=0,t;
	cin>>n;
	t=n;
	while(t!=0){
		p=t%10;
		s=s+fac(p);
		t=t/10;
	
	}
	if(s==n)
	cout<<"Strong number";
	else cout<<"Not a strong number";
	
}
int fac(int x){
	if(x==1)
	return 1;
	else return x*fac(x-1);
}
