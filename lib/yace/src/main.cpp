#include <boost/asio.hpp>
#include <iostream>

#include "server.hpp"

int main() {
    boost::asio::io_service ioService;
    yace::server::Server server(ioService, 13);
    ioService.run();

    return 0;
}
