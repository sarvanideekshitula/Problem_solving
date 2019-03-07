#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ll n, m;
  cin>>n>>m;
  ll arr[n][m], col[n][m], res[n][m];
  for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
      cin>>arr[i][j];
      col[i][j] = 0;
      res[i][j] = 0;
    }
  }
  ll i=0, j=0, flag=0;
  col[0][0] = 1;
  res[0][0] = 1;
  vector<ll> v;
  while(true){
    if(arr[i][j+1]==1 && col[i][j+1] == 0 && (j+1) != n){
      j = j+1;
      col[i][j] = 1;
      res[i][j] = 1;
      v.push_back(1);
    }
    else if(arr[i+1][j] == 1 && col[i+1][j] == 0 && (i+1) != n){
      i = i+1;
      col[i][j] = 1;
      res[i][j] = 1;
      v.push_back(2);
    }
    else if(i!= 0 && j!= 0){
      if(v.back() == 1){
        res[i][j] = 0;
        j = j-1;
        v.pop_back();
      }
      else{
        res[i][j] = 0;
        i = i-1;
        v.pop_back();
      }
    }
    else{
      flag = 1;
      break;
    }
    if(i == (n-1) && j== (n-1)){
      break;
    }
  }
  if(flag == 0){
    cout << "yes" << endl;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cout << res[i][j] << " ";
      }
      cout << endl;
    }
  }
  else{
    cout << "no" << endl;
  }
	return 0;
}
