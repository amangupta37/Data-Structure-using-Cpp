#include <iostream>
#include<cstring>
using namespace std;

int main()
{
  char str[100];

  int substring,n;


  cin.get(str,100);

  n = strlen(str);

  substring = n*(n+1)/2;

  cout<<substring;

    return 0;
}
