add_executable(test_gurps_core
  test_main.cpp
  test_primaryattribute.cpp
  test_secondaryattribute.cpp
)

target_link_libraries(test_gurps_core
  gurps_core
)

add_dependencies(test_gurps_core
  catch2
)

target_include_directories(test_gurps_core
  PRIVATE .
  PRIVATE ..
  PRIVATE ${CATCH2_INCLUDE_DIR}
)

add_test(
  NAME    TestGurpsCore
  COMMAND test_gurps_core
)

add_custom_target(run_test_gurps_core ALL
  COMMAND test_gurps_core
)
