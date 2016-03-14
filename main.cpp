#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

char dane[100];
char liczba [100];
int dlugosc;
int dlugosc_2;
int wartosc;

int main()
{
    printf("Podaj najpierw liczbe powtorzen.\nNastepnie litere f(ciag fibonaciego) lub c(inny ciag)\n"); 
	printf("Podaj co mam zrobic: ");
    cin.getline(dane,100);
 
    dlugosc = strlen(dane);
    
    for(int i=0; i<dlugosc; i++)
	{
		if(dane[i]>=48 && dane[i]<=57)
		{
				liczba[i]=dane[i];
		}
	}
	
    dlugosc_2=strlen(liczba);
    wartosc=int(liczba[0]-48);
    
    for(int i=1; i<dlugosc_2; i++)
	{
		wartosc=wartosc*10+(int(liczba[i])-48);
	}

    if(dane[dlugosc-1]=='f')
	{
		
     long int a = 0, b = 1;
 
     for(int i=0; i<wartosc; i++)
     {
            printf("%ld ",b);
            b += a; //pod zmienn¹ b przypisujemy wyraz nastêpny czyli a+b
            a = b-a; //pod zmienn¹ a przypisujemy wartoœæ zmiennej b
     } 
	}
    else if(dane[dlugosc-1]=='c')
	{
		long int c=1;
		for(int i=0; i<wartosc; i++)
		{
			printf("%ld ", c);
			c=c*3;
		}
	}
	else
	{
	    printf("Podana zla wartosc!");
	} 
	printf("\n");
	system("PAUSE");   
    return 0;       
}