#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int		main(void)
{
	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< flags
	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< - (left justify)
	// printf("%%d:%d\n", 123);
	// printf("%%-6d:%-6d\n", 123);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> - (left justify)

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< # (%o %x %X: 0 prefix | %f: always show dp)
	// printf("%%o:%o\n", 100);
	// printf("%%#o:%#o\n", 100);
	// printf("%%x:%x\n", 100);
	// printf("%%#x:%#x\n", 100);
	// printf("%%X:%X\n", 100);
	// printf("%%#X:%#X\n", 100);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> # (%o %x %X: 0 prefix | %f: always show dp)

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< + (alwasys show sign)
	// printf("%%d:%d\n", 123);
	// printf("%%+d:%+d\n", 123);
	// printf("%%d:%d\n", -123);
	// printf("%%+d:%+d\n", -123);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> + (alwasys show sign)

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< (space) (print space if no sign)
	// printf("%%d:%d\n", 123);
	// printf("%% d:% d\n", 123);
	// printf("%% d:% d\n", -123);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> (space) (print space if no sign)

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 0 (zero pad)
	// printf("%%d:%d\n", 123);
	// printf("%%03d:%03d\n", 123);
	// printf("%%06d:%06d\n", 123);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 0 (zero pad)
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> flags

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width
	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< (number) (if val < width => space pad)
	// printf("%%d:%d\n", 1234);
	// printf("%%4d:%4d\n", 1234);
	// printf("%%8d:%8d\n", 1234);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> (number) (if val < width => space pad)

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< * (pass int arg to specify width before target arg)
	// printf("%%d:%d\n", 123);
	// printf("%%*d(6):%*d\n", 6, 123);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> * (pass int arg to specify width before target arg)
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision
	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< .number (d, i, o, u, x, X: minimum num of dgts to print | f: num of dgts after dp)
	// printf("%%d:%d\n", 123);
	// printf("%%.1d:%.1d\n", 123);
	// printf("%%.6d:%.6d\n", 123);
	// printf("%%d:%d\n", 0);
	// printf("%%.0d:%.0d\n", 0);
	// printf("%%.6d:%.6d\n", -123);

	// printf("%%.12f:%.12f\n", 123.0);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> .number (d, i, o, u, x, X: minimum num of dgts to print | f: num of dgts after dp)

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< .* (pass int arg to specify precision before target arg)
	// printf("%%.*d(12):%.*d\n", 12, 123);
	// printf("%%.*f(12):%.*f\n", 12, 123.0);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> .* (pass int arg to specify precision before target arg)
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision
	return (0);
}
