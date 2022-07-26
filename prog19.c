#include <stdio.h>

void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
   // printf("Call By Value\n");
    //printf("After swapping in function: x=%d ,y= %d\n",x,y);

}
void swap2(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x,y;
    printf("Enter 2 numbers:");
    scanf("%d%d",&x,&y);
    printf("Call By Value\n");
    printf("Values before swap: x = %d, y = %d\n", x,y);
    swap(x,y);
    printf("Values after swap: x = %d, y = %d", x,y);

    printf("\nCall By Reference\n");
     printf("Values before swap: x = %d, y = %d\n", x,y);
    swap2(&x,&y);
    printf("Values after swap: x = %d, y = %d", x,y);
}