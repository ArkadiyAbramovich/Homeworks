#include <iostream>
#include "list_node.h"
#include "catch2/catch_test_macros.hpp"
#include "catch2/catch_session.hpp"

TEST_CASE("ListNode testing", "[test_2]") {

    List list;
    list.PushBack(1);
    list.PushBack(2);
    list.PushFront(3);
    list.PushFront(4);

    SECTION("Check PushBack() function") {

        CHECK(list.PopBack() == 2);
        CHECK(list.PopBack() == 1);

    }

    SECTION("Check PushFront() function") {

        CHECK(list.PopFront() == 4);
        CHECK(list.PopFront() == 3);

    }


    list.Clear();

    SECTION("Check PopFront function") {

        CHECK_THROWS_AS(list.PopFront(), std::runtime_error);

    }

    SECTION("Check PopFront function") {

        CHECK_THROWS_AS(list.PopBack(), std::runtime_error);

    }
}

int main(int argc, char** argv) {

    return Catch::Session().run();

}