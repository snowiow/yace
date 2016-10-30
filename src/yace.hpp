#ifndef YACE_HPP
#define YACE_HPP

#include <memory>

class IUi;

class Yace {
    private:
        std::unique_ptr<IUi> _ui;

    public:
        Yace(IUi* ui);
        void run();
};
#endif // YACE_HPP
