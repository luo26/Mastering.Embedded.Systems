/*
 * lab5.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Muhammad
 */
#include <stdio.h>

void main()
{

	for (int j=0; j<10 ;j++){
		for (int i=0 ; i<10 ;i++) {
			if (j>i)
				continue;
			printf("%d ", i);

		}
		printf ("\n");

	}
}
