#ifndef EDITOR_HPP
#define EDITOR_HPP

#include <string>

namespace yace {
    class Editor {
        private:
            std::string name;
        public:
            explicit Editor(std::string name) : name(name) {
            }

            std::string getName();
    };
}
#endif //EDITOR_HPP

