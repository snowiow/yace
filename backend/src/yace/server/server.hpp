#ifndef SERVER_HPP
#define SERVER_HPP

#include<boost/asio.hpp>

#include "types.hpp"

namespace yace {
    namespace server {
        class Server {
            private:
                boost::asio::ip::udp::socket _socket;
                boost::asio::ip::udp::endpoint _endpoint;
                std::array<char, 256> _recv_buffer;

            public:
                Server(boost::asio::io_service& ioService, u16_t port) : 
                    _socket(
                            ioService, 
                            boost::asio::ip::udp::endpoint(
                                boost::asio::ip::udp::v4(), 
                                port
                                )
                           ) 
            {
                //this->_startReceive();    
            }


            void startReceive();
        };
    }
}
#endif //SERVER_HPP
