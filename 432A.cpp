#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n,k;
  cin>>n>>k;
  int b;
  int a[n];
  int count=0;
  for (size_t i = 0; i < n; i++)
  {
    cin>>b;
    if(b<=5-k)
    {
      a[count]=b;
      count++;
    }
  }
  cout<<count/3;
  return 0;
}