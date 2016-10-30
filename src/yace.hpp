#ifndef YACE_HPP
#define YACE_HPP

#include <memory>

#include "iui.hpp"

class Yace {
    private:
        std::unique_ptr<IUi> _ui;

    public:
        Yace(IUi* ui);
        void run();
};
#endif // YACE_HPP
