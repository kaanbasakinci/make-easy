#ifndef _FOO_HPP_
#define _FOO_HPP_

#include <iostream>

class FOO
{
private:
    const std::string INTRO = "Generic C source code MAKEFILE.\n"
                         "By default it uses specific file hierarchy, you may need to change rules or variables.\n"
                         "Those with an exclamation point (!) are mandatory fields.\n\n"
                         "For detailed information https://github.com/kaanbasakinci/make-easy.\n";
public:
    FOO();
    ~FOO();
};

#endif