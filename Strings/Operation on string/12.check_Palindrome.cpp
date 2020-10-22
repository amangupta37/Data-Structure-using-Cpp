#include <iostream>
#include<cstring>
using namespace std;

int main()
{
  char str[100];

  int i=0,count=0,length=0,j=0;


  cin.get(str,100);

  length = strlen(str);


  i=0;
  j=length-1;

  while(i<=j)
  {
        if(str[i] == str[j])
        {
            count=1;
        }
        else
        {
            count =0;
            break;
        }
    i++;
    j--;
  }


  if(count==1)
  {
    cout<<"\npalindrome";
  }
  else
  {
    cout<<"\nNot a palindrome";
  }


    return 0;
}
