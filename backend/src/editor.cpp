#include "editor.hpp"

namespace yace {
    std::unique_ptr<Editor> Editor::_instance;

    Editor::Editor() {
        this->newWindow();
    }

    Window* Editor::getWindow(u8_t i) {
        return this->_windows[i].get();
    }

    void Editor::newWindow() {
        this->_windows.emplace_back(new Window());
    }
}
