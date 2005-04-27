#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <reent.h>
#include <errno.h>
#undef errno
extern int errno;

#include "iosupp.h"

int dvd_open_f(struct _reent *r,const char *path,int flags,int mode);
int dvd_close_f(struct _reent *r,int fd);
int dvd_write_f(struct _reent *r,int fd,const char *ptr,int len);
int dvd_read_f(struct _reent *r,int fd,char *ptr,int len);

const devoptab_t dotab_dvd = {"dvd",dvd_open_f,dvd_close_f,dvd_write_f,dvd_read_f,NULL,NULL};

int dvd_open_f(struct _reent *r,const char *path,int flags,int mode)
{
	return -1;
}

int dvd_close_f(struct _reent *r,int fd)
{
	return -1;
}

int dvd_write_f(struct _reent *r,int fd,const char *ptr,int len)
{
	return -1;
}

int dvd_read_f(struct _reent *r,int fd,char *ptr,int len)
{
	return -1;
}


