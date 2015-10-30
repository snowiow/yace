#include "editor.hpp"

namespace yace {
    Editor::Editor() {
        this->_windows.push_back(Window());
    }

    const std::vector<Window>& Editor::getWindows() const {
        return this->_windows;
    }
}
