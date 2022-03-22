#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <unistd.h>
//output redirection
int main(int argc, char *argv[]) {
	int fd, n, i;
	char buf[128];

	close(1); //stdip closed
	fd = open(argv[1], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);  //fd = 1
	if(fd == -1) {
		perror("open failed");
		return errno;
	}
	printf("abhijit\n"); //printf return op at 1 so here printf's op will go to file
	return 0;
}
