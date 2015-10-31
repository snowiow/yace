#include "editor.hpp"

namespace yace {
    std::unique_ptr<Editor> Editor::_instance;

    Editor::Editor() {
        this->newWindow();
    }

    std::vector<Window>& Editor::getWindows() {
        return this->_windows;
    }

    void Editor::newWindow() {
        this->_windows.push_back(Window());
    }
}
