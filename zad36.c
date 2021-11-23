// Program treba zamjenit 2 broja preko pointera.

#include<stdio.h>

void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

int main()
{
    int br1,br2;

    printf("Enter value of br1: ");
    scanf("%d",&br1);
    printf("Enter value of br2: ");
    scanf("%d",&br2);

    // Ispis brojeva prije zamjene
    printf("Prije zamjene: br1 je: %d, br2 je: %d\n",br1,br2);

    //Pozivamo funkciju swap swap()
    swap(&br1,&br2);

    // Ispis brojeva nakon zamjene
    printf("Nakon zamjene: br1 je: %d, br2 je: %d\n",br1,br1);

    return 0;
}
