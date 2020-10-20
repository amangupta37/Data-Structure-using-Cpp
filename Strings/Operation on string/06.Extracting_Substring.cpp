#include <iostream>
#include <cstring>

using namespace std;
int main()
{

  char str[100],temp[100];
  int firstpos,lastpos,i,j,str_length;

  cin.get(str,100);



  str_length = strlen(str)-1;

  cout<<"\nMax length of string is = "<<str_length;

  cout<<"\nFirst index nummber\n";
  cin>>firstpos;

  cout<<"\nSecond index number\n";
  cin>>lastpos;






  if( lastpos >str_length )
  {

      cout<<"\nLast postion is invalid";

  }
  else
  {

      i=firstpos;
      j=0;

      while(j<=lastpos && i<=lastpos)
      {
          temp[j] = str[i];
          j++;
          i++;

       }
       cout<<temp;

   }

return 0;
}
