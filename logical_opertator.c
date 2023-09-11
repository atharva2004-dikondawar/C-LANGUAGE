#include<stdio.h>
//Logical Operators:- &&->AND ,||->OR,!->NOT are three logical operators in C 
// ! -> returns true if given false and false if given true .
//   !(3==3) -> evaluates to false.
//   !(3>30) -> evaluates to true.
int main(){
    int age;
    int vippass = 0;
    // vippass = 1;

    printf("Enter your age\n");
    scanf("%d", &age);
    if((age<=70 && age>=18) || vippass==1){
        printf("You are above 18 and below 70\n");
    } 
    else{
        printf("You are not in the range of 18 to 70\n");
    }
    return 0;
}