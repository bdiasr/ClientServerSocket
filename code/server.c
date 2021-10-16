#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#define PORT 80


#include "connect.h"


/*
gcc -o main *.c
./main
*/
int main(){
    int Socket; 

    struct sockaddr_in endereco; 

    Socket = socket(AF_INET, SOCK_STREAM, 0);
    if(Socket == -1){
        printf('Socket não pode ser criado');
        return 0;
    }

    local.sin_family = AF_INET;
    local.sin_port = htons(MINHA_PORTA);
    local.sin_addr.s_addr = inet_addr();
    bind(Meusocket,(struct sockaddr *)&local,sizeof(struct sockaddr));

}