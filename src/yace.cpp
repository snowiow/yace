#include "yace.hpp"
#include "iui.hpp"

Yace::Yace(IUi* ui) : _ui(ui) { }

void Yace::run() {
    int ch;
    while ((ch = _ui->get_char())) {
        if (ch == 'q')
            break;
        _ui->print_char(ch);
    }
}
