#ifndef TERM_HPP
#define TERM_HPP

#include "iui.hpp"

class Term: public IUi {
    public:
        Term();
        virtual ~Term();

        virtual int get_char();

        virtual void print_char(int c);
};
#endif //TERM_HPP
