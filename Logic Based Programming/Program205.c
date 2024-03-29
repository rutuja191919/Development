//Copy the data from one file append to another file

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

#define FILESIZE 1024

void FileConcat(char Source[], char Destination[])
{
  int Fdsrc = 0, Fddest = 0, iRet = 0;
  char Buffer[FILESIZE];
  
  Fdsrc = open(Source, O_RDONLY);
  
  if(Fdsrc == -1)
  {
   printf("Unable to open source file\n");
   return;
  } 
  
  Fddest = open(Destination, O_RDWR | O_APPEND);
  
  if(Fddest == -1)
  {
   printf("Unable to open destination file\n");
   return;
  }
  
  while((iRet = read(Fdsrc,Buffer,FILESIZE))!=0)
  {
   write(Fddest,Buffer,iRet);
  }
  
  close(Fdsrc);
  close(Fddest);
}

int main()
{
 char Fname1[20];
 char Fname2[20];
 
 printf("Enter first file name to read\n");
 scanf("%s",Fname1);
 
 printf("Enter second file name in which you want to append\n");
 scanf("%s",Fname2);
 
 FileConcat(Fname1, Fname2);
 
 return 0;
}
