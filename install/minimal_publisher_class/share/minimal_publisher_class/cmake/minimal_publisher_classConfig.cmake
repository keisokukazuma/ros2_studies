# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_minimal_publisher_class_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED minimal_publisher_class_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(minimal_publisher_class_FOUND FALSE)
  elseif(NOT minimal_publisher_class_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(minimal_publisher_class_FOUND FALSE)
  endif()
  return()
endif()
set(_minimal_publisher_class_CONFIG_INCLUDED TRUE)

# output package information
if(NOT minimal_publisher_class_FIND_QUIETLY)
  message(STATUS "Found minimal_publisher_class: 0.0.0 (${minimal_publisher_class_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'minimal_publisher_class' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${minimal_publisher_class_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(minimal_publisher_class_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${minimal_publisher_class_DIR}/${_extra}")
endforeach()
