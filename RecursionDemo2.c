#include <stdio.h>

void batman(int venom) // 5
{

    printf(" %d ", venom); // 7 6 5 4 3 2 1
    venom--;               // 5
    if (venom != 0)
    {
        batman(venom); //
    }
}


void superman(int venom) // s(7)
{

    venom--;               // 5
    if (venom != 0)
    {
        superman(venom); //
    }
    printf(" %d ",venom);
}

void antman(int venom){
        printf(" %d ",venom);
        venom--;
        if(venom!=0){
            antman(venom);
        }
        printf(" %d ",venom); 
}



int main()
{

    antman(4);
    return 0;
}


//s(7):6{pf:6}  
    //s(6):5{pf:5}
        //s(5):4 