add_test([=[ProxyTest.RequestDoesNotCrash]=]  /home/goy/github/RK2/RK2-main/build/proxy_test [==[--gtest_filter=ProxyTest.RequestDoesNotCrash]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[ProxyTest.RequestDoesNotCrash]=]  PROPERTIES WORKING_DIRECTORY /home/goy/github/RK2/RK2-main/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  proxy_test_TESTS ProxyTest.RequestDoesNotCrash)
