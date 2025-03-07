#include <stdio.h>
int sum(int a,int b);
int main(){
    int a;
    int b;
   printf("enter number:");
   scanf("%d\n, &a");
   printf("enter  second number:");
   scanf("%d\n, &b");
   int s= sum(a,b);
   printf("%d\n",s);
return 0;
}
int sum(int a,int b){
    return a+b;
}
