 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <unistd.h>
 #include <fcntl.h>

 #define MAX_BUF 1024
char * myfifo = (char*)"/home/solmaz/Documents/intership c++ code/myfifo";

 int main(int argc, char **argv)
 {
     int fd;
   
     char buf[MAX_BUF];
     fd = open(myfifo, O_RDONLY);
     read(fd, buf, MAX_BUF);
     printf("recieved message is :%s\n", buf);
     close(fd);
     return 0;
 }