#define BOOST_TEST_MAIN
#include <boost/test/included/unit_test.hpp>
#include <memory>

#include "editor.hpp"
#include "window.hpp"

BOOST_AUTO_TEST_SUITE(editor)

BOOST_AUTO_TEST_CASE(singleton) {
    yace::Editor* editor = yace::Editor::getInstance();
    yace::Editor* editor2 = yace::Editor::getInstance();
    BOOST_CHECK_EQUAL(editor, editor2);
}

BOOST_AUTO_TEST_CASE(one_window_on_creation) {
    yace::Editor* editor = yace::Editor::getInstance();
    const std::vector<yace::Window>& windows = editor->getWindows();
    BOOST_CHECK_EQUAL(1, windows.size());
}
BOOST_AUTO_TEST_SUITE_END()
