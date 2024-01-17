//Neka korisnik unese tri cijela broja.Ispišite da li je veæa suma brojeva izmeðu prva dva broja ili
//izmeðu druga dva unesena broja.
#include <stdio.h>
void main()
{
	int a, b, c, temp, i, suma1 = 0, suma2 = 0;
	printf("Unesi tri cijela broja\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	for (i = a; i <= b; i = i + 1)
		suma1 = suma1 + i;
	for (i = b; i <= c; i = i + 1)
		suma2 = suma2 + i;
	printf("\nSuma brojeva od %d do %d je %d ", a, b, suma1);
	if (suma1 < suma2)
		printf("i manja je od ");
	else if (suma1 > suma2)
		printf("i veca je od ");
	else
		printf("i jednaka je ");
	printf("%d koliko iznosi suma brojeva od %d do %d.\n", suma2, b, c);
}
//Neka korisnik unese cijeli broj.Ispišite sve dvoznamenkaste višekratnike broja 5 veæe od
//unesenog broja.
#include <stdio.h>
void main()
{
	int a, i;
	printf("Unesi cijeli broj\n");
	scanf("%d", &a);
	printf("Dvoznamenkasti visekratnici broja 5 su:\n");
	for (i = a; i < 100; i = i + 1)
		if (i % 5 == 0) printf("%d\n", i);
}
//Napišite program u kojem korisnik unosi ocjene ispita, sve dok se ne unese 0. Ocjene izvan
//dopuštenog raspona 1 - 5 se zanemaruju.Program neka ispiše koliko je bilo pozitivnih, koliko
//negativnih, koliko odliènih ocjena, te prosjeènu ocjenu. (preporuka: do - while - continue)
#include <stdio.h>
void main()
{
	int a, p = 0, n = 0, od = 0, br = 0, suma = 0;
	float prosjek;
	printf("Unesi ocjene s ispita. Za kraj unesi 0.\n");
	do
	{
		scanf("%d", &a);
		if ((a < 1) || (a > 5))
			continue;
		if ((a > 1) && (a < 6))
			p++;
		else if (a == 1)
			n++;
		if (a == 5)
			od++;
		br++;
		suma = suma + a;
	} while (a != 0);
	if (br > 0)
	{
		prosjek = suma / (float)br;
		printf("Broj pozitivnih ocjena je %d\n", p);
		printf("Od toga je odlicnih %d\n", od);
		printf("Broj negativnih ocjena je %d\n", n);
		printf("Prosjek svih %d ocjena ispita je %f\n", br, prosjek);
	}
}
//Napišite program u kojem korisnik unosi ocjene ispita, sve dok ne unese ocjenu izvan dopuštenog
//raspona 1 - 5. Program neka ispiše koliko je bilo pozitivnih, a koliko negativnih ocjena, te prosjeènu
//ocjenu(preporuka: koristite while - break).
#include <stdio.h>
void main()
{
	int a, p = 0, n = 0, od = 0, br = 0, suma = 0;
	float prosjek;
	printf("Unesi ocjene s ispita.\n");
	a = 1;
	while ((a > 0) && (a < 6))
	{
		scanf("%d", &a);
		if ((a < 1) || (a > 5))
			break;
		if ((a > 1) && (a < 6))
			p++;
		else if (a == 1)
			n++;
		if (a == 5)
			od++;
		br++;
		suma = suma + a;
	}
	if (br > 0)
	{
		prosjek = suma / (float)br;
		printf("Broj pozitivnih ocjena je %d\n", p);
		printf("Od toga je odlicnih %d\n", od);
		printf("Broj negativnih ocjena je %d\n", n);
		printf("Prosjek svih %d ocjena ispita je %f\n", br, prosjek);
	}
}