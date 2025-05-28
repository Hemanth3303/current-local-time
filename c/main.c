#include <stdio.h>
#include <time.h>

int main(void) {
	time_t now = time(0);
	struct tm* timeInfo;

	timeInfo = localtime(&now);

	char time24Format[50];
	char time12Format[50];

	strftime(time24Format, sizeof(time24Format), "24 Hour Format: %Y-%m-%d %H:%M:%S\n", timeInfo);
	strftime(time12Format, sizeof(time12Format), "12 Hour Format: %Y-%m-%d %I:%M:%S %p\n", timeInfo);

	printf("%s%s", time24Format, time12Format);
	return 0;
}