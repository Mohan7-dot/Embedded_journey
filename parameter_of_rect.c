#include<stdio.h>
int main(){
    int l,w,p;
    printf("Enter the length of the reactangle:");
    scanf("%d",&l);
    printf("Enter the width of the rectangle:");
    scanf("%d",&w);
    p=2*(l+w);
    printf("The parameter of the rectangle : %d",p);
    return 0;
}