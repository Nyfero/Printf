#include <stdio.h>
/*
int main()
{
	char c = 'a';
	char *s = "coucou";
	unsigned int u = 42;
	printf("=>%d\n", printf("test[char] %.1c||", c));
	printf("=>%d\n", printf("test[char *] %0*s||", 0, s));
	printf("=>%d\n", printf("test[pointeur] %.1p||", &u));
	printf("=>%d\n", printf("test[char] %.5c||", c));
	printf("=>%d\n", printf("test[char *] %0*s||", 1, s));
	printf("=>%d\n", printf("test[pointeur] %.5p||", &u));
	printf("=>%d\n", printf("test[char] %.15c||", c));
	printf("=>%d\n", printf("test[char *] %0*s||", 5, s));
	printf("=>%d\n", printf("test[pointeur] %.15p||", &u));
	printf("=>%d\n", printf("test[char] %0*c||", 15, c));
	printf("=>%d\n", printf("test[char *] %0*s||", 15, s));
	printf("=>%d\n", printf("test[pointeur] %0*p||", 15, &u));
	printf("=>%d\n", printf("test[char] %0*c||", -1, c));
	printf("=>%d\n", printf("test[char *] %0*s||", -1, s));
	printf("=>%d\n", printf("test[pointeur] %0*p||", -1, &u));

}
*/
/*
char	*tmp;

if (tab->spec == 'c')
	tmp = ft_chardup(tab->afchar);
else
	tmp = ft_strdup_printf(tab->aff);
if (!tmp)
	return (tab);
if (tab->spec == 'p')
	tmp = ft_strjoin_and_free_s2("0x", tmp);
if (tab->prec > (int)ft_strlen(tmp) || (tab->spec == 's' && tab->prec >= 0)
|| (tab->prec == 0 && tmp[0] == '0' && tab->spec != 'p'))
	tmp = ft_aff_prec(tmp, tab);
if (tab->width > (int)ft_strlen(tmp))
{
	tmp = ft_aff_width(tmp, tab);
	if (tab->flags == '0' || tab->flags == '-')
		tmp = ft_aff_flags(tmp, tab);
}
ft_putstr_printf(tmp, tab);
tab->length += ft_strlen(tmp);
if (ft_strlen(tmp) == 0 && tab->spec == 'c')
	tab->length++;
free(tmp);
return (tab);*/
