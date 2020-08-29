#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
int main()
{
	while(1)
	{
		int fd,temp;
		char buff[100] ;
		fd = open("/sys/class/thermal/thermal_zone0/temp", O_RDONLY);
		read(fd,buff,100);
		temp = atoi(buff);	
		printf("temp:%d.%dC\n",temp/1000,temp%1000/100);
		sleep(1);
		close(fd);
        }
        
        return 0;
}


