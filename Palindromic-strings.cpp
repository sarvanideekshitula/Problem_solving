#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	string s;
	cin>>s;
	ll left, right;
	std::vector<string> v;
	for(ll i=0;i<s.length();i++){
		left = right = i;
		while(left>=0 && right<s.length() && s[left] == s[right]){
			ll len = (right-left)+1;
			string s1 = s.substr(left, len);
			v.push_back(s1);
			left--;
			right++;
		}
	}
	for(ll i=0;i<s.length()-1;i++){
		left = i;
		right = i+1;
		while(left>=0 && right<s.length()){
			if(s[left] == s[right]){
				ll len = (right-left)+1;
				string s1 = s.substr(left, len);
				v.push_back(s1);
			}
			left--;
			right++;
		}
	}
	set<string>str;
	for (ll i=0;i<v.size();i++){
		if(v[i] != " "){
			str.insert(v[i]);
		}
	}
	set<string>::iterator it;
	for (it=str.begin();it!=str.end();it++){
		cout << *it << endl;
	}
	return 0;
}
