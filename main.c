#include <stdio.h>

int main(void) {
    int i;
    for(i=1; i<=20; i++)
        printf("circonferenza ed area con raggio %d:\n\tcirconferenza :%f\n\tarea:%f\n",i,2*pigreco*i,pigreco*(int)pow(i,2));
    return 0;
}
