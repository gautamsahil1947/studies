/*
 * LSEEK
 *      is basically used to reposition the cursor
 *
 * off_t lseek(int fd, off_t offset, in whence)
 *
 *      -> wence (three types)
 *          SEEK_CUR --> for seeking from the current position
 *          SEEK_END --> for going to end -->to start reading from the end, use negative value
 *          SEEK_SET --> from the beginning
 */
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main() {
    int n;
    n = open("/home/sahil/append.txt", O_RDONLY);

    // some error handling
    if (n == -1) {
        printf("File doesn't exist\n");
        return 1;
    }
    char arr[20];

    int t;
    t = read(n, arr, 4);
    write(1, arr, t);

    lseek(n, 4, SEEK_CUR); // if -4 is used, then it goes 4 characters backwords


    t = read(n, arr, 4);
    write(1, arr, t);
    
}
