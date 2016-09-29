#include "fcgi_stdio.h" /* fcgi library; put it first*/

#include <stdlib.h>
#include <string.h>
#include <sys/sysinfo.h>
#include <utmp.h>
#include <errno.h>
#include <syslog.h>

void initialize(void)
{
}

int main(void)
{
    /* Initialization. */  
    initialize();

    /* Response loop. */
    while (FCGI_Accept() >= 0)   {

        char *ip = getenv("REMOTE_ADDR");
        if (ip) {
            printf("\n%s\n", ip);
        } else {
            printf("\n");
        }
    }
}

