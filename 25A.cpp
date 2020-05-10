#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cin>>n;
  int d,count1=0,count2=0,index1=0,index2=0;
  for (size_t i = 1; i <= n; i++)
  {
    cin>>d;
    if(d%2==1)
    {
      count1++;
      index1=i;
    }
    else if(d%2==0)
    {
      count2++;
      index2=i;
    }
  }
  if(count1==1)
  {
    cout<<index1;
  }
  else{
    cout<<index2;
  }
  
  return 0;
}