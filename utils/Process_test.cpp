//
// Created by w-devin on 11/7/2022.
//

#include <gtest/gtest.h>

#include "Process.h"

TEST(TestFindPidByName, test_find_pid_by_name_1) {
    LPCSTR process_name = "Notepad";
    EXPECT_NE(findPidByName(process_name), 0);
}