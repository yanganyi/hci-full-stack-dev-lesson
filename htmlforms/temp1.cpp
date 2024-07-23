#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long N, odd=0, even=0, temp;
  cin>>N;
  for (int i=0;i<N;i++){
    cin>>temp;
    if (temp%2==0){
      even++;
    }
    else{
      odd++;
    }
  }
  cout<<even*odd;
  
  
}


