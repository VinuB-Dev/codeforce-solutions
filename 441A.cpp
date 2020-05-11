#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n,m,counts=0,count=0;
  cin>>n>>m;
  int s[n];
  int k;
  for (size_t i = 0; i < n; i++)
  {
    cin>>k;
    int a[k];
    count=0;
    for (size_t j = 0; j < k; j++)
    {
      cin>>a[j];
      if(m>a[j])
      {
        count++;
      }
    }
    if(count>0)
    {
      counts++;
      s[i]=1;
    }
    else{
      s[i]=0;
    }
    
  }
  cout<<counts<<endl;
  for (size_t i = 0; i < n; i++)
  {
    if(s[i]==1)
    {
      cout<<i+1<<" ";
    }
  }
  
  
  return 0;
}