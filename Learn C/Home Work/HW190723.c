// //question 1
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int year;
//     printf("Enter Year");
//     scanf("%d",&year);
//     if(year%4==0 || year%400==0){
//         printf("It is Leap year");
//     }
//     else{
//         printf("It is not leap year");
//     }
//     return 0;
// }


// //Question 2 
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


// //Question 4
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


// //Question 5 
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


// //question 6
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     float height; 
//     printf("Input the height of the person (in centimetres) :");
//     scanf("%f", &height);
//     if (height < 150.0)
//         printf("The person's height is Low Level\n");
//     else if ((height >= 150.0) && (height < 165.0))
//         printf("The person's height is Mid Level\n");
//     else if ((height >= 165.0) && (height <= 195.0))
//         printf("The person's height is High level\n");
//     else
//         printf("Rare Case\n");
//     return 0;
// }


// //question 7
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int RollNo,Physics, Math, Chemistry, total,obtaine,div;
//     float per;
//     printf("Enter Student's Roll Number");
//     scanf("%d",&RollNo);
//     printf("Enter PCM Marks");
//     scanf("%d%d%d",&Physics,&Math,&Chemistry);
//     obtaine=Physics+Math+Chemistry;
//     per =((float)obtaine / 300) * 100;
//     if (per < 25){
//                 printf("Percentage: %.2f%%\n", per);
//                 printf("divsion: 3rd");;
//             }
//             else if (per >= 25 && per < 50){
//                 printf("Percentage: %.2f%%\n", per);
//                 printf("divsion: 2nd");
//             }
//             else if(per >= 50 && per < 100){
//                 printf("Percentage: %.2f%%\n", per);
//                 printf("divsion: 1st");
//             }
//     else{
//         printf("Enter Correct Obtaine Marks");
//     }  
//     return 0;
// }


// //question 8
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int Hindi, English, Math, Science, Computer;
//     int total,avrage,grade;
//     printf("Enter Subject Marks");
//     scanf("%d%d%d%d%d",&Hindi, &English, &Math, &Science, &Computer);
//     total=Hindi+English+Math+Science+Computer;
//     avrage=total/5;
//     if (avrage<=25)
//     {
//         grade = 'F';
//         printf("You Are Fail\n");
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
//         else{
//                 grade = 'A';
//             }
//     printf("Your Grade is :%c",grade);
//     return 0;
// }


// //question 9
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


// //Question 10
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


// //Question 11
// #include<stdio.h>
// #include<conio.h>
// int main() {
//     int holiday; 
//     float a,b,c,salary;
//     printf("Enter salary : ");
//     scanf("%f",&salary);
//     printf("Enter total holiday : ");
//     scanf("%d",&holiday);    
//     if(holiday<=1)
//     {
//         printf("Full salary");
//     }
//     else if (holiday >= 2 && holiday<=5) 
//     {
//        a= (salary *95/100 );
//         printf("%f",a);
//     } 
//     else if (holiday >= 6 && holiday<=14)
//     {
//        b= (salary *90/100);
//         printf("%f",b);
//     }
//     else if (holiday==15)
//     {
//        c= (salary *50/100 );
//         printf("%f",c);
//     }
//     else if (holiday>=15)
//     {
//         printf("No Salary");
//     }
//     else
//     {
//         printf("invalid");
//     }
// 	return 0;
// }


// // Question12
// #include <stdio.h>
// int main() {
//     int unit; 
//     int a,b,c,d;
//     // Input the total marks and obtained marks
//     printf("Enter unit : ");
//     scanf("%d",&unit);
//     if(unit >= 1 && unit<=10)
//     {
//          a= ((unit*10 *90)/(100) );
//         printf("%d",a);
//     }
//     else if ( unit >= 11 && unit<=20)
//     {
//          b= ((unit*10 *85)/(100) );
//         printf("%d",b);
//     }
//     else if ( unit >= 21 && unit<=40)
//     {
//          c=((unit*10 *70)/(100) );
//         printf("%d",c);
//     }
//     else if (unit>40)
//     {
//       d= ((unit*10 *50)/(100) );
//         printf("%d",d);
//     }
//     else
//     {
//         printf("galat unit");
//     }    
// 	return 0;
// }

