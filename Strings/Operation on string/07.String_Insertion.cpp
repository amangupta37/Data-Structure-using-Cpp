#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  char str1[100], str2[50],str3[200];
  //int str1length=0,str2length=0,total_length=0;
  int i=0,pos,j=0,k=0;


  cout<<"\nEnter String 1\n";
  cin.get(str1,100);
  cin.get();
  cout<<"\nEnter String 2\n";
  cin.get(str2,50);

  cin>>pos;

  while(str1[i] != '\0')
  {
      if(i==pos)
      {
          while(str2[j]!='\0')
          {
            str3[k]=str2[j];
            k++;
            j++;
          }
        str3[k]=str1[i];
        k++;
      }
    else
      {
          str3[k]=str1[i];
          k++;
      }
    i++;
  }
  str3[k] = '\0';

  cout<<str3;


return 0;
}
