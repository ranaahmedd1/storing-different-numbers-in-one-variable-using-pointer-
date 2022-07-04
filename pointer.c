#include <stdio.h>
void edit(int*);
void main(){
    int x;

printf("enter value of x: \n");
scanf("%d",&x);
printf(" value of x before editing: %d\n",x);
edit(&x);
printf(" value of x after editing: %d\n",x);
char *pointer=&x;
*pointer++;
*pointer=5;
*pointer++;
*pointer=20;
*pointer++;
*pointer=80;
printf("%d %d %d",*(pointer-2),*(pointer-1),*(pointer));

}
void edit(int *y){
*y=*y+1;

}
