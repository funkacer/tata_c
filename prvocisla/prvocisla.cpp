// prvocisla.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    int i = 2; //toto bude jmenovatel pro testovani, timto zacnu delit a pak zvysuju
    int cislo = 0;  //toto cislo testuji
    int prvocislo = 1; //predpokladam, ze cislo je prvocislo, dokud nenajdu delitele
    char je_delitelne[100] = "";
    char pridej[10] = "";

    while (1) {

        printf("Zadejte cislo: ");
        scanf("%d", &cislo);

        i = 2;
        prvocislo = 1;
        strcpy(je_delitelne, "");

        //char je_delitelne[100] = "";

        if (cislo > 1) {
            //prvocisla jsou jen prirozena cisla vetsi nez 1
            while (i < cislo) {
                if (cislo % i == 0) {
                    //neni prvocislo
                    //printf("%d\n", i);
                    prvocislo = 0;
                    printf(pridej, "%d", i);
                    if (strlen(je_delitelne) > 0) {
                        strcat(je_delitelne, ", ");
                    }
                    strcat(je_delitelne, pridej);
                }
                i++;
            }
        }
        else {
            prvocislo = 0;
        }

        if (prvocislo == 0) {
            printf("%s %d %s\n", "Cislo", cislo, "neni prvocislo!");
            if (strlen(je_delitelne) > 0) {
                printf("%s %s\n", "Je delitelne cisly: ", je_delitelne);
            }
        }
        else {
            printf("%s %d %s\n", "Cislo", cislo, "je prvocislo!");
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
