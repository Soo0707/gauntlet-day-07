#include "catch_amalgamated.hpp"
#include "Inventory.hpp"

TEST_CASE("adding an item raises the count") {
    Inventory inv;

	inv.add("potion");
    CHECK(inv.count() == 1);
}

TEST_CASE("has() finds an added item and rejects a missing one") {
    Inventory inv;

    CHECK_FALSE(inv.has("potion"));

	inv.add("other potion");
    CHECK(inv.has("other potion"));
}


TEST_CASE("removing an item drops the count and has() stops finding it") {
    Inventory inv;

	inv.add("potion");
	inv.remove("potion");

	CHECK(inv.count() == 0);
    CHECK_FALSE(inv.has("potion"));
}

