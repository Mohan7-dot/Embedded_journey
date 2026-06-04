#include<stdio.h>
int main(){
    
    printf("operation switch code\nadd       =  +\nsub       =  -\nmultiply  =  *\ndivide    =  /");
    int a=0,b=0;
    while(1){
        
        printf("\nEnter the value a to perform operation : ");
        scanf("\n%d",&a);
        
        printf("\nEnter the value b to perform operation : ");
        scanf("\n%d",&b);
        char c;
        printf("\nEnter the operation code : ");
        scanf(" %c",&c);
        float x=a,y=b ;
        if(c=='+'){
        
            printf("Result----> %d\n",a+b);

        }else if(c=='-'){
            
            printf("Result----> %d\n",a-b);
        }else if(c=='*'){
            
            printf("Result----> %d\n",a*b);

        }else if(c=='/'){
            if(y==0){
                printf("Zero in denomenator gives infinity !!\n");
            }else{
               
                printf("Result---->%.2f\n",x/y);
            }
        }else if(c=='='){
            printf("Exiting the program !!\n");
            break;
        }else{
            printf("invalid operation code !!\n");
            
        }        
        
    }
    return 0;
}