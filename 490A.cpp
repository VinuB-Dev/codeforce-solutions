#include <iostream>
using namespace std;
#include <algorithm>
int main(int argc, char const *argv[])
{
  int n,count1=0,count2=0,count3=0;
  cin>>n;
  int a[n],b[n],c[n],d[n];
  for (size_t i = 0; i < n; i++)
  {
    cin>>a[i];
    if(a[i]==1)
    {
      b[count1]=i+1;
      count1++;
    }
    else if(a[i]==2)
    {
      c[count2]=i+1;
      count2++;
    }
    else {
      d[count3]=i+1;
      count3++;
    }
  }
  int mini;
  mini=min(count1,count2);
  mini=min(mini,count3);
  cout<<mini<<endl;
for (size_t i = 0; i < mini; i++)
{
  cout<<b[i]<<" "<<c[i]<<" "<<d[i]<<endl;
}

  return 0;
}