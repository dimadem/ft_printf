#include "./include/ft_printf.h"

int main(void)
{
	int   result;
	char character = 'c';
	char  string[] = "string";
	int   number = 32;
	char  *pointer;
	int   *pointer_int;
	char format_all[]="\npointer char  -> %p\npointer int   -> %p\nformat string -> %s\nformat digit  -> %d\nformat hexadecimal lowercase -> %x\nformat hexadecimal Uppercase -> %X\ncase   -> %%";

	printf("-------------------------------\n");
	printf("\n-");
	printf("\nft_printf case character\n");
	result = ft_printf("%c", character);
	printf("\nlength -> %d\n", result);

	printf("\n-");
	printf("\nprintf case character\n");
	result = printf("%c", character);
	printf("\nlength -> %d\n", result); 

	printf("-------------------------------\n");
	printf("\n-");
	printf("\nft_printf case string\n");
	result = ft_printf("%s", string);
	printf("\nlength -> %d\n", result);

	printf("\n-");
	printf("\nprintf case string\n");
	result = printf("%s", string);
	printf("\nlength -> %d\n", result);

	printf("-------------------------------\n");
	printf("\n-");
	printf("\nft_printf case pointer char\n");
	result = ft_printf("%p", pointer);
	printf("\nlength -> %d\n", result);

	printf("\n-");
	printf("\nprintf case pointer char\n");
	result = printf("%p", pointer);
	printf("\nlength -> %d\n", result);

	printf("-------------------------------\n");
	printf("\n-");
	printf("\nft_printf case pointer int\n");
	result = ft_printf("%p", pointer_int);
	printf("\nlength -> %d\n", result);

	printf("\n-");
	printf("\nprintf case pointer int\n");
	result = printf("%p", pointer_int);
	printf("\nlength -> %d\n", result);

	printf("-------------------------------\n");
	printf("\n-");
	printf("\nft_printf case decimal\n");
	result = ft_printf("%d", number);
	printf("\nlength -> %d\n", result);

	printf("\n-");
	printf("\nprintf case decimal\n");
	result = printf("%d", number);
	printf("\nlength -> %d\n", result);

	printf("-------------------------------\n");
	printf("\n-");
	printf("\nft_printf case integer\n");
	result = ft_printf("%i", number);
	printf("\nlength -> %d\n", result);

	printf("\n-");
	printf("\nprintf case integer\n");
	result = printf("%i", number);
	printf("\nlength -> %d\n", result);

	printf("-------------------------------\n");
	printf("\n-");
	printf("\nft_printf case hexadecimal lowercase\n");
	result = ft_printf("%x", number);
	printf("\nlength -> %d\n", result);

	printf("\n-");
	printf("\nprintf case hexadecimal lowercase\n");
	result = printf("%x", number);
	printf("\nlength -> %d\n", result);

	printf("-------------------------------\n");
	printf("\n-");
	printf("\nft_printf case hexadecimal uppercase\n");
	result = ft_printf("%X", number);
	printf("\nlength -> %d\n", result);

	printf("\n-");
	printf("\nprintf case hexadecimal uppercase\n");
	result = printf("%X", number);
	printf("\nlength -> %d\n", result);

	printf("-------------------------------\n");
	printf("\n-");
	printf("\nft_printf case percent\n");
	result = ft_printf("%%");
	printf("\nlength -> %d\n", result);

	printf("\n-");
	printf("\nprintf case percent\n");
	result = printf("%%");
	printf("\nlength -> %d\n", result);

	printf("-------------------------------\n");
	printf("\n-");
	printf("\nft_printf case all\n");
	result = ft_printf(format_all, pointer, pointer_int, string, number, number, number);
	printf("\nlength -> %d\n", result);

	printf("\n-");
	printf("\nprintf case all\n");
	result = printf(format_all, pointer, pointer_int, string, number, number, number);
	printf("\nlength -> %d\n", result);
}
