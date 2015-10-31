#include "window.hpp"

namespace yace {
    Window::Window() {
        this->newBuffer();
    }

    std::vector<std::unique_ptr<Buffer>>& Window::getBuffers() {
        return this->_buffers; 
    }

    void Window::newBuffer() {
        this->_buffers.push_back(std::unique_ptr<Buffer>(new Buffer()));
    }
}
