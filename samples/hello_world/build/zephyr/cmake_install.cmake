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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/swap/zephyr/samples/hello_world/build/zephyr/arch/cmake_install.cmake")
  include("/home/swap/zephyr/samples/hello_world/build/zephyr/lib/cmake_install.cmake")
  include("/home/swap/zephyr/samples/hello_world/build/zephyr/misc/cmake_install.cmake")
  include("/home/swap/zephyr/samples/hello_world/build/zephyr/boards/cmake_install.cmake")
  include("/home/swap/zephyr/samples/hello_world/build/zephyr/ext/cmake_install.cmake")
  include("/home/swap/zephyr/samples/hello_world/build/zephyr/subsys/cmake_install.cmake")
  include("/home/swap/zephyr/samples/hello_world/build/zephyr/drivers/cmake_install.cmake")
  include("/home/swap/zephyr/samples/hello_world/build/zephyr/tests/cmake_install.cmake")
  include("/home/swap/zephyr/samples/hello_world/build/zephyr/kernel/cmake_install.cmake")
  include("/home/swap/zephyr/samples/hello_world/build/zephyr/cmake/flash/cmake_install.cmake")
  include("/home/swap/zephyr/samples/hello_world/build/zephyr/cmake/usage/cmake_install.cmake")
  include("/home/swap/zephyr/samples/hello_world/build/zephyr/cmake/reports/cmake_install.cmake")

endif()

