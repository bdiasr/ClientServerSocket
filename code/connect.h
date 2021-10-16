struct in_addr{};

struct sockaddr_in{
    //Familia do endereço
    short int sin_family;
    //número da porta
    unsigned short int sin_port; 
    //IP do HOST
    struct in_addr sin_addr;
    //Zera a estrutura, algum espaço com struct sockaddr
    unsigned char sin_zero[8];
};

struct ips{
    char serverIP[15] = "000.000.00.0";
    char clientIP[15] = "000.000.00.0";
};



