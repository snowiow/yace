#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <vector>
#include <memory>

#include "types.hpp"
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

    /**
     * Returns a pointer to the buffer with the specified index
     * @param i the given index
     * @return The buffer under the given index
     */
    Buffer* getBuffer(u8_t i);

    void newBuffer();
};
}
#endif  // WINDOW_HPP
