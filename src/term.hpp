#ifndef TERM_HPP
#define TERM_HPP

#include "iui.hpp"

class Term: public IUi {
    public:
        explicit Term();
        virtual ~Term();

        virtual int get_char();

        virtual void print_char(int);
};
#endif //TERM_HPP
