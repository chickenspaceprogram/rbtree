#  This Source Code Form is subject to the terms of the Mozilla Public
#  License, v. 2.0. If a copy of the MPL was not distributed with this
#  file, You can obtain one at https://mozilla.org/MPL/2.0/.

cmake_minimum_required(VERSION 3.15)
project(rbtree C)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

enable_testing()
add_subdirectory(extern)

set(RBTREE_HEADER_LIST
    ${rbtree_SOURCE_DIR/include/rbtree/rbtree.h}
)

add_library(rbtree
    rbtree.c
    ${RBTREE_HEADER_LIST}
)

target_include_directories(rbtree PUBLIC "${PROJECT_SOURCE_DIR}/include")