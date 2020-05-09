#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n,m,a;
  cin>>n>>m;
  if(m>n)
  {
    cout<<-1;
    return 0;
  }
  if(n%2==0)
    a=n/2;
  else a=n/2+1;
  while(a%m!=0)
  {
    a++;
  }
  cout<<a;

  return 0;
}