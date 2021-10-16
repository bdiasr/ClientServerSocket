
struct in_addr{};

struct sockaddr_in
{
    //Familia do endereço
    short int sin_family;

    //número da porta
    unsigned short int sin_port; 

    //IP do HOST
    struct in_addr sin_addr;

    /*
    Zera a estrutura, algum espaço com struct sockaddr
    */
    unsigned char sin_zero[8];
    
};
