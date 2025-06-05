#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1 , number2 , chosenoption;
    printf("Hello , I am a calculator , please you chose a option:");
    printf("\n 1)Sum \n 2)Subtraction \n 3)Multipication \n 4)Division \n ");
    scanf("%d" , &chosenoption);



    printf("\nPlease you write two numbers\n");
    scanf("%d %d" , &number1,&number2);

    if (chosenoption==1){
    printf("Sum=%d" , number1+number2);
    }
    if (chosenoption==2){
        printf("Subtraction=%d" , number1-number2);
    }
if (chosenoption==3){
    printf("Multipication=%d" , number1*number2);

}
if (chosenoption==4){
    printf("Division=%d" ,number1/number2);
}
    return 0;
}
