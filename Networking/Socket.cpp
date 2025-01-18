#include "Socket.hpp"

//Default Cunstructor

WSS::Socket::Socket(int domain, int service, int protocol, int port, u_long interface){

    //Define address structure

    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);

    //Establishing socket

    sock = socket(domain, service, protocol);
    test_connection(sock);

    //Establishing network connection

    connection = connect_to_network(sock, address);
    test_connection(connection);

}

//Connection checker

void WSS::Socket::test_connection(int item_to_test){

    if(item_to_test < 0){
        perror("Failed to connect...");
        exit(EXIT_FAILURE);
    }

}

//Getters

struct sockaddr_in WSS::Socket::get_address(){
    return address;
}

int WSS::Socket::get_sock(){
    return sock;
}

int WSS::Socket::get_connection(){
    return connection;
}