# Install script for directory: /home/swap/zephyr

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/swap/zephyr/samples/net/echo_client/built/zephyr/arch/cmake_install.cmake")
  include("/home/swap/zephyr/samples/net/echo_client/built/zephyr/lib/cmake_install.cmake")
  include("/home/swap/zephyr/samples/net/echo_client/built/zephyr/misc/cmake_install.cmake")
  include("/home/swap/zephyr/samples/net/echo_client/built/zephyr/boards/cmake_install.cmake")
  include("/home/swap/zephyr/samples/net/echo_client/built/zephyr/ext/cmake_install.cmake")
  include("/home/swap/zephyr/samples/net/echo_client/built/zephyr/subsys/cmake_install.cmake")
  include("/home/swap/zephyr/samples/net/echo_client/built/zephyr/drivers/cmake_install.cmake")
  include("/home/swap/zephyr/samples/net/echo_client/built/zephyr/tests/cmake_install.cmake")
  include("/home/swap/zephyr/samples/net/echo_client/built/zephyr/kernel/cmake_install.cmake")
  include("/home/swap/zephyr/samples/net/echo_client/built/zephyr/cmake/flash/cmake_install.cmake")
  include("/home/swap/zephyr/samples/net/echo_client/built/zephyr/cmake/usage/cmake_install.cmake")
  include("/home/swap/zephyr/samples/net/echo_client/built/zephyr/cmake/reports/cmake_install.cmake")

endif()

