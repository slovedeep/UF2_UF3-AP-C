#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "library.h"

void getData(struct registry *reg)
{
	char ans;

	do
	{
		printf("Nom: \n");
		//fflush(stdout);
		gets(reg->name);
		printf("Adreça: \n");
		//fflush(stdout);
		gets(reg->address);
		do
		{
			printf("Telèfon: \n");
			//fflush(stdout);
			scanf("%ld", &reg->phoneNumber);
		} while (reg->phoneNumber<100000000 || reg->phoneNumber>999999999);
		fflush(stdin);

		getTime(reg);
		


	
		printf("Vols afegir un altre registre? (y/n): \n");
		//fflush(stdout);
		ans = getchar();
		fflush(stdin);

	} while (ans == 'y');
}

void getTime(struct registry *reg){

    struct tm *tp;
	time_t segundos;
	time(&segundos);
	tp = localtime(&segundos);
    reg->stDate.day= tp->tm_mday;
	reg->stDate.month = tp->tm_mon+1;
	reg->stDate.year = tp->tm_year+1900;
	reg->stDate.hour = tp->tm_hour;
	reg->stDate.minutes = tp->tm_min;
	reg->stDate.seconds = tp->tm_sec;

}

void printData(struct registry reg)
{
	printf("%s, %s, %ld, %d/%d/%d %d:%d:%d \n", reg.name, reg.address, reg.phoneNumber, reg.stDate.day, reg.stDate.month, reg.stDate.year, reg.stDate.hour, reg.stDate.minutes, reg.stDate.seconds);
}