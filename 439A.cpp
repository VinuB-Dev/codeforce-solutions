#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n,d;
  
  int count=0;
  cin>>n>>d;
  int t[n];
  for (size_t i = 0; i < n; i++)
  {
    cin>>t[i];
    if(i!=0)
    {
      d=d-t[i-1]-10;
      count=count+2;
    }
  }
  d=d-t[n-1];
  if(d<0)
  {
    cout<<-1;
  }
  else{
    while(d>=5)
    {
      count++;
      d=d-5;
    }
    cout<<count;
  }
  
  return 0;
}