#include "editor.hpp"

namespace yace {
    std::unique_ptr<Editor> Editor::_instance;

    Editor::Editor() {
        this->_windows.push_back(Window());
    }

    const std::vector<Window>& Editor::getWindows() const {
        return this->_windows;
    }
}
