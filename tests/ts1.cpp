#include <gtest/gtest.h>
#include "../src/classes.h"

TEST(TS1, normalize) {
    SOI_Queue svect;
	svect.push(3);
	svect.push(4);
	svect.push(5);
    EXPECT_EQ(0,svect.isEmpty());
}
