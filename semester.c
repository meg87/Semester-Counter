#include <stdio.h>
#include <math.h>
#include <time.h>

int week(int now, int start)
{
	return floor((now-start)/(60*60*24*7));
}

int percent(int now, int start, int end)
{
	return ((now-start)/(end-start)*100);
}

int main(int argc, char *argv[])
{
	time_t now = time (NULL);

	if (strcmp(argv[1], "-w", 2) == 0)
		printf("Week number is %d\n", week(now, (int)strtoul(argv[2], 0, 0)));
	else if (strcmp(argv[1], "-p", 2) == 0)
		printf("%d%s of the semester is spend\n", percent(now, (int)strtoul(argv[2], 0, 0), (int)strtoul(argv[3], 0, 0)), "%");
	else
		printf("Sorry, command not found !\n");
}
