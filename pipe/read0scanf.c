#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <unistd.h>
//input redirection
int main(int argc, char *argv[]) {
	int fd, n, i;
	char buf[128];

	close(0);  //close std i/p (if scanf used it wont work )
	fd = open(argv[1], O_RDONLY);  //open will return least possible fd here it is 0
	if(fd == -1) {
		perror("open failed");
		return errno;
	}
	scanf("%s", buf);  //scanf will take i/p from file 
	printf("%s\n", buf);
	return 0;
}
