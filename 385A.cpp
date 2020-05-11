#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n,c,one,two,profit=0;
  cin>>n>>c;
    cin>>one;
    for(int i=1;i<n;i++)
    {
      cin>>two;
      if(one-two>profit)
      {
        profit=one-two;
      }
      one=two;
    }
    if(profit>=0)
  {
    profit=profit-c;
  }
  if(profit>0)
  cout<<profit;
  else
  {
    cout<<0;
  }
  
  return 0;
  
  
}