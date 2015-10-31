#ifndef EDITOR_HPP
#define EDITOR_HPP

#include <string>
#include <vector>
#include <memory>

#include "window.hpp"

namespace yace {
    /*
     * The Editor class is the one object which contains everysthing related.
     * There is only one Editor per application. That's why it's realized as a
     * singleton
     */
    class Editor {
        private:
            static std::unique_ptr<Editor> _instance;
            
            std::vector<std::unique_ptr<Window>> _windows;

        private:
            explicit Editor();
                
        public:
            static Editor* getInstance() {
                if (!Editor::_instance) {
                    Editor::_instance = std::unique_ptr<Editor>(new Editor);
                }
                return Editor::_instance.get();
            }

            std::vector<std::unique_ptr<Window>>& getWindows() ;
            void newWindow();
    };
}
#endif //EDITOR_HPP
