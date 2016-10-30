#include "yace.hpp"

Yace::Yace(IUi* ui) {
    _ui = std::unique_ptr<IUi>(ui);
}

void Yace::run() {
    int ch;
    while ((ch = _ui->get_char())) {
        if (ch == 'q')
            break;
        _ui->print_char(ch);
    }
}
