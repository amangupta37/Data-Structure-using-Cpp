#include <iostream>
using namespace std;

int main()
{
  char str[100];

  int i=0,count=1;


  cin.get(str,100);

  while(str[i]!='\0')
  {
     if(str[i]>=65&& str[i]<=90 || str[i]>=97 && str[i]<=122 ||
      str[i]>=48 && str[i]<=57 || str[i]==32)
      {
        count=1;
      }
      else
      {
        count=0;
        break;
      }

      i++;
  }

  if(count==1)
  {
    cout<<"\nAbove string is valid";
  }
  else
  {
    cout<<"\nnot valid";
  }




    return 0;
}
