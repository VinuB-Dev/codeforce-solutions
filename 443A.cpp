#include <iostream>
using namespace std;
#include<set>
#include <string>
int main(int argc, char const *argv[])
{set<char> myset;
  string s;
  getline(cin,s);
  for (size_t i = 1; i < s.length()-1; i=i+3)
  {if(i==1){
    myset.insert(s[i]);
  }
    else{
      myset.insert(s[i]);
    }
  }
  
  cout<<myset.size();
  return 0;
}