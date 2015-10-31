#define BOOST_TEST_MAIN
#include <boost/test/included/unit_test.hpp>

#include "editor.hpp"
#include "window.hpp"

BOOST_AUTO_TEST_SUITE(window)

//Fixture needed for every test
yace::Editor* editor = yace::Editor::getInstance();

BOOST_AUTO_TEST_CASE(one_buffer_on_creation) {
    BOOST_CHECK_EQUAL(1, editor->getWindows().front()->getBuffers().size());
}

BOOST_AUTO_TEST_CASE(add_a_new_buffer) {
    editor->getWindows().front()->newBuffer();
    BOOST_CHECK_EQUAL(2, editor->getWindows()[0]->getBuffers().size());
}
BOOST_AUTO_TEST_SUITE_END()
