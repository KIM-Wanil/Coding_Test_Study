#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int n,k;
int main() {
  cin>>n>>k;
  int count=0;
  while(n>1)
    {
      if(n%k==0)
      {
        n=n/k;
      }
      else
      {
        n-=1;
      }
      //cout<<n<<endl;
      count++;
    }
  cout<<count<<endl;
  return 0;
}