#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int s,n;
  cin>>s>>n;
  int d[n],b[n];
  int flag=1;
  for (size_t i = 0; i < n; i++)
  {
    cin>>d[i];
    cin>>b[i];
  }
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j =1; j < n-i; j++)
    {
      if(d[j-1]>d[j])
      {
        int temp = d[j];
        d[j]=d[j-1];
        d[j-1]=temp;
        temp = b[j];
        b[j]=b[j-1];
        b[j-1]=temp;
      }
    }
    
  }
  // for (size_t i = 0; i < n; i++)
  // {
  //   cout<<d[i]<<endl;
  //   cout<<b[i]<<endl;
  // }
  for (size_t i = 0; i < n; i++)
  {
    if(s>d[i])
    {
      s+=b[i];
    }
    else{
      flag=0;
    }
  }
  if(flag==1){
    cout<<"YES";
  }
  else cout<<"NO";
  return 0;
}