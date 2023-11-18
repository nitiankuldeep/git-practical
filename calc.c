#include<stdio.h>
int add(int a , int b){
    return a+b;
}
int multi(int a , int b){
    return a*b;
}
int divide(int a , int b){
    return a/b;
}
int main(){
    int i,j;
    printf("enter the first number");
    scanf("%d",&i);
     printf("enter the second number");
    scanf("%d",&j);
    printf("%d",add(i,j));
    printf("%d",multi(i,j));
    printf("%d",divide(i,j));
    return 0;
}
