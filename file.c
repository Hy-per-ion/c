#include<stdio.h>
#include<stdlib.h>
#include<string.h>
FILE *open(char s[],char m[])
{
  FILE *fp=fopen(s,m);
  if(fp==NULL)
  {
    printf("Error");
    exit(1);
  }
  else 
    return fp;
}
void write(FILE *fp,int n)
{
  fprintf(fp,"%d",n);
}
int main()
{
  int n;
  FILE *fp;
  fp=open("file.txt","w");
  printf("Enter a number: ");
  scanf("%d",&n);
  write(fp,n);
  fclose(fp);
  return 0;
}