#include<stdio.h>
int main(){
    int a=10;
    int *ptr = &a;
    //cach 1: dung bien truc tiep
    printf("Cach 1: dung bien truc tiep\n");
    printf("Gia tri cua a: %d\n", a);
    printf("Dia chi cua a: %p\n",&a);
    //cach2: dung con tro
    printf("\nCach 2: dung con tro\n");
    printf("Gia tri cua a qua con tro: %d\n", *ptr);
    printf("Dia chi cua a qua con tro: %p\n",ptr);
    return 0;
}

