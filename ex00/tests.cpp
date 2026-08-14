#include "catch_amalgamated.hpp"
#include "Inventory.hpp"

TEST_CASE("adding an item raises the count") {
    Inventory inv;

    REQUIRE(inv.count() == 0);
    CHECK_FALSE(inv.has("potion"));
}

TEST_CASE("has() finds an added item and rejects a missing one") {
    Inventory inv;

    REQUIRE(inv.count() == 0);
    CHECK_FALSE(inv.has("potion"));

	inv.add("other potion");
    REQUIRE(inv.count() == 1);
    CHECK(inv.has("other potion"));
}

