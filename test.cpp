#include <gtest/gtest.h>
#include "subject.h"

TEST(ProxyTest, RequestDoesNotCrash) {
	Proxy proxy;
	EXPECT_NO_THROW(proxy.request());
}
