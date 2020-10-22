#include <iostream>
using namespace std;

int main()
{
  char str[100];

  int i=0,space=1,no_of_words=0;


  cin.get(str,100);

  while(str[i]!='\0')
  {
    if(str[i]==' ' && str[i-1]!=' ')
    {
      space++;
    }
    i++;
  }
  no_of_words = space;
  cout<<no_of_words;





    return 0;
}
