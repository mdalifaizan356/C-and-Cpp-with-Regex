// //Question 1
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int age;
//     printf("Enter Your Age");
//     scanf("%d",&age);
//     if(age>=18){
//         printf("You are eligible for vote");
//     }
//     else{
//         printf("You are not eligible for vote");
//     }
//     return 0;
// }


// //Question 2
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int num1;
//     printf("Enter a number ");
//     scanf("%d",&num1);
//     if(num1>=10){
//         printf("Numer is greater than 10");
//     }
//     else{
//         printf("Numer is less than 10");
//     }
//     return 0;
// }


// //Question 3
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int num1,num2;
//     printf("Enter two numbers ");
//     scanf("%d%d",&num1,&num2);
//     if(num1>num2){
//         printf("Numer is 1st greater than number 2nd");
//     }
//     else{
//         printf("NUmber 2nd is greater than number 1st");
//     }
//     return 0;
// }


// //Question 4
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int num1,num2,num3;
//     printf("Enter three numbers ");
//     scanf("%d%d%d",&num1,&num2,&num3);
//     if(num1>num2 && num1>num3){
//         printf("Number 1st Big to All");
//     }
//     else if(num2>num1 && num2>num3){
//         printf("Number 2nd Big to All");
//     }
//     if(num3>num1 && num3>num2){
//         printf("Number 3rd Big to All");
//     }
//     else{
//         printf("All numbers are equal");
//     }
//     return 0;
// }


// //Question 5
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int num1,num2,num3,num4,num5;
//     printf("Enter five numbers\n ");
//     scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
//     if(num1>num2 && num1>num3 && num1>num4 && num2>num5){
//         printf("Number 1st Big to All");
//     }
//     else if(num2>num1 && num2>num3 && num2>num4 && num2>num5){
//         printf("Number 2nd Big to All");
//     }
//     else if(num3>num1 && num3>num2 && num3>num4 && num3>num5){
//         printf("Number 3rd Big to All");
//     }
//     else if(num4>num1 && num4>num2 && num4>num3 && num4>num5){
//         printf("Number 4th Big to All");
//     }
//     else if(num5>num1 && num5>num2 && num5>num3 && num5>num4){
//         printf("Number 5th Big to All");
//     }
//     else{
//         printf("All numbers are equal");
//     }
//     return 0;
// }


// //Question 6
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int num;
//     printf("Enter a number ");
//     scanf("%d",&num);
//     if(num>0){
//         printf("Number Is Positive");
//     }
//     else if(num<0){
//         printf("Number Is Negative");
//     }
//     else{
//         printf("Number is Zero");
//     }
//     return 0;
// }


// //Question 7
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     char input;
//     printf("Enter Any English Character");
//     scanf("%c",&input);
//     if(input=='A' || input=='E' || input=='I' || input=='O' || input=='U'||
//         input=='a' || input=='e' || input=='i' || input=='o' || input=='u'){
//         printf("It Is Vowel");
//     }
//     else{
//         printf("It is Constant");
//     }
//     return 0;
// }


// //Question 8
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int num;
//     printf("Enter number");
//     scanf("%d",&num);
//     if (num%5==0 && num%11==0)
//     {
//         printf("Number is divisible of both number 11 nad 5");
//     }
//     else{
//         printf("Number is not divisible of both number 11 nad 5");
//     }
//     return 0;
// }


// //Question 9
// #include <stdio.h>
// #include<conio.h>
// int main()
// {
//     char input;
//     printf("Enter any character\n");
//     scanf("%c", &input);
//     if(input >= 'A' && input <= 'Z')
//     {
//         printf("'%c' is uppercase alphabet.", input);
//     }
//     else if(input >= 'a' && input <= 'z')
//     {
//         printf("'%c' is lowercase alphabet.", input);
//     }
//     else
//     {
//         printf("'%c' is not an alphabet.", input);
//     }
//     return 0;
// }


// //Question 10 Doubtful
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int num;
//     printf("Enter number");
//     scanf("%d",&num);
//     if (num%7==0 && num%3==0)
//     {
//         printf("Number is divisible of both number 7 nad 3");
//     }
//     else{
//         printf("Number is not divisible of both number 7 nad 3");
//     }
//     return 0;
// }


// //Question 11.1
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int a,b,c=0;
//     printf("Enter 2 numbers");
//     scanf("%d%d",&a,&b);
//     printf("You are enter  Value of Number1: %d and Number2: %d\n",a,b);
//     c=a;
//     a=b;
//     b=c;
//     printf("After swapping value is Number1= %d Number2= %d",a,b);
//     return 0;
// }


// //Question 11.2
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int a,b,c=0;
//     printf("Enter 2 numbers");
//     scanf("%d%d",&a,&b);
//     printf("You are enter  Value of Number1: %d and Number2: %d\n",a,b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("After swapping value is Number1= %d Number2= %d",a,b);
//     return 0;
// }


// //Question 11.3
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int a,b,c=0;
//     printf("Enter 2 numbers");
//     scanf("%d%d",&a,&b);
//     printf("You are enter  Value of Number1: %d and Number2: %d\n",a,b);
//     a=a*b;
//     b=a/b;
//     a=a/b;
//     printf("After swapping value is Number1= %d Number2= %d",a,b);
//     return 0;
// }


// //Question 12 
// #include<stdio.h>
// int main()
// {
//     float f,c;
//     char ch;
//     printf(" Press c to convert temperature from Fahrenheit to Celsius\n.");
//     printf(" Press f to convert temperature from Celsius to Fahrenheit\n.");
//     printf(" Enter your choice (c, f): ");
//     scanf("%c",&ch);
//     if(ch =='c' ||ch =='C')
//     {
//         printf("Enter temperature in Fahrenheit: ");
//         scanf("%f",&f);
//         c= (f - 32)*5/9;
//         printf("%f",c);
//     }
//     else if((ch =='f') ||(ch =='F'))
//     {
//         printf("Enter temperature in Celsius: ");
//         scanf("%f",&c);
//         f= (c*1.8)+32;
//         printf("%f",f);
//     }
//     else
//     {
//         printf("Enter valid Text");
//     }
//     return 0;
// }


// //Question 14 
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     char input;
//     printf("Enter Character\n");
//     scanf("%c",&input);
//     if((input >= 'a' && input <= 'z')||(input >= 'A' && input <= 'Z')){
//         printf("It is Alpha");
//     }
//     else{
//         printf("It is digit");
//     }
//     return 0;
// }


// //Question 15 
// #include <stdio.h>
// #include<conio.h>
// int main() {
//     int Hindi, English, Math, Science, Computer,total, obtaine;
//     float percentage;
//     char grade;
//     printf("Enter Subject Marks");
//     scanf("%d%d%d%d%d",&Hindi, &English, &Math, &Science, &Computer);
//     total=500;
//     obtaine=Hindi+English+Math+Science+Computer;
//     if(obtaine<=500){
//         percentage =((float)obtaine / total) * 100;
//         if (percentage < 25){
//             grade = 'F';
//             }
//             else if (percentage >= 25 && percentage < 45){
//                 grade = 'E';
//             }
//             else if (percentage >= 45 && percentage < 50){
//                 grade = 'D';
//             }
//             else if (percentage >= 50 && percentage < 60){
//                 grade = 'C';
//             }
//             else if (percentage >= 60 && percentage < 80){
//                 grade = 'B';
//             }
//             else{
//                 grade = 'A';
//             }
//     }
//     else{
//         printf("Enter Correct Obtaine Marks");
//     }
//     printf("Percentage: %.2f%%\n", percentage);
//     printf("Grade: %c\n", grade);
//     return 0;
// }


// //question 16
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int Hindi, English, Math, Science, Computer;
//     int total,avrage,grade;
//     printf("Enter Subject Marks");
//     scanf("%d%d%d%d%d",&Hindi, &English, &Math, &Science, &Computer);
//     total=Hindi+English+Math+Science+Computer;
//     avrage=total/5;
//     if (avrage<=40)
//     {
//         grade = 'F';
//         }
//         else if (avrage >= 25 && avrage < 45){
//             grade = 'E';
//             }
//         else if (avrage >= 45 && avrage < 50){
//                 grade = 'D';
//             }
//         else if (avrage >= 50 && avrage < 60){
//                 grade = 'C';
//             }
//         else if (avrage >= 60 && avrage < 80){
//                 grade = 'B';
//             }
//         else if(avrage>80){
//                 grade = 'A';
//             }
//     else{
//         printf("You Are Fail \n");
//         printf("Avrage of marks is %d",avrage);
//     }
//     printf("%c",grade);
//     return 0;
// }

