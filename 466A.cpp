#include <iostream>
using namespace std;
#include <algorithm>
int main(int argc, char const *argv[])
{
  int n,m,a,b;
  int cost1 = 0,cost2,cost3;
  cin>>n>>m>>a>>b;
  if(n%m==0)
  cost1 = (n/m)*b;
  else 
  cost1 = (n/m)*b+(n-(m*(n/m)))*a;
  cost2 = n*a;
  cost3 = ((n/m)+1)*b;
  //cost = (n/m+1)*b;
  int cost = min(cost1,cost2);
  cost = min(cost,cost3);
  cout<<cost;
  return 0;
}