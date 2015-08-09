#include <stdio.h>

int main(){
    int tc,count,a;
    unsigned long src,dest,tmp;
    scanf("%d",&tc);
    while(tc >0){
        count = 0;
        a=0;
        scanf("%lu %lu",&src,&dest);
        if (src != dest) {
            tmp = src;
            while(tmp != 1){
                if ((tmp & 1) == 1){
                    a=1;
                }
                tmp = tmp >> 1;
                count++;
                if((tmp == dest) || ((tmp < dest) && (dest%tmp == 0))) break;
                
            }
            if (a!=1){
                count = 0;
                tmp = src;
            }
            while(tmp != dest){
                if (tmp > dest){
                    tmp = tmp >> 1;
                }
                else{
                    tmp = tmp << 1;
                }
                count++;
            }
        }
            

        printf("%d\n",count);
        tc--;
    }
    return 0;
}
