#include <iostream>
using namespace std;
#include <algorithm>
int main(int argc, char const *argv[])
{
  int n,k;
  cin>>n>>k;
  long long j,t,joy=-1000000000,joy1=0;
  for(int i=0;i<n;i++)
  {
    cin>>j;
    cin>>t;
    if(t>k)
    {
      joy1 = j-(t-k);
    }
    else{
      joy1 = j;
    }
    joy = max(joy,joy1);
  }
  cout<<joy;
  return 0;
}