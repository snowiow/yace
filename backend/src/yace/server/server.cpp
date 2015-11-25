#include "server.hpp"

#include <iostream>

namespace yace {
    namespace server {
        void Server::startReceive() {
            while (true) {
                std::cout << "lauschen..." << std::endl;
                this->_socket.receive_from(boost::asio::buffer(this->_recv_buffer), this->_endpoint);
                this->_socket.send_to(boost::asio::buffer("Der Server sagt hallo", 200), this->_endpoint);
            }
        }
    }
}
