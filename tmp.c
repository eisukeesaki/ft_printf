/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 20:37:22 by eesaki            #+#    #+#             */
/*   Updated: 2019/08/10 18:16:39 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>

// int		main(void)
// {
// 	int   aRegularInt     = 64;
// 	// short aShortInt       = 64;
// 	char  aReallyShortInt = 64;

// 	printf( "aRegularInt     = %d\n",   aRegularInt );
// 	// printf( "aShortInt       = %hd\n",  aShortInt );
// 	printf( "aReallyShortInt = %hhd\n", aReallyShortInt );
// 	printf( "aReallyShortInt = %c\n",   aReallyShortInt );

// 	return (0);
// }

int		main(void)
{
	char				c = 65;
	// unsigned char	c = 65;

	printf("c:\t%c\n\n", c);

	printf("d:\t%d\n", c);
	printf("hhd:\t%hhd\n\n", c);
	
	printf("i:\t%i\n", c);
	printf("hhi:\t%hhi\n\n", c);
	
	printf("o:\t%o\n", c);
	printf("hho:\t%hho\n\n", c);
	
	printf("u:\t%u\n", c);
	printf("hhu:\t%hhu\n\n", c);
	
	printf("x:\t%x\n", c);
	printf("hhx:\t%hhx\n\n", c);
	
	printf("X:\t%X\n", c);
	printf("hhX:\t%hhX\n", c);

	return (0);
}

// int		main(void)
// {
// 	printf("a\n");
// 	while (1);
// 	return (0);
// }

// int		main(void)
// {
// 	/* initialisation */
// 	char		string[]="0123456789abcdef";       // array of characters corresponding to numbers from 0 to 15
// 	int			value;
// 	uint16_t	ptr;

// 	/* these lines go inside the loop */
// 	ptr = (uint16_t) &value;                // store 16-bit address of 'value'
// 	putchar( string[ (ptr >> 12) & 0xf ] ); // Write out highest 4-bits of memory address
// 	putchar( string[ (ptr >>  8) & 0xf ] );
// 	putchar( string[ (ptr >>  4) & 0xf ] );
// 	putchar( string[ (ptr >>  0) & 0xf ] ); // Write out lowest 4-bits of memory address

// 	printf("\n%p\n", &value);
// }
// int		main(void)
// {
// 	long	p = 0;
// 	int			n = 5;

// 	p = (long)&n;
// 	printf("%p\n", &n);
// 	printf("0x%lx\n", p);
// 	return (0);
// }
