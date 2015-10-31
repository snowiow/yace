#include "window.hpp"

namespace yace {
    Window::Window() {
        this->newBuffer();
    }

    std::vector<Buffer>& Window::getBuffers() {
        return this->_buffers; 
    }

    void Window::newBuffer() {
        this->_buffers.push_back(Buffer());
    }
}
