#include "server.hpp"

#include <iostream>

namespace yace {
    namespace server {
        void Server::receive() {
            std::cout << "Receiving: " << std::endl;
            this->_socket.async_receive_from(
                boost::asio::buffer(this->_recv_buffer, 1024),
                this->_endpoint,
                [this](boost::system::error_code e, std::size_t bytes_recvd) {
                    if (!e && bytes_recvd > 0) {
                        this->send(bytes_recvd);
                    } else {
                        this->receive();
                    }
                }
            );
        }

        void Server::send(std::size_t length) {
            std::cout << "Sending: " << std::endl;
            this->_socket.async_send_to(
                boost::asio::buffer(this->_recv_buffer, length),
                this->_endpoint,
                [this](boost::system::error_code, std::size_t)  {
                    this->receive();
                }
            ); 
        }
    }
}
