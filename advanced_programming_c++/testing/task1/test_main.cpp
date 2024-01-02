#include <iostream>
#include "list_node.h"
#include "catch2/catch_test_macros.hpp"
#include "catch2/catch_session.hpp"

TEST_CASE("ListNode testing", "[test_1]") {
  
    List list;

    SECTION("Check Empyt() function") {

    CHECK(list.Empty() == true);

 }

    list.PushBack(5);
    list.PushBack(7);

    SECTION("Check Size() function") {

    CHECK(list.Size() == 2);

 }

    list.Clear();

    SECTION("Check Clear() function") {

    CHECK(list.Size() == 0);

 }
    
}
                   
int main(int argc, char** arg) {

    return Catch::Session().run();
}

