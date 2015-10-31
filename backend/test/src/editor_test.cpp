#define BOOST_TEST_MODULE Editor
#include <boost/test/included/unit_test.hpp>

#include "editor.hpp"
#include "window.hpp"

BOOST_AUTO_TEST_SUITE(editor)

//Fixture needed for every test
yace::Editor* editor = yace::Editor::getInstance();

BOOST_AUTO_TEST_CASE(singleton) {
    yace::Editor* editor2 = yace::Editor::getInstance();
    BOOST_CHECK_EQUAL(editor, editor2);
}

BOOST_AUTO_TEST_CASE(one_window_on_creation) {
    BOOST_CHECK_EQUAL(1, editor->getWindows().size());
}

BOOST_AUTO_TEST_CASE(add_a_new_window) {
    editor->newWindow();
    BOOST_CHECK_EQUAL(2, editor->getWindows().size());
}

BOOST_AUTO_TEST_SUITE_END()
