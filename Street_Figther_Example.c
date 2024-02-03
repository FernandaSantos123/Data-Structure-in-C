#include <stdio.h>

int main()
{
    int HPRyu;    // valor total do hp do Ryu
    int HPKen;    // valor total do hp de ken
    int Golpe;    // variavel que armazena o valor do golpe
    int GolpeRyu; // quantidade de golpes aplicados por Ryu
    int GolpeKen; // quantidade de golpes aplicados por Ken
    GolpeRyu = 0;
    GolpeKen = 0;
    scanf("%d", &HPRyu);
    scanf("%d", &HPKen);

    while (HPRyu > 0 && HPKen > 0)
    {
        scanf("%d", &Golpe);
        if (Golpe > 0) // golpe com valor positivo indica que foi realizado por ryu
        {
            HPKen = HPKen - Golpe;
            printf("RYU APLICOU UM GOLPE: %d\n", Golpe);
            GolpeRyu = GolpeRyu + 1;
        }
        if (Golpe < 0) // golpe com valor negativo indica que foi realizado por Ken
        {
            HPRyu = HPRyu + Golpe;
            Golpe = abs(Golpe);
            printf("KEN APLICOU UM GOLPE: %d\n", Golpe);
            GolpeKen = GolpeKen + 1;
        }
        if (HPRyu >= 0)
        {
            printf("HP RYU = %d\n", HPRyu);
        }
        else
        {
            HPRyu = 0;
            printf("HP RYU = %d\n", HPRyu);
        }
        if (HPKen >= 0)
        {
            printf("HP KEN = %d\n", HPKen);
        }
        else
        {
            HPKen = 0;
            printf("HP KEN = %d\n", HPKen);
        }
        Golpe = 0;
    }
    if (HPRyu == 0)
    {
        printf("LUTADOR VENCEDOR: KEN\n");
    }
    if (HPKen == 0)
    {
        printf("LUTADOR VENCEDOR: RYU\n");
    }

    printf("GOLPES RYU = %d\n", GolpeRyu);
    printf("GOLPES KEN = %d\n", GolpeKen);
}