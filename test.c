#include<stdio.h>
int main(){
    int x,y,z;

    printf("enter a first number: ");
    scanf("%d",&x);

    printf("enter a second number: ");
    scanf("%d",&y);

    printf("enter third number: ");
    scanf("%d",&z);

    if(x>y && x>z){
        printf("first is greatest ");
    }
    if(y>x && y>z){

        printf("second is greatest");
    }
    if(z>x && z>y){
        printf("third is greatest");
    }
    return 0;
}