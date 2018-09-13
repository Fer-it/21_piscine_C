# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

int main(void)
{
	char buf[1];

	read(0, buf, 1);
	return (0);
}
