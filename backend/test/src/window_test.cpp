#define BOOST_TEST_MAIN
#include <boost/test/included/unit_test.hpp>

#include "editor.hpp"
#include "window.hpp"

BOOST_AUTO_TEST_SUITE(window)

//Fixture needed for every test
yace::Editor* editor = yace::Editor::getInstance();

BOOST_AUTO_TEST_CASE(one_buffer_on_creation) {
    BOOST_CHECK(editor->getWindow(0)->getBuffer(0) != nullptr);
}

BOOST_AUTO_TEST_CASE(add_a_new_buffer) {
    editor->getWindow(0)->newBuffer();
    BOOST_CHECK(editor->getWindow(0)->getBuffer(0) != nullptr);
}
BOOST_AUTO_TEST_SUITE_END()
