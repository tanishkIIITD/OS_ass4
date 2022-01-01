
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int urandomFD = open("/dev/urandom", O_RDONLY);
    if (urandomFD < 0)
    {
        printf("There is some error in opening urandom\n");
    }
    else
    {
    // printf("HELLOOOO \n");

        char randomData[8];
        int result = read(urandomFD, randomData, sizeof(randomData));
        if (result < 0)
        {
            // something went wrong
        }
        else{
            printf("\nThis is the random data: %s \n", randomData);

        }
    }
    close(urandomFD);
}
