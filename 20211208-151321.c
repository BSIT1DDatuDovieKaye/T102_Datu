#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){
    char input[100],num;
      int len;
     printf("Input any number that is positive: ");
     scanf("%s", input);
      len = strlen(input);
       printf("%s converted to words is: ", input);
      for(int x = 0;x<len;x++){
      num = input[x];
     if(num=='0'){
     printf("Zero ");
   }
      else if(num == '1'){
        printf("One ");
            }
          else if(num == '2'){
        printf("Two ");
             }
      else if(num == '3'){
       printf("Three ");
          }
    else if(num == '4'){
        printf("Four ");
  }
     else if(num == '5'){
        printf("five ");
       }
         else if(num == '6'){
        printf("six ");
        }
     else if(num == '7'){
        printf("seven ");
      }
     else if(num == '8'){
        printf("eight ");
       }
     else if(num == '9'){
        printf("nine ");
       }
    else{
    printf("Invalid input");
    }
   }
    getch();
    return 0;
    }