//Count no of vowels

#include<iostream>
using namespace std;

int CountVowels(char str[])
{
 int iCnt = 0;
 while(*str != '\0')
 {
  if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
  {
   iCnt++;
  } 
  str++;
 } 
 return iCnt;
}

int main()
{
 char Arr[20];
 int iRet = 0;
 
 cout<<"Enter string"<<endl;
 cin.getline(Arr,20);      //Accept whole line with spaces
 
 iRet = CountVowels(Arr);
 cout<<"Number of vowels in the string are : "<<iRet<<endl;
 
 return 0;
}