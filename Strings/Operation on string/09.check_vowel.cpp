#include <iostream>
using namespace std;

int main()
{
  char str[100];

  int i=0,vowel=0,consonent=0;

  cout << "Enter string s1: ";
  cin.get(str,100);

  while(str[i]!='\0')
  {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
       str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    {
      vowel++;
    }
    else if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
    {
      consonent++;
    }
    i++;
  }

 cout<<"VOWEL ARE "<<vowel;

 cout<<"\nConsonent are "<<consonent;




    return 0;
}
