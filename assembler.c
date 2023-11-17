#include <stdio.h>
#include <math.h>
#include <stdint.h>
#define FILENAME input.txt

// Girilen kodun uzunluğuna göre char arrayi oluşturduk
char karakterizehal[255][255];
int i = 0;
uint8_t Ram[256];
uint8_t AX,BX,CX,DX,DXislemeldesi;

void kontrol(int y){
        if(karakterizehal[y][i]=='H'){
            if(karakterizehal[y][i+4]=='A'){
                if(karakterizehal[y][i+7]=='A'){
                    //Değişkenin değerinde herhangi bir değişiklik olmaz.
                }else if(karakterizehal[y][i+7]=='B'){
                    AX=BX;
                }else if(karakterizehal[y][i+7]=='C'){
                    AX=CX;
                }else if(karakterizehal[y][i+7]=='D'){
                    AX=DX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    AX=Ram[toplam];
                    toplam = 0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    AX=toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='B'){
                if(karakterizehal[y][i+7]=='B'){
                    //Değişkenin değerinde herhangi bir değişiklik olmaz.
                }else if(karakterizehal[y][i+7]=='A'){
                    BX=AX;
                }else if(karakterizehal[y][i+7]=='C'){
                    BX=CX;
                }else if(karakterizehal[y][i+7]=='D'){
                    BX=DX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    BX=Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    BX=toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='C'){
                if(karakterizehal[y][i+7]=='C'){
                    //Değişkenin değerinde herhangi bir değişiklik olmaz.
                }else if(karakterizehal[y][i+7]=='A'){
                    CX=AX;
                }else if(karakterizehal[y][i+7]=='B'){
                    CX=BX;
                }else if(karakterizehal[y][i+7]=='D'){
                    CX=DX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    CX=Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    CX=toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='D'){
                if(karakterizehal[y][i+7]=='D'){
                    //Değişkenin değerinde herhangi bir değişiklik olmaz.
                }else if(karakterizehal[y][i+7]=='A'){
                    DX=AX;
                }else if(karakterizehal[y][i+7]=='B'){
                    DX=BX;
                }else if(karakterizehal[y][i+7]=='C'){
                    DX=CX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='['){
                uint8_t toplam=0;
                int z = i+5;
                while(karakterizehal[y][z+1]!=']'){
                    z++;
                }
                int x = 0;
                for(int u=z;u>=i+5;u--){
                    toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                    x++;
                }
                x=0;
                if(karakterizehal[y][z+3]=='A'){
                    Ram[toplam]=AX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='B'){
                    Ram[toplam]=BX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='C'){
                    Ram[toplam]=CX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='D'){
                    Ram[toplam]=DX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }
                toplam=0;
            }
        }//HAREKET
        else if(karakterizehal[y][i]=='T'){
            if(karakterizehal[y][i+4]=='A'){
                if(karakterizehal[y][i+7]=='A'){
                    AX=AX+AX;
                }else if(karakterizehal[y][i+7]=='B'){
                    AX=AX+BX;
                }else if(karakterizehal[y][i+7]=='C'){
                    AX=AX+CX;
                }else if(karakterizehal[y][i+7]=='D'){
                    AX=AX+DX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    AX=AX+Ram[toplam];
                    toplam = 0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    AX=AX+toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='B'){
                if(karakterizehal[y][i+7]=='B'){
                    //Değişkenin değerinde herhangi bir değişiklik olmaz.
                }else if(karakterizehal[y][i+7]=='A'){
                    BX=BX+AX;
                }else if(karakterizehal[y][i+7]=='C'){
                    BX=BX+CX;
                }else if(karakterizehal[y][i+7]=='D'){
                    BX=BX+DX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    BX=BX+Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    BX=BX+toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='C'){
                if(karakterizehal[y][i+7]=='C'){
                    //Değişkenin değerinde herhangi bir değişiklik olmaz.
                }else if(karakterizehal[y][i+7]=='A'){
                    CX=CX+AX;
                }else if(karakterizehal[y][i+7]=='B'){
                    CX=CX+BX;
                }else if(karakterizehal[y][i+7]=='D'){
                    CX=CX+DX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    CX=CX+Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    CX=CX+toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='D'){
                if(karakterizehal[y][i+7]=='D'){
                    //Değişkenin değerinde herhangi bir değişiklik olmaz.
                }else if(karakterizehal[y][i+7]=='A'){
                    DX=DX+AX;
                }else if(karakterizehal[y][i+7]=='B'){
                    DX=DX+BX;
                }else if(karakterizehal[y][i+7]=='C'){
                    DX=DX+CX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=DX+Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=DX+toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='['){
                uint8_t toplam=0;
                int z = i+5;
                while(karakterizehal[y][z+1]!=']'){
                    z++;
                }
                int x = 0;
                for(int u=z;u>=i+5;u--){
                    toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                    x++;
                }
                x=0;
                if(karakterizehal[y][z+3]=='A'){
                    Ram[toplam]=AX+Ram[toplam];
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='B'){
                    Ram[toplam]=BX+Ram[toplam];
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='C'){
                    Ram[toplam]=CX+Ram[toplam];
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='D'){
                    Ram[toplam]=DX+Ram[toplam];
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }
                toplam=0;
            }
        }//TOPLAMA
        else if(karakterizehal[y][i]=='C' && karakterizehal[y][i+1]=='R'){
            if(karakterizehal[y][i+4]=='A'){
                if(karakterizehal[y][i+7]=='A'){
                    AX=AX*AX;
                }else if(karakterizehal[y][i+7]=='B'){
                    AX=AX*BX;
                }else if(karakterizehal[y][i+7]=='C'){
                    AX=AX*CX;
                }else if(karakterizehal[y][i+7]=='D'){
                    AX=AX*DX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    AX=AX*Ram[toplam];
                    toplam = 0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    AX=AX*toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='B'){
                if(karakterizehal[y][i+7]=='B'){
                    BX=BX*BX;
                }else if(karakterizehal[y][i+7]=='A'){
                    BX=BX*AX;
                }else if(karakterizehal[y][i+7]=='C'){
                    BX=BX*CX;
                }else if(karakterizehal[y][i+7]=='D'){
                    BX=BX*DX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    BX=BX*Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    BX=BX*toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='C'){
                if(karakterizehal[y][i+7]=='C'){
                    CX=CX*CX;
                }else if(karakterizehal[y][i+7]=='A'){
                    CX=CX*AX;
                }else if(karakterizehal[y][i+7]=='B'){
                    CX=CX*BX;
                }else if(karakterizehal[y][i+7]=='D'){
                    CX=CX*DX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    CX=CX*Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    CX=CX*toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='D'){
                if(karakterizehal[y][i+7]=='D'){
                    DX=DX*DX;
                }else if(karakterizehal[y][i+7]=='A'){
                    DX=DX*AX;
                }else if(karakterizehal[y][i+7]=='B'){
                    DX=DX*BX;
                }else if(karakterizehal[y][i+7]=='C'){
                    DX=DX*CX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=DX*Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=DX*toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='['){
                uint8_t toplam=0;
                int z = i+5;
                while(karakterizehal[y][z+1]!=']'){
                    z++;
                }
                int x = 0;
                for(int u=z;u>=i+5;u--){
                    toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                    x++;
                }
                x=0;
                if(karakterizehal[y][z+3]=='A'){
                    Ram[toplam]=AX*Ram[toplam];
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='B'){
                    Ram[toplam]=BX*Ram[toplam];
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='C'){
                    Ram[toplam]=CX*Ram[toplam];
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='D'){
                    Ram[toplam]=DX*Ram[toplam];
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }
                toplam=0;
            }
        }//CARPMA
        else if(karakterizehal[y][i]=='C' && karakterizehal[y][i+1]=='I'){
            if(karakterizehal[y][i+4]=='A'){
                if(karakterizehal[y][i+7]=='A'){
                    AX=AX-AX;
                }else if(karakterizehal[y][i+7]=='B'){
                    AX=AX-BX;
                }else if(karakterizehal[y][i+7]=='C'){
                    AX=AX-CX;
                }else if(karakterizehal[y][i+7]=='D'){
                    AX=AX-DX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    AX=AX-Ram[toplam];
                    toplam = 0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    AX=AX-toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='B'){
                if(karakterizehal[y][i+7]=='B'){
                    BX=BX-BX;
                }else if(karakterizehal[y][i+7]=='A'){
                    BX=BX-AX;
                }else if(karakterizehal[y][i+7]=='C'){
                    BX=BX-CX;
                }else if(karakterizehal[y][i+7]=='D'){
                    BX=BX-DX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    BX=BX-Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    BX=BX-toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='C'){
                if(karakterizehal[y][i+7]=='C'){
                    CX=CX-CX;
                }else if(karakterizehal[y][i+7]=='A'){
                    CX=CX-AX;
                }else if(karakterizehal[y][i+7]=='B'){
                    CX=CX-BX;
                }else if(karakterizehal[y][i+7]=='D'){
                    CX=CX-DX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    CX=CX-Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    CX=CX-toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='D'){
                if(karakterizehal[y][i+7]=='D'){
                    DX=DX-DX;
                }else if(karakterizehal[y][i+7]=='A'){
                    DX=DX-AX;
                }else if(karakterizehal[y][i+7]=='B'){
                    DX=DX-BX;
                }else if(karakterizehal[y][i+7]=='C'){
                    DX=DX-CX;
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=DX-Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=DX-toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='['){
                uint8_t toplam=0;
                int z = i+5;
                while(karakterizehal[y][z+1]!=']'){
                    z++;
                }
                int x = 0;
                for(int u=z;u>=i+5;u--){
                    toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                    x++;
                }
                x=0;
                if(karakterizehal[y][z+3]=='A'){
                    Ram[toplam]=Ram[toplam]-AX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='B'){
                    Ram[toplam]=Ram[toplam]-BX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='C'){
                    Ram[toplam]=Ram[toplam]-CX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='D'){
                    Ram[toplam]=Ram[toplam]-DX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }
                toplam=0;
            }
        }//CIKARMA
        else if(karakterizehal[y][i]=='B'){
            if(karakterizehal[y][i+4]=='A'){
                if(karakterizehal[y][i+7]=='A'){
                    DX=AX%AX;
                    AX=AX/AX;
                }else if(karakterizehal[y][i+7]=='B'){
                    DX=AX%BX;
                    AX=AX/BX;
                }else if(karakterizehal[y][i+7]=='C'){
                    DX=AX%CX;
                    AX=AX/CX;
                }else if(karakterizehal[y][i+7]=='D'){
                    DXislemeldesi=AX%DX;
                    AX=AX/DX;
                    DX=DXislemeldesi;
                    printf("\nAX/DX Isleminin Eldesi = %d",DXislemeldesi);
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=AX%Ram[toplam];
                    AX=AX/Ram[toplam];
                    toplam = 0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=AX%toplam;
                    AX=AX/toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='B'){
                if(karakterizehal[y][i+7]=='B'){
                    DX=BX%BX;
                    BX=BX/BX;
                }else if(karakterizehal[y][i+7]=='A'){
                    DX=BX%AX;
                    BX=BX/AX;
                }else if(karakterizehal[y][i+7]=='C'){
                    DX=BX%CX;
                    BX=BX/CX;
                }else if(karakterizehal[y][i+7]=='D'){
                    DXislemeldesi=BX%DX;
                    BX=BX/DX;
                    DX=DXislemeldesi;
                    printf("\nBX/DX Isleminin Eldesi = %d",DXislemeldesi);
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=BX%Ram[toplam];
                    BX=BX/Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=BX%toplam;
                    BX=BX/toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='C'){
                if(karakterizehal[y][i+7]=='C'){
                    DX=CX%CX;
                    CX=CX/CX;
                }else if(karakterizehal[y][i+7]=='A'){
                    DX=CX%AX;
                    CX=CX/AX;
                }else if(karakterizehal[y][i+7]=='B'){
                    DX=CX%BX;
                    CX=CX/BX;
                }else if(karakterizehal[y][i+7]=='D'){
                    DXislemeldesi=CX%DX;
                    CX=CX/DX;
                    DX=DXislemeldesi;
                    printf("\nCX/DX Isleminin Eldesi = %d",DXislemeldesi);
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=CX%Ram[toplam];
                    CX=CX/Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=CX%toplam;
                    CX=CX/toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='D'){
                if(karakterizehal[y][i+7]=='D'){
                    DXislemeldesi=DX%DX;
                    DX=DX/DX;
                    printf("\nDX/DX Isleminin Eldesi=%d",DXislemeldesi);
                }else if(karakterizehal[y][i+7]=='A'){
                    DXislemeldesi=DX%AX;
                    DX=DX/AX;
                    printf("\nDX/AX Isleminin Eldesi=%d",DXislemeldesi);
                }else if(karakterizehal[y][i+7]=='B'){
                    DXislemeldesi=DX%BX;
                    DX=DX/BX;
                    printf("\nDX/BX Isleminin Eldesi=%d",DXislemeldesi);
                }else if(karakterizehal[y][i+7]=='C'){
                    DXislemeldesi=DX%CX;
                    DX=DX/CX;
                    printf("\nDX/CX Isleminin Eldesi=%d",DXislemeldesi);
                }else if(karakterizehal[y][i+7]=='['){
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DXislemeldesi=DX%Ram[toplam];
                    DX=DX/Ram[toplam];
                    printf("\nDX/RAM[%d] Isleminin Eldesi=%d",toplam,DXislemeldesi);
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DXislemeldesi=DX%toplam;
                    DX=DX/toplam;
                    printf("\nDX/%d Isleminin Eldesi=%d",toplam,DXislemeldesi);
                    toplam=0;
                }
            }else if(karakterizehal[y][i+4]=='['){
                uint8_t toplam=0;
                int z = i+5;
                while(karakterizehal[y][z+1]!=']'){
                    z++;
                }
                int x = 0;
                for(int u=z;u>=i+5;u--){
                    toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                    x++;
                }
                x=0;
                if(karakterizehal[y][z+3]=='A'){
                    DX=Ram[toplam]%AX;
                    Ram[toplam]=Ram[toplam]/AX;
                    printf("\nRAM[%d]=%d ve Bolumun Eldesi=%d\n",toplam,Ram[toplam],DX);
                }else if(karakterizehal[y][z+3]=='B'){
                    DX=Ram[toplam]%BX;
                    Ram[toplam]=Ram[toplam]/BX;
                    printf("\nRAM[%d]=%d ve Bolumun Eldesi=%d\n",toplam,Ram[toplam],DX);
                }else if(karakterizehal[y][z+3]=='C'){
                    DX=Ram[toplam]%CX;
                    Ram[toplam]=Ram[toplam]/CX;
                    printf("\nRAM[%d]=%d ve Bolumun Eldesi=%d\n",toplam,Ram[toplam],DX);
                }else if(karakterizehal[y][z+3]=='D'){
                    DXislemeldesi=Ram[toplam]%DX;
                    Ram[toplam]=Ram[toplam]/DX;
                    printf("\nRAM[%d]=%d ve Bolumun Eldesi=%d\n",toplam,Ram[toplam],DXislemeldesi);
                }
                toplam=0;
            }
        }//BOLME
        else if(karakterizehal[y][i]=='V' && karakterizehal[y][i+1]=='E' && karakterizehal[y][i+2]==' '){
            if(karakterizehal[y][i+3]=='A'){
                if(karakterizehal[y][i+6]=='A'){
                    AX=AX&AX;
                }else if(karakterizehal[y][i+6]=='B'){
                    AX=AX&BX;
                }else if(karakterizehal[y][i+6]=='C'){
                    AX=AX&CX;
                }else if(karakterizehal[y][i+6]=='D'){
                    AX=AX&DX;
                }else if(karakterizehal[y][i+6]=='['){
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    AX=AX&Ram[toplam];
                    toplam = 0;
                }else{
                    uint8_t toplam=0;
                    int z = i+6;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+6;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    AX=AX&toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+3]=='B'){
                if(karakterizehal[y][i+6]=='B'){
                    BX=BX&BX;
                }else if(karakterizehal[y][i+6]=='A'){
                    BX=BX&AX;
                }else if(karakterizehal[y][i+6]=='C'){
                    BX=BX&CX;
                }else if(karakterizehal[y][i+6]=='D'){
                    BX=BX&DX;
                }else if(karakterizehal[y][i+6]=='['){
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    BX=BX&Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+6;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+6;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    BX=BX&toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+3]=='C'){
                if(karakterizehal[y][i+6]=='C'){
                    CX=CX&CX;
                }else if(karakterizehal[y][i+6]=='A'){
                    CX=CX&AX;
                }else if(karakterizehal[y][i+6]=='B'){
                    CX=CX&BX;
                }else if(karakterizehal[y][i+6]=='D'){
                    CX=CX&DX;
                }else if(karakterizehal[y][i+6]=='['){
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    CX=CX&Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+6;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+6;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    CX=CX&toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+3]=='D'){
                if(karakterizehal[y][i+6]=='D'){
                    DX=DX&DX;
                }else if(karakterizehal[y][i+6]=='A'){
                    DX=DX&AX;
                }else if(karakterizehal[y][i+6]=='B'){
                    DX=DX&BX;
                }else if(karakterizehal[y][i+6]=='C'){
                    DX=DX&CX;
                }else if(karakterizehal[y][i+6]=='['){
                    uint8_t toplam=0;
                    int z = i+7;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+7;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=DX&Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+6;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+6;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=DX&toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+3]=='['){
                uint8_t toplam=0;
                int z = i+4;
                while(karakterizehal[y][z+1]!=']'){
                    z++;
                }
                int x = 0;
                for(int u=z;u>=i+4;u--){
                    toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                    x++;
                }
                x=0;
                if(karakterizehal[y][z+3]=='A'){
                    Ram[toplam]=Ram[toplam]&AX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='B'){
                    Ram[toplam]=Ram[toplam]&BX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='C'){
                    Ram[toplam]=Ram[toplam]&CX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='D'){
                    Ram[toplam]=Ram[toplam]&DX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }
                toplam=0;
            }
        }//VE
        else if(karakterizehal[y][i]=='V' && karakterizehal[y][i+1]=='E' && karakterizehal[y][i+2]=='Y'){
            if(karakterizehal[y][i+5]=='A'){
                if(karakterizehal[y][i+8]=='A'){
                    AX=AX|AX;
                }else if(karakterizehal[y][i+8]=='B'){
                    AX=AX|BX;
                }else if(karakterizehal[y][i+8]=='C'){
                    AX=AX|CX;
                }else if(karakterizehal[y][i+8]=='D'){
                    AX=AX|DX;
                }else if(karakterizehal[y][i+8]=='['){
                    uint8_t toplam=0;
                    int z = i+9;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+9;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    AX=AX|Ram[toplam];
                    toplam = 0;
                }else{
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    AX=AX|toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+5]=='B'){
                if(karakterizehal[y][i+8]=='B'){
                    BX=BX|BX;
                }else if(karakterizehal[y][i+8]=='A'){
                    BX=BX|AX;
                }else if(karakterizehal[y][i+8]=='C'){
                    BX=BX|CX;
                }else if(karakterizehal[y][i+8]=='D'){
                    BX=BX|DX;
                }else if(karakterizehal[y][i+8]=='['){
                    uint8_t toplam=0;
                    int z = i+9;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+9;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    BX=BX|Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    BX=BX|toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+5]=='C'){
                if(karakterizehal[y][i+8]=='C'){
                    CX=CX|CX;
                }else if(karakterizehal[y][i+8]=='A'){
                    CX=CX|AX;
                }else if(karakterizehal[y][i+8]=='B'){
                    CX=CX|BX;
                }else if(karakterizehal[y][i+8]=='D'){
                    CX=CX|DX;
                }else if(karakterizehal[y][i+8]=='['){
                    uint8_t toplam=0;
                    int z = i+9;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+9;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    CX=CX|Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    CX=CX|toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+5]=='D'){
                if(karakterizehal[y][i+8]=='D'){
                    DX=DX|DX;
                }else if(karakterizehal[y][i+8]=='A'){
                    DX=DX|AX;
                }else if(karakterizehal[y][i+8]=='B'){
                    DX=DX|BX;
                }else if(karakterizehal[y][i+8]=='C'){
                    DX=DX|CX;
                }else if(karakterizehal[y][i+8]=='['){
                    uint8_t toplam=0;
                    int z = i+9;
                    while(karakterizehal[y][z+1]!=']'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+9;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=DX|Ram[toplam];
                    toplam=0;
                }else{
                    uint8_t toplam=0;
                    int z = i+8;
                    while(karakterizehal[y][z+1]!='\0'){
                        z++;
                    }
                    int x = 0;
                    for(int u=z;u>=i+8;u--){
                        toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                        x++;
                    }
                    x=0;
                    DX=DX|toplam;
                    toplam=0;
                }
            }else if(karakterizehal[y][i+5]=='['){
                uint8_t toplam=0;
                int z = i+6;
                while(karakterizehal[y][z+1]!=']'){
                    z++;
                }
                int x = 0;
                for(int u=z;u>=i+6;u--){
                    toplam = toplam+ ((int)karakterizehal[y][u]-48)*(pow(10,x));
                    x++;
                }
                x=0;
                if(karakterizehal[y][z+3]=='A'){
                    Ram[toplam]=Ram[toplam]|AX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='B'){
                    Ram[toplam]=Ram[toplam]|BX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='C'){
                    Ram[toplam]=Ram[toplam]|CX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }else if(karakterizehal[y][z+3]=='D'){
                    Ram[toplam]=Ram[toplam]|DX;
                    printf("\nRAM[%d]=%d",toplam,Ram[toplam]);
                }
                toplam=0;
            }
        }//VEYA
        else if(karakterizehal[y][i]=='D'){
            if(karakterizehal[y][i+4]=='A'){
                AX= ~AX;
            }else if(karakterizehal[y][i+4]=='B'){
                BX = ~BX;
            }else if(karakterizehal[y][i+4]=='C'){
                CX = ~CX;
            }else if(karakterizehal[y][i+4]=='D'){
                DX = ~DX;
            }
        }//TERS
}

int main() {

    // Kodun çalışması için dosya adının değil dosyanın bulunduğu yerin girilmesi gerekmektedir
    // Örneğin benim bilgisayarımdan çektiğim dosya D:\\denemetxt\\odev.txt adreste bulunuyor.
    // D:\\denemetxt\\odev.txt adresi girdiğim zaman kod sıkıntısız olarak çalışıyor.

    //HRK AX,12
    //HRK BX,3
    //HRK CX,5
    //HRK DX,1
    //HRK [10],BX
    //VE AX,BX
    //VE [10],AX
    //VE CX,1
    //VE DX,[10]
    //DEG AX
    //DEG BX
    //DEG CX
    //DEG DX
    //HRK [10],CX
    //CIK AX,BX
    //CIK [10],BX
    //CIK CX,[10]
    //CIK BX,12
    //HRK AX,12
    //HRK BX,3
    //HRK CX,5
    //HRK DX,1
    //CRP AX,2
    //CRP BX,AX
    //CRP CX,[10]
    //CRP [10],DX
    //BOL AX,2
    //BOL BX,AX
    //BOL CX,[10]
    //BOL [10],AX
    //HRK [10],CX
    //TOP AX,[10]
    //TOP BX,CX
    //TOP [10],DX
    //TOP DX,5
    //

    //Yukarıda verilen kod denenmiştir ve bir hata ile karşılaşılmamıştır.

    printf("Dosyanin bulundugu konum bilgisini giriniz.\n Ornegin : D:\\denemetxt\\odev.txt \n HER KOD SATIRINDAN SONRA ENTER KOYMAYA OZEN GOSTERINIZ. KOD SATIRI KADAR ENTER OLMALIDIR.\n Dosyanin konumunu giriniz :  ");
    char dosya[255] ;
    scanf("%s",&dosya);
    // Dosya konumunu girerek dosyayı programa gösterdik.
    FILE *anatxt = fopen(dosya, "r");
    char s;

    // Dosya bulunamadıysa
    if (anatxt == NULL) {
        printf("Hata! Dosya Bulunamadi. %s", dosya);
        return 1;
    }else {

        // Karakterleri teker teker oku.
        // Girilen kodu char arrayine yaz.
        char tmp;
        int döngücounter=0;
        int counter = 0;
        int counter10 = 0;
        printf("\nDosya icindeki kodun ciktisi : \n");
        while ((tmp = fgetc(anatxt)) != EOF) {
            printf("%c",tmp);
            if (tmp == '\n') {
                // Okunan karakter boşluk, tab veya diğer satıra atlama ise buraya düşer.
                döngücounter++;
                counter++;
                counter10=0;
            } else {
                karakterizehal[counter][counter10] = tmp;
                counter10++;
            }
        }
        printf("\n------------------------------------------------------------------------------------------------------------------------");
        // Karakterize hali yazır.
        printf("\nKomutlarin karakter karakter ayrilmis hali : \n");
        for (int i = 0; i < counter; i++) {
            printf("%s , ", karakterizehal[i]);
        }
        printf("\n------------------------------------------------------------------------------------------------------------------------\n");
        int y =0;

        // Ram'in her adresindeki değer kendi indisine eşittir.
        for(int c=0;c<256;c++){
            Ram[c]=c;
        }

        while(y<döngücounter){
            kontrol(y);
            printf("\n%d.Komut Calistirildiktan Sonra\nAX=%d\nBX=%d\nCX=%d\nDX=%d\n",y+1,AX,BX,CX,DX);
            y++;
        }
        // Dosyayı Kapattık
        fclose(anatxt);
    }
    return 0;
}