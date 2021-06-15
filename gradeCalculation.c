#include <stdio.h>
int main(){
    
    int marks;

    printf("Enter your marks: ");
    scanf("%d",&marks);
    
    if(marks<=100 && marks>=85){
        printf("Your grade is Grade A. Thank-you!\n");
    }
    else if(marks<85 && marks>=70){
        printf("Your grade is Grade B. Thank-you!\n");
    }
    else if(marks<70 && marks>=55){
        printf("Your grade is Grade C. Thank-you!\n");
    }
    else if(marks<55 && marks>=40){
        printf("Your grade is Grade D. Thank-you!\n");    
    }
    else{
        printf("Your grade is Grade F. Thank-you!\n");
    }

    return 0;
}
