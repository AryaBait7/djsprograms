#include<stdio.h>
#include<conio.h>
void increment();
int main(){
    for(int i=1;i<=3;i++){
        increment();
    }
}
void increment(){
    auto int a=1;
    static int b=10;
    a++;
    b++;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
}