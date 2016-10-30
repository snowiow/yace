#ifndef IUI_HPP
#define IUI_HPP

class IUi {
    public:
        virtual ~IUi() {}

        virtual int get_char() = 0;

        virtual void print_char(int c) = 0;
};
#endif //IUI_HPP
