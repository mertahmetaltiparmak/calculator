#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option, firstNum, secondNum;
    int result;

    printf("1 - Toplama \n");
    printf("2 - Cikarma\n");
    printf("3 - Carpma \n");
    printf("4 - Bolme\n");

    printf("Yapicaginiz islemi secin:");
    scanf("%d", &option);
    printf("\n");

    if(option == 1){;

    printf("birinci sayiyi girin:");
    scanf("%d", &firstNum);
    printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &secondNum);
    printf("\n");

    result = firstNum + secondNum;

    printf("Sonuc:%d\n\n", result);

    return 0;
    }

    else if(option == 2){

    printf("birinci sayiyi girin:");
    scanf("%d", &firstNum);
    printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &secondNum);
    printf("\n");

    result = firstNum - secondNum;

    printf("Sonuc:%d\n\n",result);

    return 0;

    }

    else if(option == 3){

    printf("birinci sayiyi girin:");
    scanf("%d", &firstNum);
    printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &secondNum);
    printf("\n");

    result = firstNum * secondNum;

    printf("Sonuc:%d \n\n", result);

    return 0;
    }

    else if(option == 4) {

    printf("birinci sayiyi girin:");
    scanf("%d", &firstNum);
    printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &secondNum);

    result = firstNum / secondNum;

    printf("Sonuc:%d\n\n", result);

    return 0;

    }

    else if(option > 4);{

      printf("Tebrikler\n\n");
      return 0;
    }


    }




