set(MODULE_NAME student)

message("compile ${MODULE_NAME}")

set(INTERNAL_FILES
  Student.cpp
)

set(PUBLIC_HEADERS
  Student.hpp
)

add_library(
  ${MODULE_NAME}
  ${INTERNAL_FILES}
  ${PUBLIC_HEADERS}
)

target_include_directories(
  ${MODULE_NAME}
  PRIVATE 
    ${MODULE_NAME}
    ${PROJECT_SOURCE_DIR}
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
target_link_libraries(
  ${MODULE_NAME}
  PRIVATE 
    lib::relic
    lib::human
    lib::location 
    lib::biwo 
    lib::teacher 
)

add_library(lib::${MODULE_NAME} ALIAS ${MODULE_NAME})