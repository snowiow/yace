#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <vector>
#include <memory>

#include "buffer.hpp"

namespace yace {
    /**
     * An editor conatins a number of windows, which can have tabs and buffers
     */
    class Window {
        private:
            std::vector<std::unique_ptr<Buffer>> _buffers;

        public:
            explicit Window();
            std::vector<std::unique_ptr<Buffer>>& getBuffers();
            void newBuffer();
    };
}
#endif //WINDOW_HPP
