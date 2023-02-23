#include "main.h
/* Here is the Function which check if the string contains only: */
        /* abcdefghijklmnopqrstuvwxyz and ABCDEFGHIJKLMNOPQRSTUVWXYZ */
    int checkName(char *s){
        int i,length;
        length = (strlen(s));

        for (i=0;i<length;i++){
            if(s[i] == '0' || s[i] <= '9'){
                return 1;
            }
        }
        return 0;
    }

    int main(){
        char name[]= "Michi";
        int check;

        if((check = checkName(name)) == 0){
            printf("\n\n\t\t\tYour name is:\t%s\n\n",name);
        }else{
            printf("\n\n\t\t\tWrong name:\t%s\n\n",name);
        }

        return 0;
    }
