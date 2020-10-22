#include <iostream>
using namespace std;

int main()
{

    char s3[100],s2[100],s1[100];
    int i,j,k;

    cout << "Enter string s1: ";
    cin.get(s1,100);
  cin.get();
    cout << "Enter string s2: ";
    cin.get(s2,100);




    while(s1[i]!='\0')
    {
          if(s1[i]!=s2[j])
          {
              s3[k] = s1[i];
              k++;

          }
          i++;
          j++;
    }
    s3[k] = '\0';

    cout<<s3;




    return 0;
}
