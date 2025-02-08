#include <stdio.h>
#include <stdlib.h>
#include "../include/arithmetic.h"
#include "../include/trig.h"
#include "../include/math_utils.h"

int input;
double num1, num2;

void mainMenu();
void aritmeticsMenu();
void trigonometryMenu();
void advanceMathMenu();

void mainMenu(){
  while(1){
    system("cls");
    printf("===============================\n");
    printf("  WELCOME TO SCIENTIFIC CALC   \n");
    printf("===============================\n");
    printf("[1] Aritmetics     \n");
    printf("[2] Trigonometry   \n");
    printf("[3] Advance Math   \n");
    printf("[0] Exit           \n");
    printf("===============================\n");
    printf("Enter Choice: ");
    scanf("%d", &input);
    
    if(input == 0){
      system("cls");
      printf("===================================\n");
      printf("Thank You For Using Scientific Calc\n");
      printf("===================================\n");
      printf("        Press Enter to Exit        \n");
      printf("===================================\n");
      while(getchar() != '\n');
      getchar();
      break;
      }

    switch(input){
      case 1:
      aritmeticsMenu();
      break;
      case 2:
      trigonometryMenu();
      break;
      case 3:
      advanceMathMenu();
      break;
      default:
      system("cls");
      printf("===============================\n");
      printf("         Invalid Choice        \n");
      printf("===============================\n");
      printf("Press Enter To Continue...");
      while(getchar() != '\n');
      getchar();
      break;
    }
    }
}

void aritmeticsMenu(){
  while(1){
    system("cls");
    printf("===============================\n");
    printf("          ARITHMETICS          \n");
    printf("===============================\n");
    printf("[1] Add            \n");
    printf("[2] Subtract       \n");
    printf("[3] Multiply       \n");
    printf("[4] Divide         \n");
    printf("[0] Main Menu      \n");
    printf("===============================\n");
    printf("Enter Choice: ");
    scanf("%d", &input); getchar();
    
    if(input == 0){
      mainMenu();
      }

    switch(input){
      case 1:
      system("cls");
      printf("===============================\n");
      printf("Enter Two Numbers: \n");
      printf("===============================\n");
      scanf("%lf %lf", &num1, &num2);
      system("cls");
      printf("===============================\n");
      printf("%.2lf + %.2lf = %.2lf\n", num1, num2, add(num1, num2));
      printf("===============================\n");
      printf("\n");
      printf("\nPress Enter To Continue...");
      while(getchar() != '\n');
      getchar();
      break;
      case 2:
      system("cls");
      printf("===============================\n");
      printf("Enter Two Numbers: \n");
      printf("===============================\n");
      scanf("%.2lf %.2lf", &num1, &num2);
      system("cls");
      printf("===============================\n");
      printf("%.2lf - %.2lf = %.2lf\n", num1, num2, subtract(num1, num2));
      printf("===============================\n");
      printf("\n");
      printf("\nPress Enter To Continue...");
      while(getchar() != '\n');
      getchar();
      break;
      case 3:
      system("cls");
      printf("===============================\n");
      printf("Enter Two Numbers: \n");
      printf("===============================\n");
      scanf("%lf %lf", &num1, &num2);
      system("cls");
      printf("===============================\n");
      printf("%.2lf * %.2lf = %.2lf\n", num1, num2, multiply(num1, num2));
      printf("===============================\n");
      printf("\n");
      printf("\nPress Enter To Continue...");
      while(getchar() != '\n');
      getchar();
      break;
      case 4:
      system("cls");
      printf("===============================\n");
      printf("Enter Two Numbers: \n");
      printf("===============================\n");
      scanf("%lf %lf", &num1, &num2);
      system("cls");
      printf("===============================\n");
      printf("%.2lf / %.2lf = %.2lf\n", num1, num2, divide(num1, num2));
      printf("===============================\n");
      printf("\n");
      printf("\nPress Enter To Continue...");
      while(getchar() != '\n');
      getchar();
      break;
      default:
      system("cls");
      printf("===============================\n");
      printf("         Invalid Choice        \n");
      printf("===============================\n");
      printf("Press Enter To Continue...");
      while(getchar() != '\n');
      getchar();
    }
  }
}

void trigonometryMenu(){
  while(1){
    system("cls");
    printf("===============================\n");
    printf("         TRIGONOMETRY          \n");
    printf("===============================\n");
    printf("[1] Sin            \n");
    printf("[2] Cos            \n");
    printf("[3] Tan            \n");
    printf("[0] Main Menu      \n");
    printf("===============================\n");
    printf("Enter Choice: ");
    scanf("%d", &input); getchar();
    
    if(input == 0){
      mainMenu();
      }

    switch(input){
      case 1:
      system("cls");
      printf("===============================\n");
      printf("Enter angle in radians: \n");
      printf("===============================\n");
      scanf("%lf", &num1);
      system("cls");
      printf("===============================\n");
      printf("sin %.2lf = %.2lf\n", num1, sinus(num1));
      printf("===============================\n");
      printf("\n");
      printf("\nPress Enter To Continue...");
      while(getchar() != '\n');
      getchar();
      break;
      case 2:
      system("cls");
      printf("===============================\n");
      printf("Enter angle in radians: \n");
      printf("===============================\n");
      scanf("%lf", &num1);
      system("cls");
      printf("===============================\n");
      printf("cos %.2lf = %.2lf\n", num1, cosinus(num1));
      printf("===============================\n");
      printf("\n");
      printf("\nPress Enter To Continue...");
      while(getchar() != '\n');
      getchar();
      break;
      case 3:
      system("cls");
      printf("===============================\n");
      printf("Enter angle in radians: \n");
      printf("===============================\n");
      scanf("%lf", &num1);
      system("cls");
      printf("===============================\n");
      printf("tan %.2lf = %.2lf\n", num1, tangent(num1));
      printf("===============================\n");
      printf("\n");
      printf("\nPress Enter To Continue...");
      while(getchar() != '\n');
      getchar();
      break;
      default:
      system("cls");
      printf("===============================\n");
      printf("         Invalid Choice        \n");
      printf("===============================\n");
      printf("Press Enter To Continue...");
      while(getchar() != '\n');
      getchar();
    }
  }
}

void advanceMathMenu(){
  while(1){
    system("cls");
    printf("===============================\n");
    printf("          ADVANCE MATH         \n");
    printf("===============================\n");
    printf("[1] Exponent         \n");
    printf("[2] Square Root      \n");
    printf("[3] Factorial        \n");
    printf("[4] Base 10 Log      \n");
    printf("[5] Base e Log       \n");
    printf("[0] Main Menu        \n");
    printf("===============================\n");
    printf("Enter Choice: ");
    scanf("%d", &input); getchar();
    
    if(input == 0){
      mainMenu();
      }

    switch(input){
      case 1:
      system("cls");
      printf("===============================\n");
      printf("Enter base and exponent: \n");
      printf("===============================\n");
      scanf("%lf %lf", &num1, &num2);
      system("cls");
      printf("===============================\n");
      printf("Result = %.2lf\n", power(num1, num2));
      printf("===============================\n");
      printf("\n");
      printf("\nPress Enter To Continue...");
      while(getchar() != '\n');
      getchar();
      break;
      case 2:
      system("cls");
      printf("===============================\n");
      printf("Enter number: \n");
      printf("===============================\n");
      scanf("%lf", &num1);
      system("cls");
      printf("===============================\n");
      printf("Result = %.2lf\n", square_root(num1));
      printf("===============================\n");
      printf("\n");
      printf("\nPress Enter To Continue...");
      while(getchar() != '\n');
      getchar();
      break;
      case 3:
      system("cls");
      printf("===============================\n");
      printf("Enter number: \n");
      printf("===============================\n");
      scanf("%lf", &num1);
      system("cls");
      printf("===============================\n");
      printf("Result = %.2lf\n", factorial(num1));
      printf("===============================\n");
      printf("\n");
      printf("\nPress Enter To Continue...");
      while(getchar() != '\n');
      getchar();
      break;
      case 4:
      system("cls");
      printf("===============================\n");
      printf("Enter number: \n");
      printf("===============================\n");
      scanf("%lf", &num1);
      system("cls");
      printf("===============================\n");
      printf("Result = %.2lf\n", log_base_10(num1));
      printf("===============================\n");
      printf("\n");
      printf("\nPress Enter To Continue...");
      while(getchar() != '\n');
      getchar();
      break;
      case 5:
      system("cls");
      printf("===============================\n");
      printf("Enter base and exponent: \n");
      printf("===============================\n");
      scanf("%lf %lf", &num1, &num2);
      system("cls");
      printf("===============================\n");
      printf("Result = %.2lf\n", log_base_e(num1));
      printf("===============================\n");
      printf("\n");
      printf("\nPress Enter To Continue...");
      while(getchar() != '\n');
      getchar();
      break;
      default:
      system("cls");
      printf("===============================\n");
      printf("         Invalid Choice        \n");
      printf("===============================\n");
      printf("Press Enter To Continue...");
      while(getchar() != '\n');
      getchar();
    }
  }
}
int main(){

  mainMenu();

  
  return 0;
}