#include <boost/python.hpp>

#include <editor.hpp>

namespace yace {
    BOOST_PYTHON_MODULE(yace_py) {
        boost::python::class_<Editor>(
            "Editor", 
            boost::python::init<std::string>()
        ).def("getName", &Editor::getName);
    }
}
