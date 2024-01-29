//With Return and Argument
// // Question 1
// #include<stdio.h>
// #include<conio.h>
// int add(int, int, int, int);
// int main(){
//     int num1, num2, num3, num4, sum;
//     printf("Enter 4 number for addtion:");
//     scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
//     sum=add(num1, num2, num3, num4);
//     return 0;
// }
// int add(int num1, int num2, int num3, int num4){
//     int sum;
//     sum=num1+num2+num3+num4;
//     printf("Total is :%d",sum);
//     return sum;
// }


// Question 2
// #include<stdio.h>
// #include<conio.h>
// int add(int, int);
// int sub(int, int);
// int multi(int, int);
// int div(int, int);
// int mod(int, int);
// int main(){
//     int num1, num2, result;
//     printf("Enter 2 number for Arithmatic Opration:");
//     scanf("%d%d",&num1,&num2);
//     result=add(num1, num2);
//     result=sub(num1, num2);
//     result=multi(num1, num2);
//     result=div(num1, num2);
//     result=mod(num1, num2);
//     return 0;
// }
// int add(int num1, int num2){
//     int add;
//     add=num1+num2;
//     printf("Addtion is :%d\n",add);
//     return add;
// }
// int sub(int num1, int num2){
//     int add;
//     add=num1-num2;
//     printf("Subtraction is :%d\n",add);
//     return add;
// }
// int multi(int num1, int num2){
//     int add;
//     add=num1*num2;
//     printf("Multiplication is :%d\n",add);
//     return add;
// }
// int div(int num1, int num2){
//     int add;
//     add=num1/num2;
//     printf("Division is :%d\n",add);
//     return add;
// }
// int mod(int num1, int num2){
//     int add;
//     add=num1%num2;
//     printf("Modulus is :%d\n",add);
//     return add;
// }


// // Question 3
// #include<stdio.h>
// #include<conio.h>
// int above18(int);
// int main(){
//     int age,result;
//     printf("Enter age:");
//     scanf("%d",&age);
//     result=above18(age);
//     return 0;
// }
// int above18(int age){
//     int age,small, big;
//     if(age>=18){
//         big=1;
//         return big;
//     }
//     else{
//         small=0;
//         return small;   
//     }
// }

