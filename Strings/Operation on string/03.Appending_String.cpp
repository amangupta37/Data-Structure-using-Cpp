#include <iostream>
using namespace std;
int main()
{
  
char str1[100];
char str2[100];

int i,j,k,str1_length ;
cin.get(str1,100);

cin.get();

cin.get(str2,50);

str1_length = strlen(str1);

i =str1_length;

j=0;

while(str2[j]!='\0')
{
    str1[i] = str2[j];
    i++;
    j++;

}
str1[i] ='\0';
cout<<str1;

/* 
--------------------METHOD 2 -  APPEND BY USING APPEND () METHOD IN C++--------

string strobject; // declaring a  string object
string newstr;
cout<<"Enter a string\n";
getline(cin,strobject);

cout<<"enter a new string\n";
getline(cin,newstr);

cout<<"String after APPEND\n";
strobject.append(newstr); // append method in c++ for joining two string
cout<<strobject;

*/
return 0;
}
