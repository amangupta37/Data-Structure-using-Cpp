#include <iostream>
#include<cstring>
using namespace std;

int main()
{
  char str[100];

  int i=0,count=0,k,length,j;


  cin.get(str,100);

  length = strlen(str);

//  cout<<length;

cout<<"\nDuplicate Elements are\n";

  for(i=0;i<length-1;i++)
  {
       for(j=i+1;j<length;j++)
       {
          if(str[i]==str[j] && str[j]!=-1)
          {
              cout<<str[j]<<"\n";
              count++;
              str[j]=-1;
          }
       }
  }

     cout<<"\nTotal Duplicate Elements are "<<count;





    return 0;
}
