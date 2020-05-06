#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n,m;
  cin>>n>>m;
  int a[n][m];
  int p=0;//player
  while(n>0&&m>0){
    //change player and decrement rows and columns
    if(p==0){
      p=1;
    }
    else{
      p=0;
    }
    n--;
    m--;
  }
  //check which player is playing and 
  if(p==0){
    cout<<"Malvika";
  }
  else{
    cout<<"Akshat";
  }
  return 0;
}