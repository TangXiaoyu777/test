#include <stdio.h>
int isprimenumber(int m){
    int i;
    for(i=2;i<m;i++){
        if (m%i==0){
            break;
        }
    }
    if (i==m){
        return 1;
    }else{
        return 0;
    }
    }




int main(){
    int isprimenumber(int m);
    int j;


    for(j=101;j<=200;j++){
        if(isprimenumber(j)){
        printf("%d ",j);
    }

}
}
