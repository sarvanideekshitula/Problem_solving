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
	for(ll i=0;i<v.size();i++){
		cout << v[i] << endl;
	}
	return 0;
}
