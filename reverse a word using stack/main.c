#include <stdio.h>
#include <string.h>
#define max 150
int top,stack[max];
  void push(char m){

  if(top == max-1){
    printf("stack overflow");
 }  else
    {
       stack[top++]=m;
    }
  }
  void print_reverse(){
      printf("%c",stack[--top]);
}
  main()
{
   printf("this is an example of reversing word \n \n");
   char word[max];
    printf("please type a word:");
    scanf("%[^\n]s",word);
   int len = strlen(word);
   int i;
   for(i=0;i<len;i++)
        push(word[i]);
  printf("\nthe word before reversing is:");
  for(i=0;i<len;i++)
    printf("%c",stack[i]);
  printf("\nthe word after reversing is:");
  for(i=0;i<len;i++)
  print_reverse();

  return 0;
}

