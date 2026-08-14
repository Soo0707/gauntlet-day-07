#include "catch_amalgamated.hpp"
#include "Inventory.hpp"

TEST_CASE("adding an item raises the count") {
    Inventory inv;

    REQUIRE(inv.count() == 0);
    CHECK_FALSE(inv.has("potion"));
}
