#include "window.hpp"

namespace yace {
    Window::Window() {
        this->newBuffer();
    }

    Buffer* Window::getBuffer(u8_t i) {
        return this->_buffers.at(i).get(); 
    }

    void Window::newBuffer() {
        this->_buffers.emplace_back(new Buffer());
    }
}
