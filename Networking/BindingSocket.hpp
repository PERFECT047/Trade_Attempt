#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include<stdio.h>

#include "Socket.hpp"

namespace WSS{
    class BindingSocket: public Socket{

        public:

        BindingSocket(int domain, int service, int protocol, int port, u_long interface): Socket(domain, service, protocol, port, interface);

        int connect_to_network(int sock, struct sockaddr_in address);

    };
}

#endif