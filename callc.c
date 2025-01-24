#include <stdio.h>
#include <math.h>

double division(double , double );
double modulus(int , int ); 
void print_menu ();

int main(){
 int choice;
 double first, second , result ;
 while(1) {    
 print_menu();
 scanf("%d", &choice);
 if (choice == 7){
    break;
 }
if (choice < 1 || choice > 7)
{
fprintf(stderr, "Error invalid number \n");
continue;
}

  printf("Enter your First number : \n");
  scanf("%lf" , &first);
  printf("Enter your Second number : \n");
  scanf("%lf", &second);

switch(choice) {
  case 1:
   result = first + second ;
   break ;
  case 2:
   result = first - second ;
   break;
  case 3:
   result = first * second ;
   break;
  case 4:
   result = division(first, second);
   break;
  case 5:
   result = modulus(first,second);
   break;
  case 6:
   result = pow(first, second);
   break;
  default:
    printf("Invalid choice \n");
   break;
  }
if(!isnan(result) ){
printf("Result : %.2lf \n", result);
  } ; 
 }
    return 0;

}


double division(double a , double b){ 
    if (b==0){
fprintf(stderr, "Error: Division by zero is not allowed Invalid number.\n");
    return NAN;
    }
else {
    return a/b;
    }
}

double modulus(int a , int b){
    if (b==0){
fprintf(stderr, "Error: Modulus by zero is not allowed Invalid number.\n");
    return NAN; //NAN 
    }
else {
    return fmod(a,b);
    }
}

void print_menu (){
printf(" \n\n------------------------------------\n ");    
printf("\t  Welcome to simple calculator  \n");
printf("Choose your operation \n");
printf("1. Addition \n");
printf("2. Subtraction \n");
printf("3. Multiplication \n");
printf("4. Division \n");
printf("5. Modulus \n");
printf("6. Power \n");
printf("7. Exit \n");
printf("Enter your choice: \n");
}  
