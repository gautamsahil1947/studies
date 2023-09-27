/*
 * OPEN SYSTEM CALL 
 *
 * FUNCTIONALITIES
 *      if the file exists
 *          open that file, and start reading the values(up to you)
 *
 *      if the file does not exist
 *          it will create that file, and then you can start your operations
 *
 * SYNTAX
 *
 *
 *      O_RDONLY --> open in read only mode
 *      O_WRONLY --> open in wrie only mode
 *      O_RDwR   --> both read and write mode
 *      O_APEND  --> append only mode
 *      O_CREAT --> mode used to create a file if it doesn't exist
 *      #include <fcntl.h>
 *     
 *      #include <sys/types.h>
 *      #include <sys/stat.h> --> these two define the modes
 *
 *      If the file already exists --> int open(const char *pathname, int flags);
 *          open ("apple.txt", O_RDONLY);
 *          it returns the file descripter value that is associated with apple.txt
 *
 *          returns file descriptor if file exists (1, and 2 are reserved i guess for stdout and stderr)
 *          else returns -1
 *
 *      If the file doesn't exist --> int open(const char *pathname, int flags, mode_t mode); 
 *          // here mode means permissions for the file
 *          open("apple.txt", O_CREAT|O_RDRW, 0777);
 *
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int n;
    n = open("/home/sahil/.bash_history", O_RDONLY);
    printf("returned file descriptror: %i\n", n);


    int m;
    m = open("/home/sahil/.bash_history", O_RDONLY);
    printf("returned file descriptror: %i\n", m);
    // so the same file can be opened as read only in multiple
    // file descriptor
}
