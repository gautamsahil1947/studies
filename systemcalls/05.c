#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main() {
    // read characters from an existing file, 
    // and write them to a non existing file

    int fd1, fd2, n;
    char buffer[25];

    fd1 = open("/home/sahil/.bash_history", O_RDONLY);
    n = read(fd1, buffer, 25);

    fd2 = open("/home/sahil/written.txt", O_CREAT|O_WRONLY, 0777);
    int m = write(fd2, buffer, n);
    write(1, buffer, n);
}
