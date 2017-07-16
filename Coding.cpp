#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
typedef vector<int> V;
typedef map<int, int> M;
typedef map<string,string>mss;
typedef map<char, int> MC;
typedef set<int> S;
typedef long long ll;

#define mp make_pair
#define pb push_back
#define all(c)	c.begin(),c.end()
#define For(i,n) for(int i=0;i<n;i++)
#define rep(i,a,n) for(int i=a;i<=n;i++)
#define tr(container, it) \
      for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

int main() {
	mss dic ;
	string s,t,k;
	stringstream ss;
	while(getline(cin,s) && s.size()){
		ss <<s;
		ss>>t;
		ss>>k;
		dic[k]=t;
		ss.clear();
		//cout<<k<<" "<<t<<endl;
	}
	while(cin>>s){
		mss::iterator it = dic.find(s);
		if(it != dic.end())
			cout<<it->second<<"\n";
		else
			cout<<"eh\n";
	}
}
