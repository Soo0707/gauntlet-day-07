#include "catch_amalgamated.hpp"
#include "Inventory.hpp"

struct InventoryFixture
{
    InventoryFixture()
	{
		inv.add("potion");
		inv.add("sword");
	}

    Inventory inv;
};

TEST_CASE_METHOD(InventoryFixture, "adding an item raises the count")
{
    CHECK(inv.count() == 2);
}

TEST_CASE_METHOD(InventoryFixture, "has() finds an added item and rejects a missing one")
{
    CHECK(inv.has("potion"));
    CHECK_FALSE(inv.has("other potion"));
}


TEST_CASE_METHOD(InventoryFixture, "removing an item drops the count and has() stops finding it")
{
	inv.remove("potion");

	CHECK(inv.count() == 1);
    CHECK_FALSE(inv.has("potion"));
}

TEST_CASE_METHOD(InventoryFixture, "removing a missing item is a no-op: count unchanged, other items untouched")
{
	inv.remove("other potion");

	CHECK(inv.count() == 2);
	CHECK(inv.has("potion"));
}

