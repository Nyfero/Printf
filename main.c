#include "ft_printf.h"

#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define UINT_MAX 4294967295
#define UINT_MIN -4294967295

int main()
{
	/*int	ret;
	int	rot;

	ret = ft_printf("\nFT_PRINTF = bonjour %-c%-c%c* Florian\n", 1, '0', 0);
	rot = printf("   PRINTF = bonjour %-c%-c%c* Florian \n", 1, '0', 0);
	printf("valeur de retour %d\n",ret);
	printf("valeur de retour %d\n",rot);

	%-c%-c%c*", 1, '0', 0

*/

printf("|=>%d\n", ft_printf(" 0*%0-*x*0 0*%0*x*0 ", 21, 1021, 21, -1011));
printf("|=>%d\n", printf(" 0*%0-*x*0 0*%0*x*0 ", 21, 1021, 21, -1011));

/*
	printf("||Test pointeur tripouille||\n\n");
printf("1\n");
	printf("=>%d\n", ft_printf(" %p ", -1));
	printf("=>%d\n", printf(" %p ", -1));
printf("2\n");
	printf("=>%d\n", ft_printf(" %p ", 1));
	printf("=>%d\n", printf(" %p ", 1));
printf("3\n");
	printf("=>%d\n", ft_printf(" %p ", 15));
	printf("=>%d\n", printf(" %p ", 15));
printf("4\n");
	printf("=>%d\n", ft_printf(" %p ", 16));
	printf("=>%d\n", printf(" %p ", 16));
printf("5\n");
	printf("=>%d\n", ft_printf(" %p ", 17));
	printf("=>%d\n", printf(" %p ", 17));
printf("6\n");
	printf("=>%d\n", ft_printf(" %10p %10p ", 1, -1));
	printf("=>%d\n", printf(" %10p %10p ", 1, -1));
printf("7\n");
	printf("=>%d\n", ft_printf(" %-10p %10p ", 1, -1));
	printf("=>%d\n", printf(" %-10p %10p ", 1, -1));
printf("8\n");
	printf("=>%d\n", ft_printf(" %10p %-10p ", 1, -1));
	printf("=>%d\n", printf(" %10p %-10p ", 1, -1));
printf("9\n");
	printf("=>%d\n", ft_printf(" %-10p %-10p ", 1, -1));
	printf("=>%d\n", printf(" %-10p %-10p ", 1, -1));
printf("10\n");
	printf("=>%d\n", ft_printf(" %10p %-10p ", 1, -1));
	printf("=>%d\n", printf(" %10p %-10p ", 1, -1));
printf("11\n");
	printf("=>%d\n", ft_printf(" %p %p ", 1, -1));
	printf("=>%d\n", printf(" %p %p ", 1, -1));
printf("12\n");
	printf("=>%d\n", ft_printf(" %10p %-10p ", 0, 0));
	printf("=>%d\n", printf(" %10p %-10p ", 0, 0));
printf("13\n");
	printf("=>%d\n", ft_printf(" %p %p ", -2147483648, 2147483647));
	printf("=>%d\n", printf(" %p %p ", -2147483648, 2147483647));
printf("14\n");
	printf("=>%d\n", ft_printf(" %p %p ", -2147483648, 2147483647));
	printf("=>%d\n", printf(" %p %p ", -2147483648, 2147483647));
printf("15\n");
	printf("=>%d\n", ft_printf(" %p %p ", 4294967295, -4294967295));
	printf("=>%d\n", printf(" %p %p ", 4294967295, -4294967295));
printf("16\n");
	printf("=>%d\n", ft_printf(" %*p %-*p ", -10, 101, -10, 42));
	printf("=>%d\n", printf(" %*p %-*p ", -10, 101, -10, 42));
printf("17\n");
	printf("=>%d\n", ft_printf(" .-0*%*p %-*p*0-. ", 11, 101, 11, 42));
	printf("=>%d\n", printf(" .-0*%*p %-*p*0-. ", 11, 101, 11, 42));
	printf("||Fin test pointeur tripouille\n\n");
*/
/*	char c = 'a';
	char *s = "coucou";
	int d = 42;
	unsigned int u = 42;

	printf("||TEST ft_printf specifier||\n\n");

	printf("=>%d\n", ft_printf("test[char] %c||", c));
	printf("=>%d\n\n", printf("test[char] %c||", c));

	printf("=>%d\n", ft_printf("test[char *] %s||", s));
	printf("=>%d\n\n", printf("test[char *] %s||", s));

	printf("=>%d\n", ft_printf("test[int (d)] %d||", d));
	printf("=>%d\n\n", printf("test[int (d)] %d||", d));

	printf("=>%d\n", ft_printf("test[int (i)] %i||", d));
	printf("=>%d\n\n", printf("test[int (i)] %i||", d));

	printf("=>%d\n", ft_printf("test[unsigned int] %u||", u));
	printf("=>%d\n\n", printf("test[unsigned int] %u||", u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %x||", u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %x||", u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %X||", u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %X||", u));

	printf("=>%d\n", ft_printf("test[pointeur] %p||", &u));
	printf("=>%d\n\n", printf("test[pointeur] %p||", &u));

	printf("=>%d\n", ft_printf("test[pourcentage] %%||"));
	printf("=>%d\n\n", printf("test[pourcentage] %%||"));

	printf("||FIN TEST ft_printf specifier||\n");

	printf("\n||----------------------------||\n\n");

	printf("||TEST ft_printf flags[0]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %0c||", c));
	printf("test[char] a||=>14\n");
	printf("undefined behaviour for (char) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[char *] %0s||", s));
	printf("test[char *] coucou||=>21\n");
	printf("undefined behaviour for (char *) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[int (d)] %0d||", d));
	printf("=>%d\n\n", printf("test[int (d)] %0d||", d));

	printf("=>%d\n", ft_printf("test[int (i)] %0i||", d));
	printf("=>%d\n\n", printf("test[int (i)] %0i||", d));

	printf("=>%d\n", ft_printf("test[unsigned int] %0u||", u));
	printf("=>%d\n\n", printf("test[unsigned int] %0u||", u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %0x||", u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %0x||", u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %0X||", u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %0X||", u));

	printf("=>%d\n", ft_printf("test[pointeur] %0p||", &u));
	printf("test[pointeur] 0x7ffee90b893c||=>31\n");
	printf("undefined behaviour for pointeur with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[pourcentage] %0%||"));
	printf("=>%d\n\n", printf("test[pourcentage] %0%||"));

	printf("||FIN TEST ft_printf flags[0]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf flags[01]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %01c||", c));
	printf("test[char] a||=>14\n");
	printf("undefined behaviour for (char) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[char *] %01s||", s));
	printf("test[char *] coucou||=>21\n");
	printf("undefined behaviour for (char *) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[int (d)] %01d||", d));
	printf("=>%d\n\n", printf("test[int (d)] %01d||", d));

	printf("=>%d\n", ft_printf("test[int (i)] %01i||", d));
	printf("=>%d\n\n", printf("test[int (i)] %01i||", d));

	printf("=>%d\n", ft_printf("test[unsigned int] %01u||", u));
	printf("=>%d\n\n", printf("test[unsigned int] %01u||", u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %01x||", u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %01x||", u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %01X||", u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %01X||", u));

	printf("=>%d\n", ft_printf("test[pointeur] %01p||", &u));
	printf("test[pointeur] 0x7ffee90b893c||=>31\n");
	printf("undefined behaviour for pointeur with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[pourcentage] %01%||"));
	printf("=>%d\n\n", printf("test[pourcentage] %01%||"));

	printf("||FIN TEST ft_printf flags[01]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf flags[05]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %05c||", c));
	printf("test[char] 0000a||=>18\n");
	printf("undefined behaviour for (char) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[char *] %05s||", s));
	printf("test[char *] coucou||=>21\n");
	printf("undefined behaviour for (char *) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[int (d)] %05d||", d));
	printf("=>%d\n\n", printf("test[int (d)] %05d||", d));

	printf("=>%d\n", ft_printf("test[int (i)] %05i||", d));
	printf("=>%d\n\n", printf("test[int (i)] %05i||", d));

	printf("=>%d\n", ft_printf("test[unsigned int] %05u||", u));
	printf("=>%d\n\n", printf("test[unsigned int] %05u||", u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %05x||", u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %05x||", u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %05X||", u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %05X||", u));

	printf("=>%d\n", ft_printf("test[pointeur] %05p||", &u));
	printf("test[pointeur] 0x7ffee90b893c||=>31\n");
	printf("undefined behaviour for pointeur with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[pourcentage] %05%||"));
	printf("=>%d\n\n", printf("test[pourcentage] %05%||"));

	printf("||FIN TEST ft_printf flags[05]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf flags[015]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %015c||", c));
	printf("test[char] 00000000000000a||=>28\n");
	printf("undefined behaviour for (char) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[char *] %015s||", s));
	printf("test[char *] 000000000coucou||=>30\n");
	printf("undefined behaviour for (char *) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[int (d)] %015d||", d));
	printf("=>%d\n\n", printf("test[int (d)] %015d||", d));

	printf("=>%d\n", ft_printf("test[int (i)] %015i||", d));
	printf("=>%d\n\n", printf("test[int (i)] %015i||", d));

	printf("=>%d\n", ft_printf("test[unsigned int] %015u||", u));
	printf("=>%d\n\n", printf("test[unsigned int] %015u||", u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %015x||", u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %015x||", u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %015X||", u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %015X||", u));

	printf("=>%d\n", ft_printf("test[pointeur] %015p||", &u));
	printf("test[pointeur] 0x07ffee90b893c||=>32\n");
	printf("undefined behaviour for (pointeur) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[pourcentage] %015%||"));
	printf("=>%d\n\n", printf("test[pourcentage] %015%||"));

	printf("||FIN TEST ft_printf flags[015]||\n");

	printf("\n||----------------------------||\n\n");

	printf("||TEST ft_printf flags[0*0]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %0*c||", 0, c));
	printf("test[char] a||=>14\n");
	printf("undefined behaviour for (char) with flags[0]\n\n");


	printf("=>%d\n", ft_printf("test[char *] %0*s||", 0, s));
	printf("test[char *] coucou||=>21\n");
	printf("undefined behaviour for (char *) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[int (d)] %0*d||", 0, d));
	printf("=>%d\n\n", printf("test[int (d)] %0*d||", 0, d));

	printf("=>%d\n", ft_printf("test[int (i)] %0*i||", 0, d));
	printf("=>%d\n\n", printf("test[int (i)] %0*i||", 0, d));

	printf("=>%d\n", ft_printf("test[unsigned int] %0*u||", 0, u));
	printf("=>%d\n\n", printf("test[unsigned int] %0*u||", 0, u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %0*x||", 0, u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %0*x||", 0, u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %0*X||", 0, u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %0*X||", 0, u));

	printf("=>%d\n", ft_printf("test[pointeur] %0*p||", 0, &u));
	printf("test[pointeur] 0x7ffee573e93c||=>31\n");
	printf("undefined behaviour for pointeur with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[pourcentage] %0*%||", 0));
	printf("=>%d\n\n", printf("test[pourcentage] %0*%||", 0));

	printf("||FIN TEST ft_printf flags[0]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf flags[0*1]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %0*c||", 1, c));
	printf("test[char] a||=>14\n");
	printf("undefined behaviour for (char) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[char *] %0*s||", 1, s));
	printf("test[char *] coucou||=>21\n");
	printf("undefined behaviour for (char *) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[int (d)] %0*d||", 1, d));
	printf("=>%d\n\n", printf("test[int (d)] %0*d||", 1, d));

	printf("=>%d\n", ft_printf("test[int (i)] %0*i||", 1, d));
	printf("=>%d\n\n", printf("test[int (i)] %0*i||", 1, d));

	printf("=>%d\n", ft_printf("test[unsigned int] %0*u||", 1, u));
	printf("=>%d\n\n", printf("test[unsigned int] %0*u||", 1, u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %0*x||", 1, u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %0*x||", 1, u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %0*X||", 1, u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %0*X||", 1, u));

	printf("=>%d\n", ft_printf("test[pointeur] %0*p||", 1, &u));
	printf("test[pointeur] 0x7ffee573e93c||=>31\n");
	printf("undefined behaviour for pointeur with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[pourcentage] %0*%||", 1));
	printf("=>%d\n\n", printf("test[pourcentage] %0*%||", 1));

	printf("||FIN TEST ft_printf flags[0*1]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf flags[0*5]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %0*c||", 5, c));
	printf("test[char] 0000a||=>18\n");
	printf("undefined behaviour for (char) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[char *] %0*s||", 5, s));
	printf("test[char *] coucou||=>21\n");
	printf("undefined behaviour for (char *) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[int (d)] %0*d||", 5, d));
	printf("=>%d\n\n", printf("test[int (d)] %0*d||", 5, d));

	printf("=>%d\n", ft_printf("test[int (i)] %0*i||", 5, d));
	printf("=>%d\n\n", printf("test[int (i)] %0*i||", 5, d));

	printf("=>%d\n", ft_printf("test[unsigned int] %0*u||", 5, u));
	printf("=>%d\n\n", printf("test[unsigned int] %0*u||", 5, u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %0*x||", 5, u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %0*x||", 5, u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %0*X||", 5, u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %0*X||", 5, u));

	printf("=>%d\n", ft_printf("test[pointeur] %0*p||", 5, &u));
	printf("test[pointeur] 0x7ffee573e93c||=>31\n");
	printf("undefined behaviour for pointeur with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[pourcentage] %0*%||", 5));
	printf("=>%d\n\n", printf("test[pourcentage] %0*%||", 5));

	printf("||FIN TEST ft_printf flags[0*5]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf flags[0*15]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %0*c||", 15, c));
	printf("test[char] 00000000000000a||=>28\n");
	printf("undefined behaviour for (char) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[char *] %0*s||", 15, s));
	printf("test[char *] 000000000coucou||=>30\n");
	printf("undefined behaviour for (char *) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[int (d)] %0*d||", 15, d));
	printf("=>%d\n\n", printf("test[int (d)] %0*d||", 15, d));

	printf("=>%d\n", ft_printf("test[int (i)] %0*i||", 15, d));
	printf("=>%d\n\n", printf("test[int (i)] %0*i||", 15, d));

	printf("=>%d\n", ft_printf("test[unsigned int] %0*u||", 15, u));
	printf("=>%d\n\n", printf("test[unsigned int] %0*u||", 15, u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %0*x||", 15, u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %0*x||", 15, u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %0*X||", 15, u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %0*X||", 15, u));

	printf("=>%d\n", ft_printf("test[pointeur] %0*p||", 15, &u));
	printf("test[pointeur] 0x07ffee573e93c||=>32\n");
	printf("undefined behaviour for (pointeur) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[pourcentage] %0*%||", 15));
	printf("=>%d\n\n", printf("test[pourcentage] %0*%||", 15));

	printf("||FIN TEST ft_printf flags[0*15]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf flags[0*-1]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %0*c||", -1, c));
	printf("test[char] a||=>14\n");
	printf("undefined behaviour for (char) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[char *] %0*s||", -1, s));
	printf("test[char *] coucou||=>21\n");
	printf("undefined behaviour for (char *) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[int (d)] %0*d||", -1, d));
	printf("=>%d\n\n", printf("test[int (d)] %0*d||", -1, d));

	printf("=>%d\n", ft_printf("test[int (i)] %0*i||", -1, d));
	printf("=>%d\n\n", printf("test[int (i)] %0*i||", -1, d));

	printf("=>%d\n", ft_printf("test[unsigned int] %0*u||", -1, u));
	printf("=>%d\n\n", printf("test[unsigned int] %0*u||", -1, u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %0*x||", -1, u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %0*x||", -1, u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %0*X||", -1, u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %0*X||", -1, u));

	printf("=>%d\n", ft_printf("test[pointeur] %0*p||", -1, &u));
	printf("test[pointeur] 0x7ffee573e93c||=>31\n");
	printf("undefined behaviour for pointeur with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[pourcentage] %0*%||", -1));
	printf("=>%d\n\n", printf("test[pourcentage] %0*%||", -1));

	printf("||FIN TEST ft_printf flags[0*-1]||\n");

	printf("\n||----------------------------||\n\n");

	printf("||TEST ft_printf flags[-]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %-c||", c));
	printf("=>%d\n\n", printf("test[char] %-c||", c));

	printf("=>%d\n", ft_printf("test[char *] %-s||", s));
	printf("=>%d\n\n", printf("test[char *] %-s||", s));

	printf("=>%d\n", ft_printf("test[int (d)] %-d||", d));
	printf("=>%d\n\n", printf("test[int (d)] %-d||", d));

	printf("=>%d\n", ft_printf("test[int (i)] %-i||", d));
	printf("=>%d\n\n", printf("test[int (i)] %-i||", d));

	printf("=>%d\n", ft_printf("test[unsigned int] %-u||", u));
	printf("=>%d\n\n", printf("test[unsigned int] %-u||", u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %-x||", u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %-x||", u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %-X||", u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %-X||", u));

	printf("=>%d\n", ft_printf("test[pointeur] %-p||", &u));
	printf("=>%d\n\n", printf("test[pointeur] %-p||", &u));

	printf("=>%d\n", ft_printf("test[pourcentage] %-%||"));
	printf("=>%d\n\n", printf("test[pourcentage] %-%||"));

	printf("||FIN TEST ft_printf flags[-]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf flags[-1]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %-1c||", c));
	printf("=>%d\n\n", printf("test[char] %-1c||", c));

	printf("=>%d\n", ft_printf("test[char *] %-1s||", s));
	printf("=>%d\n\n", printf("test[char *] %-1s||", s));

	printf("=>%d\n", ft_printf("test[int (d)] %-1d||", d));
	printf("=>%d\n\n", printf("test[int (d)] %-1d||", d));

	printf("=>%d\n", ft_printf("test[int (i)] %-1i||", d));
	printf("=>%d\n\n", printf("test[int (i)] %-1i||", d));

	printf("=>%d\n", ft_printf("test[unsigned int] %-1u||", u));
	printf("=>%d\n\n", printf("test[unsigned int] %-1u||", u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %-1x||", u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %-1x||", u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %-1X||", u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %-1X||", u));

	printf("=>%d\n", ft_printf("test[pointeur] %-1p||", &u));
	printf("=>%d\n\n", printf("test[pointeur] %-1p||", &u));

	printf("=>%d\n", ft_printf("test[pourcentage] %-1%||"));
	printf("=>%d\n\n", printf("test[pourcentage] %-1%||"));

	printf("||FIN TEST ft_printf flags[-1]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf flags[-5]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %-5c||", c));
	printf("=>%d\n\n", printf("test[char] %-5c||", c));

	printf("=>%d\n", ft_printf("test[char *] %-5s||", s));
	printf("=>%d\n\n", printf("test[char *] %-5s||", s));

	printf("=>%d\n", ft_printf("test[int (d)] %-5d||", d));
	printf("=>%d\n\n", printf("test[int (d)] %-5d||", d));

	printf("=>%d\n", ft_printf("test[int (i)] %-5i||", d));
	printf("=>%d\n\n", printf("test[int (i)] %-5i||", d));

	printf("=>%d\n", ft_printf("test[unsigned int] %-5u||", u));
	printf("=>%d\n\n", printf("test[unsigned int] %-5u||", u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %-5x||", u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %-5x||", u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %-5X||", u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %-5X||", u));

	printf("=>%d\n", ft_printf("test[pointeur] %-5p||", &u));
	printf("=>%d\n\n", printf("test[pointeur] %-5p||", &u));

	printf("=>%d\n", ft_printf("test[pourcentage] %-5%||"));
	printf("=>%d\n\n", printf("test[pourcentage] %-5%||"));

	printf("||FIN TEST ft_printf flags[-5]||\n\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf flags[-15]||\n");

	printf("=>%d\n", ft_printf("test[char] %-15c||", c));
	printf("=>%d\n\n", printf("test[char] %-15c||", c));

	printf("=>%d\n", ft_printf("test[char *] %s||", s));
	printf("=>%d\n\n", printf("test[char *] %s||", s));

	printf("=>%d\n", ft_printf("test[int (d)] %-15d||", d));
	printf("=>%d\n\n", printf("test[int (d)] %-15d||", d));

	printf("=>%d\n", ft_printf("test[int (i)] %-15i||", d));
	printf("=>%d\n\n", printf("test[int (i)] %-15i||", d));

	printf("=>%d\n", ft_printf("test[unsigned int] %-15u||", u));
	printf("=>%d\n\n", printf("test[unsigned int] %-15u||", u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %-15x||", u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %-15x||", u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %-15X||", u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %-15X||", u));

	printf("=>%d\n", ft_printf("test[pointeur] %-15p||", &u));
	printf("=>%d\n\n", printf("test[pointeur] %-15p||", &u));

	printf("=>%d\n", ft_printf("test[pourcentage] %-15%||"));
	printf("=>%d\n\n", printf("test[pourcentage] %-15%||"));

	printf("||FIN TEST ft_printf flags[-15]||\n");

	printf("\n||----------------------------||\n\n");

	printf("||TEST ft_printf flags[-*0]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %-*c||", 0, c));
	printf("=>%d\n\n", printf("test[char] %-*c||", 0, c));

	printf("=>%d\n", ft_printf("test[char *] %-*s||", 0, s));
	printf("=>%d\n\n", printf("test[char *] %-*s||", 0, s));

	printf("=>%d\n", ft_printf("test[int (d)] %-*d||", 0, d));
	printf("=>%d\n\n", printf("test[int (d)] %-*d||", 0, d));

	printf("=>%d\n", ft_printf("test[int (i)] %-*i||", 0, d));
	printf("=>%d\n\n", printf("test[int (i)] %-*i||", 0, d));

	printf("=>%d\n", ft_printf("test[unsigned int] %-*u||", 0, u));
	printf("=>%d\n\n", printf("test[unsigned int] %-*u||", 0, u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %-*x||", 0, u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %-*x||", 0, u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %-*X||", 0, u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %-*X||", 0, u));

	printf("=>%d\n", ft_printf("test[pointeur] %-*p||", 0, &u));
	printf("=>%d\n\n", printf("test[pointeur] %-*p||", 0, &u));

	printf("=>%d\n", ft_printf("test[pourcentage] %-*%||", 0));
	printf("=>%d\n\n", printf("test[pourcentage] %-*%||", 0));

	printf("||FIN TEST ft_printf flags[-*0]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf flags[-*1]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %-*c||", 1, c));
	printf("=>%d\n\n", printf("test[char] %-*c||", 1, c));

	printf("=>%d\n", ft_printf("test[char *] %-*s||", 1, s));
	printf("=>%d\n\n", printf("test[char *] %-*s||", 1, s));

	printf("=>%d\n", ft_printf("test[int (d)] %-*d||", 1, d));
	printf("=>%d\n\n", printf("test[int (d)] %-*d||", 1, d));

	printf("=>%d\n", ft_printf("test[int (i)] %-*i||", 1, d));
	printf("=>%d\n\n", printf("test[int (i)] %-*i||", 1, d));

	printf("=>%d\n", ft_printf("test[unsigned int] %-*u||", 1, u));
	printf("=>%d\n\n", printf("test[unsigned int] %-*u||", 1, u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %-*x||", 1, u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %-*x||", 1, u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %-*X||", 1, u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %-*X||", 1, u));

	printf("=>%d\n", ft_printf("test[pointeur] %-*p||", 1, &u));
	printf("=>%d\n\n", printf("test[pointeur] %-*p||", 1, &u));

	printf("=>%d\n", ft_printf("test[pourcentage] %-*%||", 1));
	printf("=>%d\n\n", printf("test[pourcentage] %-*%||", 1));

	printf("||FIN TEST ft_printf flags[-*1]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf flags[-*5]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %-*c||", 5, c));
	printf("=>%d\n\n", printf("test[char] %-*c||", 5, c));

	printf("=>%d\n", ft_printf("test[char *] %-*s||", 5, s));
	printf("=>%d\n\n", printf("test[char *] %-*s||", 5, s));

	printf("=>%d\n", ft_printf("test[int (d)] %-*d||", 5, d));
	printf("=>%d\n\n", printf("test[int (d)] %-*d||", 5, d));

	printf("=>%d\n", ft_printf("test[int (i)] %-*i||", 5, d));
	printf("=>%d\n\n", printf("test[int (i)] %-*i||", 5, d));

	printf("=>%d\n", ft_printf("test[unsigned int] %-*u||", 5, u));
	printf("=>%d\n\n", printf("test[unsigned int] %-*u||", 5, u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %-*x||", 5, u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %-*x||", 5, u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %-*X||", 5, u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %-*X||", 5, u));

	printf("=>%d\n", ft_printf("test[pointeur] %-*p||", 5, &u));
	printf("=>%d\n\n", printf("test[pointeur] %-*p||", 5, &u));

	printf("=>%d\n", ft_printf("test[pourcentage] %-*%||", 5));
	printf("=>%d\n\n", printf("test[pourcentage] %-*%||", 5));

	printf("||FIN TEST ft_printf flags[-*5]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf flags[-*15]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %-*c||", 15, c));
	printf("=>%d\n\n", printf("test[char] %-*c||", 15, c));

	printf("=>%d\n", ft_printf("test[char *] %-*s||", 15, s));
	printf("=>%d\n\n", printf("test[char *] %-*s||", 15, s));

	printf("=>%d\n", ft_printf("test[int (d)] %-*d||", 15, d));
	printf("=>%d\n\n", printf("test[int (d)] %-*d||", 15, d));

	printf("=>%d\n", ft_printf("test[int (i)] %-*i||", 15, d));
	printf("=>%d\n\n", printf("test[int (i)] %-*i||", 15, d));

	printf("=>%d\n", ft_printf("test[unsigned int] %-*u||", 15, u));
	printf("=>%d\n\n", printf("test[unsigned int] %-*u||", 15, u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %-*x||", 15, u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %-*x||", 15, u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %-*X||", 15, u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %-*X||", 15, u));

	printf("=>%d\n", ft_printf("test[pointeur] %-*p||", 15, &u));
	printf("=>%d\n\n", printf("test[pointeur] %-*p||", 15, &u));

	printf("=>%d\n", ft_printf("test[pourcentage] %-*%||", 15));
	printf("=>%d\n\n", printf("test[pourcentage] %-*%||", 15));

	printf("||FIN TEST ft_printf flags[-*15]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf flags[-*-1]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %-*c||", -1, c));
	printf("=>%d\n\n", printf("test[char] %-*c||", -1, c));

	printf("=>%d\n", ft_printf("test[char *] %-*s||", -1, s));
	printf("=>%d\n\n", printf("test[char *] %-*s||", -1, s));

	printf("=>%d\n", ft_printf("test[int (d)] %-*d||", -1, d));
	printf("=>%d\n\n", printf("test[int (d)] %-*d||", -1, d));

	printf("=>%d\n", ft_printf("test[int (i)] %-*i||", -1, d));
	printf("=>%d\n\n", printf("test[int (i)] %-*i||", -1, d));

	printf("=>%d\n", ft_printf("test[unsigned int] %-*u||", -1, u));
	printf("=>%d\n\n", printf("test[unsigned int] %-*u||", -1, u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %-*x||", -1, u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %-*x||", -1, u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %-*X||", -1, u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %-*X||", -1, u));

	printf("=>%d\n", ft_printf("test[pointeur] %-*p||", -1, &u));
	printf("=>%d\n\n", printf("test[pointeur] %-*p||", -1, &u));

	printf("=>%d\n", ft_printf("test[pourcentage] %-*%||", -1));
	printf("=>%d\n\n", printf("test[pourcentage] %-*%||", -1));

	printf("||FIN TEST ft_printf flags[-*-1]||\n");

	printf("\n||----------------------------||\n\n");

	printf("||TEST ft_printf precision[1]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %1c||", c));
	printf("=>%d\n\n", printf("test[char] %1c||", c));

	printf("=>%d\n", ft_printf("test[char *] %1s||", s));
	printf("=>%d\n\n", printf("test[char *] %1s||", s));

	printf("=>%d\n", ft_printf("test[int (d)] %1d||", d));
	printf("=>%d\n\n", printf("test[int (d)] %1d||", d));

	printf("=>%d\n", ft_printf("test[int (i)] %1i||", d));
	printf("=>%d\n\n", printf("test[int (i)] %1i||", d));

	printf("=>%d\n", ft_printf("test[unsigned int] %1u||", u));
	printf("=>%d\n\n", printf("test[unsigned int] %1u||", u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %1x||", u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %1x||", u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %1X||", u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %1X||", u));

	printf("=>%d\n", ft_printf("test[pointeur] %1p||", &u));
	printf("=>%d\n\n", printf("test[pointeur] %1p||", &u));

	printf("=>%d\n", ft_printf("test[pourcentage] %1%||"));
	printf("=>%d\n\n", printf("test[pourcentage] %1%||"));

	printf("||FIN TEST ft_printf precision[1]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf precision[5]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %5c||", c));
	printf("=>%d\n\n", printf("test[char] %5c||", c));

	printf("=>%d\n", ft_printf("test[char *] %5s||", s));
	printf("=>%d\n\n", printf("test[char *] %5s||", s));

	printf("=>%d\n", ft_printf("test[int (d)] %5d||", d));
	printf("=>%d\n\n", printf("test[int (d)] %5d||", d));

	printf("=>%d\n", ft_printf("test[int (i)] %5i||", d));
	printf("=>%d\n\n", printf("test[int (i)] %5i||", d));

	printf("=>%d\n", ft_printf("test[unsigned int] %5u||", u));
	printf("=>%d\n\n", printf("test[unsigned int] %5u||", u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %5x||", u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %5x||", u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %5X||", u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %5X||", u));

	printf("=>%d\n", ft_printf("test[pointeur] %5p||", &u));
	printf("=>%d\n\n", printf("test[pointeur] %5p||", &u));

	printf("=>%d\n", ft_printf("test[pourcentage] %5%||"));
	printf("=>%d\n\n", printf("test[pourcentage] %5%||"));

	printf("||FIN TEST ft_printf precision[5]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf precision[15]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %15c||", c));
	printf("=>%d\n\n", printf("test[char] %15c||", c));

	printf("=>%d\n", ft_printf("test[char *] %15s||", s));
	printf("=>%d\n\n", printf("test[char *] %15s||", s));

	printf("=>%d\n", ft_printf("test[int (d)] %15d||", d));
	printf("=>%d\n\n", printf("test[int (d)] %15d||", d));

	printf("=>%d\n", ft_printf("test[int (i)] %15i||", d));
	printf("=>%d\n\n", printf("test[int (i)] %15i||", d));

	printf("=>%d\n", ft_printf("test[unsigned int] %15u||", u));
	printf("=>%d\n\n", printf("test[unsigned int] %15u||", u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %15x||", u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %15x||", u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %15X||", u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %15X||", u));

	printf("=>%d\n", ft_printf("test[pointeur] %15p||", &u));
	printf("=>%d\n\n", printf("test[pointeur] %15p||", &u));

	printf("=>%d\n", ft_printf("test[pourcentage] %15%||"));
	printf("=>%d\n\n", printf("test[pourcentage] %15%||"));

	printf("||FIN TEST ft_printf precision[15]||\n");

	printf("\n||----------------------------||\n\n");

	printf("||TEST ft_printf precision[.1]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %.1c||", c));
	printf("test[char] a||=>14\n");
	printf("undefined behaviour for (char) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[char *] %.1s||", s));
	printf("=>%d\n\n", printf("test[char *] %.1s||", s));

	printf("=>%d\n", ft_printf("test[int (d)] %.1d||", d));
	printf("=>%d\n\n", printf("test[int (d)] %.1d||", d));

	printf("=>%d\n", ft_printf("test[int (i)] %.1i||", d));
	printf("=>%d\n\n", printf("test[int (i)] %.1i||", d));

	printf("=>%d\n", ft_printf("test[unsigned int] %.1u||", u));
	printf("=>%d\n\n", printf("test[unsigned int] %.1u||", u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %.1x||", u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %.1x||", u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %.1X||", u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %.1X||", u));

	printf("=>%d\n", ft_printf("test[pointeur] %.1p||", &u));
	printf("test[pointeur] 0x7ffee968593c||=>31\n");
	printf("undefined behaviour for (pointeur) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[pourcentage] %.1%||"));
	printf("=>%d\n\n", printf("test[pourcentage] %.1%||"));

	printf("||FIN TEST ft_printf precision[.1]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf precision[.5]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %.5c||", c));
	printf("test[char] a||=>14\n");
	printf("undefined behaviour for (char) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[char *] %.5s||", s));
	printf("=>%d\n\n", printf("test[char *] %.5s||", s));

	printf("=>%d\n", ft_printf("test[int (d)] %.5d||", d));
	printf("=>%d\n\n", printf("test[int (d)] %.5d||", d));

	printf("=>%d\n", ft_printf("test[int (i)] %.5i||", d));
	printf("=>%d\n\n", printf("test[int (i)] %.5i||", d));

	printf("=>%d\n", ft_printf("test[unsigned int] %.5u||", u));
	printf("=>%d\n\n", printf("test[unsigned int] %.5u||", u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %.5x||", u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %.5x||", u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %.5X||", u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %.5X||", u));

	printf("=>%d\n", ft_printf("test[pointeur] %.5p||", &u));
	printf("test[pointeur] 0x7ffee968593c||=>31\n");
	printf("undefined behaviour for (pointeur) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[pourcentage] %.5%||"));
	printf("=>%d\n\n", printf("test[pourcentage] %.5%||"));

	printf("||FIN TEST ft_printf precision[.5]||\n");

	printf("||----------------------------||\n");

	printf("||TEST ft_printf precision[.15]||\n\n");

	printf("=>%d\n", ft_printf("test[char] %.15c||", c));
	printf("test[char] a||=>14\n");
	printf("undefined behaviour for (char) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[char *] %.15s||", s));
	printf("=>%d\n\n", printf("test[char *] %.15s||", s));

	printf("=>%d\n", ft_printf("test[int (d)] %.15d||", d));
	printf("=>%d\n\n", printf("test[int (d)] %.15d||", d));

	printf("=>%d\n", ft_printf("test[int (i)] %.15i||", d));
	printf("=>%d\n\n", printf("test[int (i)] %.15i||", d));

	printf("=>%d\n", ft_printf("test[unsigned int] %.15u||", u));
	printf("=>%d\n\n", printf("test[unsigned int] %.15u||", u));

	printf("=>%d\n", ft_printf("test[unsigned hexa] %.15x||", u));
	printf("=>%d\n\n", printf("test[unsigned hexa] %.15x||", u));

	printf("=>%d\n", ft_printf("test[unsigned HEXA] %.15X||", u));
	printf("=>%d\n\n", printf("test[unsigned HEXA] %.15X||", u));

	printf("=>%d\n", ft_printf("test[pointeur] %.15p||", &u));
	printf("test[pointeur] 0x7ffee968593c||=>31\n");
	printf("undefined behaviour for (pointeur) with flags[0]\n\n");

	printf("=>%d\n", ft_printf("test[pourcentage] %.15%||"));
	printf("=>%d\n\n", printf("test[pourcentage] %.15%||"));

	printf("||FIN TEST ft_printf precision[.15]||\n");

	printf("\n||----------------------------||\n\n");
*/
}
