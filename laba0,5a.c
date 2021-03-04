#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void transformation(char *str1, char *str2,int *x, int len){
  char current;
  int flag=0;
  for(int i=0; i<len; ++i){
    current=str1[i];
    if(current!=' '){
      flag=0;
      if(current=='0'){
        str2[*x]='0';
        str2[*x+1]='0';
        str2[*x+2]='0';
        str2[*x+3]='0';
      }
      if(current=='1'){
        str2[*x]='0';
        str2[*x+1]='0';
        str2[*x+2]='0';
        str2[*x+3]='1';
      }
      if(current=='2'){
        str2[*x]='0';
        str2[*x+1]='0';
        str2[*x+2]='1';
        str2[*x+3]='0';
      }
      if(current=='3'){
        str2[*x]='0';
        str2[*x+1]='0';
        str2[*x+2]='1';
        str2[*x+3]='1';
      }
      if(current=='4'){
        str2[*x]='0';
        str2[*x+1]='1';
        str2[*x+2]='0';
        str2[*x+3]='0';
      }
      if(current=='5'){
        str2[*x]='0';
        str2[*x+1]='1';
        str2[*x+2]='0';
        str2[*x+3]='1';
      }
      if(current=='6'){
        str2[*x]='0';
        str2[*x+1]='1';
        str2[*x+2]='1';
        str2[*x+3]='0';
      }
      if(current=='7'){
        str2[*x]='0';
        str2[*x+1]='1';
        str2[*x+2]='1';
        str2[*x+3]='1';
      }
      if(current=='8'){
        str2[*x]='1';
        str2[*x+1]='0';
        str2[*x+2]='0';
        str2[*x+3]='0';
      }
      if(current=='9'){
        str2[*x]='1';
        str2[*x+1]='0';
        str2[*x+2]='0';
        str2[*x+3]='1';
      }
      if(current=='a'){
        str2[*x]='1';
        str2[*x+1]='0';
        str2[*x+2]='1';
        str2[*x+3]='0';
      }
      if(current=='b'){
        str2[*x]='1';
        str2[*x+1]='0';
        str2[*x+2]='1';
        str2[*x+3]='1';
      }
      if(current=='c'){
        str2[*x]='1';
        str2[*x+1]='1';
        str2[*x+2]='0';
        str2[*x+3]='0';
      }
      if(current=='d'){
        str2[*x]='1';
        str2[*x+1]='1';
        str2[*x+2]='0';
        str2[*x+3]='1';
      }
      if(current=='e'){
        str2[*x]='1';
        str2[*x+1]='1';
        str2[*x+2]='1';
        str2[*x+3]='0';
      }
      if(current=='f'){
        str2[*x]='1';
        str2[*x+1]='1';
        str2[*x+2]='1';
        str2[*x+3]='1';
      }
      *x=*x+4;
    }
    else{
      if(flag==0){
        str2[*x] =' ';
        flag=1;
        *x=*x+1;
      }
    }
  }
}
void output(const char *msg,char *str, int* x){
  int flag=0,t=0;
  printf("%s:\n", msg);
  for(int j=0;j<=*x;++j){
    if(str[j]=='1') flag=1;
    if(flag==1) printf("%c", str[j]);
    if(str[j]==' ') flag=0;
  }
  printf("\n");
}
int main(){
  char *initial_str, *transformed_str;
  int len, num=2,x=0;
  printf("String #1: ");
  while(scanf("%m[^\n]", &initial_str)!=EOF){
    len=strlen(initial_str);
    transformed_str=calloc(len,sizeof(char));
    transformation(initial_str,transformed_str,&x,len);
    output("Transformed string", transformed_str, &x);
    printf("\n------------------------------------------------\n");
    free(initial_str);
    free(transformed_str);
    printf("String #%d: ", num++);
    scanf("%*[\n]");
  }
  free(initial_str);
  printf("\n-------------------Input ended-------------------\n");
  return 0;
}
