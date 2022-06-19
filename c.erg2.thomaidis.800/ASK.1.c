#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    float j;
    /*Dhlwnw dedomena.*/
    printf("O automatos pwlhths diathetei emfialwmeno nero me timh 0.50 eurw sto 1 ,kafe me timh 0.90 eurw sto 2 ,anapsyktika me timh 0.80 eurw sto 3 kai tsai me timh 0.60 eurw sto 4.O automatos pwlhths dexetai mono kermata tou misou, tou enous kai twn duo eurw\n.");
    scanf("%d",&i);
    /*Emfanizw ton katalogo kai scanarw twn kwdiko pou eisagei o pelaths.*/
    if (i==1)
    {
        printf("Eisagetai 0.50 eurw\n.");
        scanf("%f",&j);
        if (j==0.50)
            printf("Den exete resta.");
        else if (j==1)
            printf("Exete resta 0.50 eurw.");
        else
            printf("Exete resta 1.50 eurw.");
    }
    else if (i==2)
    {
        printf("Eisagetai 0.90 eurw\n.");
        scanf("%f",&j);
        if (j==1)
            printf("Exete resta 0.10 eurw.");
        else if (j==2)
            printf("Exete resta 1.10 eurw.");
    }
    else if (i==3)
    {
        printf("Eisagetai 0.80 eurw\n.");
        scanf("%f",&j);
        if (j==1)
            printf("Exete resta 0.20 eurw.");
        else if (j==2)
            printf("Exete resta 1.20 eurw.");
    }
    else
    {
        printf("Eisagetai 0.60 eurw\n.");
         scanf("%f",&j);
        if (j==1)
            printf("Exete resta 0.40 eurw.");
        else if (j==2)
            printf("Exete resta 1.40 eurw.");
    }
    /*Xrhsimopoiw thn if gia na vrw ton kwdiko tou pelathh kai emfanizw ta resta analoga me to xrhmatiko poso to opoio eisxthike.*/
    return 0;
}
