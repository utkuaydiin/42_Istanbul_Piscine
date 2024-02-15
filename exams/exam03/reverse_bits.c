unsigned char reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char res = 0;

	while(i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

#include <stdio.h>


	int main()
{
    unsigned char octet = 2; // Example input
    printf("Original octet: %d\n", octet);

    unsigned char reversed = reverse_bits(octet);
    printf("Reversed octet: %d\n", reversed);

    return 0;
}