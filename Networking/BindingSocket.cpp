#include "BindingSocket.hpp"

int WSS::BindingSocket::connect_to_network(int sock, struct sockaddr_in address){

    return bind(sock, (struct sockaddr *) &address, sizeof(address));

}