#include <stdio.h>
int main()
{
    printf("\tBIODATA PRIBADI\n\n");
    printf("NAMA     : BELLA PRATIWI\n");
    printf("NPM      : 1914370120\n");
    printf("KELAS    : REGULER 1D\n");
    printf("PRODI    : SISTEM KOMPUTER\n");
    printf("FAKULTAS :SAINS & TEKNOLOGI\n");


    int a=50;
    int b=30;
    int c,penjumlahan,pengurangan,perkalian,pembagian;
    penjumlahan=a+b;
    printf("hasil dari penjumlahan adalah %d\n",penjumlahan);
    pengurangan=a-b;
    printf("hasil dari pengurangan adalah %d\n",pengurangan);
    perkalian=a*b;
    printf("hasil dari perkalian adalah %d\n",perkalian);
    pembagian=a/b;
    printf("hasil dari pembagian adalah %d\n",pembagian);
    c= b%a;
    printf("hasil dari modulus adalah %d\n",c);
    return 0;
}
