# Install script for directory: /home/swap/zephyr/drivers

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
  include("/home/swap/zephyr/samples/boards/nrf52/power_mgr/built/zephyr/drivers/console/cmake_install.cmake")
  include("/home/swap/zephyr/samples/boards/nrf52/power_mgr/built/zephyr/drivers/display/cmake_install.cmake")
  include("/home/swap/zephyr/samples/boards/nrf52/power_mgr/built/zephyr/drivers/interrupt_controller/cmake_install.cmake")
  include("/home/swap/zephyr/samples/boards/nrf52/power_mgr/built/zephyr/drivers/clock_control/cmake_install.cmake")
  include("/home/swap/zephyr/samples/boards/nrf52/power_mgr/built/zephyr/drivers/gpio/cmake_install.cmake")
  include("/home/swap/zephyr/samples/boards/nrf52/power_mgr/built/zephyr/drivers/serial/cmake_install.cmake")
  include("/home/swap/zephyr/samples/boards/nrf52/power_mgr/built/zephyr/drivers/bluetooth/cmake_install.cmake")
  include("/home/swap/zephyr/samples/boards/nrf52/power_mgr/built/zephyr/drivers/entropy/cmake_install.cmake")
  include("/home/swap/zephyr/samples/boards/nrf52/power_mgr/built/zephyr/drivers/timer/cmake_install.cmake")

endif()
