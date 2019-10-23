/*
1. Check core dump enabled:

ulimit -a
2. One of the lines should be :

core file size          (blocks, -c) unlimited
3. If not :

gedit ~/.bashrc and add ulimit -c unlimited to end of file and save, re-run terminal.

4. Build your application with debug information :

In Makefile -O0  -g

5. Run application that create core dump (core dump file with name ‘core’ should be created near application_name file):

./application_name
6. Run under gdb:

gdb application_name core
*/

#include <string.h>
#include <stdio.h>

int main(){
    char *val;
    //Incorrect
    memset(val, '\0', sizeof(val));
    //Correct
    //memset(&val, '\0', sizeof(val));
    return 0;
}
