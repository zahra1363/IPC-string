 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <unistd.h>
 #include <fcntl.h>

 #define message 1024
 char * myfifo = (char*)"/home/solmaz/Documents/intership c++ code/myfifo";

 int main(int argc, char **argv)
 {
    int ret = mkfifo(myfifo, 0666);
     char line[message];
     int pipe;
     printf("Enter your message: \n");
     fgets(line, message, stdin);
     pipe = open(myfifo, O_WRONLY );
     write(pipe, line, strlen(line));
     close(pipe);
     return 0;
 }