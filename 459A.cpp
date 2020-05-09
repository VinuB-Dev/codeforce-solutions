#include <iostream>
using namespace std;
#include <stdlib.h>
int main(int argc, char const *argv[])
{
  int x1,y1,x2,y2,x3=0,y3=0,x4=0,y4=0,len;
  cin>>x1>>y1>>x2>>y2;
  if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2))
    {cout << -1 << endl;
    return 0;
    }
  else if(x1==x2){
    len = y2-y1;
    x3=x1+len;
    y3=y1;
    x4 = x1+len;
    y4 = y1+len;
  }
  else if(y1==y2){
    len = x2-x1;
    y3=y1+len;
    x3=x1;
    x4 = x1+len;
    y4 = y1+len;
  }
  else
    {
      x3=x1;
      x4=x2;
      y3=y2;
      y4=y1;
    }
  cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
  return 0;
}