#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mynumber, mynumber2, mynumber3;
    int sonuc;

    printf("1 - Toplama \n");
    printf("2 - Cikarma\n");
    printf("3 - Carpma \n");
    printf("4 - Bolme\n");

    printf("Yapicaginiz islemi secin:");
    scanf("%d", &mynumber);
    printf("\n");

    if(mynumber == 1){;

    printf("birinci sayiyi girin:");
    scanf("%d", &mynumber2);
    printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &mynumber3);
    printf("\n");

    sonuc = mynumber2 + mynumber3;

    printf("Sonuc:%d\n\n", sonuc);

    return 0;
    }

    else if(mynumber == 2){

    printf("birinci sayiyi girin:");
    scanf("%d", &mynumber2);
    printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &mynumber3);
    printf("\n");

    sonuc = mynumber2 - mynumber3;

    printf("Sonuc:%d\n\n",sonuc);

    return 0;

    }

    else if(mynumber == 3){

    printf("birinci sayiyi girin:");
    scanf("%d", &mynumber2);
    printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &mynumber3);
    printf("\n");

    sonuc = mynumber2 * mynumber3;

    printf("Sonuc:%d \n\n", sonuc);

    return 0;
    }
    else if(mynumber == 4) {

    printf("birinci sayiyi girin:");
    scanf("%d", &mynumber2);
    printf("\n");

    printf("ikinci sayiyi girin:");
    scanf("%d", &mynumber3);

    sonuc = mynumber2 / mynumber3;

    printf("Sonuc:%d\n\n", sonuc);

    return 0;

    }

    else if(mynumber > 4);{

      printf("Tebrikler\n\n");
      return 0;
    }


    }




