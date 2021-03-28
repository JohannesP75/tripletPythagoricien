#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*
    Ce programme calcule un triplet pythagoricien
    File creation : 13:31 vendredi 31 juillet 2015 (Paris)
*/

int main(int argc,char** argv){
    int x,y,z;

    switch(argc){
        case 2:
            x=atoi(argv[1]);

            if(x%2==0){
                y=(int)pow((x/2),2)-1;
                z=y+2;
            }else{
                y=((int)pow(x,2)-1)/2;
                z=y+1;
            }

            printf("%d %d %d\n",x,y,z);
            break;
        case 4:
            x=atoi(argv[1]);
            y=atoi(argv[2]);
            z=atoi(argv[3]);
            printf("%d\n",(x*x+y*y)==z*z);
            break;
        default:
            fprintf(stderr,"\tERROR : Not enough arguments\n");
            exit(EXIT_FAILURE);
;    }

    return 0;
}
