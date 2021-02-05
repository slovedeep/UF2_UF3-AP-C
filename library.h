#ifndef LIBRARY_H_
#define LIBRARY_H_

struct date{
	int day;
	int month;
	int year;
	int hour;
	int minutes;
	int seconds;
};

struct registry{
	char name[40];
	char address[40];
	long phoneNumber;
	struct date stDate;
};

#endif /* LIBRARY_H_ */
void openFile(char []);
void getData(struct registry *);
void getTime(struct registry *);
void printData(struct registry);
