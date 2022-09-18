#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <termios.h>
#include <time.h>
#include <pthread.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <linux/types.h>
#include "wifi.h"

#define BT_CTRL "/dev/rdacombo"


int main(int argc, char *argv[])
{
  int fd = -1;
  fd = open(BT_CTRL, O_RDWR);
  if (fd < 0) {
		return fd;
  } else {
	  ioctl(fd, RDA_WIFI_POWER_OFF_IOCTL);
	  ioctl(fd, RDA_WIFI_STA_MODE_IOCTL);
	  ioctl(fd, RDA_WIFI_POWER_ON_IOCTL);
    close(fd); 
  }
  return 0;
}
