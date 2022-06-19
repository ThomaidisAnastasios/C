#include <stdio.h>
#include <string.h>
#define N 5
#define M 20
int main()
{
    int i,j,min;
    char OE[N][M],E[M],*E_ptr,*OE_ptr;
    /*Dhlwnw tis metavlhtes.*/
    printf("Dwse to onomatepwnymo.\n");
    for(i=0;i<N;i++)
    {
        gets(OE[i]);
        while(OE[i][j]<"A" && OE[i][j]>"Z")
        {
            printf("H timh poy dwsate den einai apodekth.Ksanadwste.\n");
            gets(OE[i]);
        }
    }
    /*Bazw ta onomatepwnyma ston pinaka.*/
    for (i=0;i<M;i++)
    {
        printf("Dwse to epwnymo.\n");
        E_ptr=&E[i];
        gets(E_ptr);
    }
    /*Diavazei to epwymo poy prepei na eleksei.*/
    for(i=0;i<N;i++)
    {
        OE_ptr=&OE[i][j];
        if(OE_ptr==E_ptr)
            printf("%s\n",E_ptr);
    }
    /*Elegxos an ta epwnyma einai idia.*/
    return 0;
}

