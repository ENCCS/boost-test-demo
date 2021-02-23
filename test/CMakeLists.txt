find_package(Boost REQUIRED)

add_executable(unit_tests
  main.cpp
  example_add.cpp
  example_subtract.cpp
  )

target_link_libraries(unit_tests
  PRIVATE
    example
    # add Boost include directories
    Boost::boost
  )

# integrate with CTest
add_test(
  NAME add
  COMMAND $<TARGET_FILE:unit_tests> --run_test=add --log_level=all
  )

add_test(
  NAME subtract
  COMMAND $<TARGET_FILE:unit_tests> --run_test=subtract --log_level=all
  )
