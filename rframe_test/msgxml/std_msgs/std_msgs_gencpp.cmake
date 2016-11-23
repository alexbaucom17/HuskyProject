# 
#  AUTOGENERATED FILE:   do not edit
#
#  Generated by:         alex on alex-laptop, 2016-11-23 12:44:56 -0500
#  From Template/Script: data_templates/IncludeTemplate.cmake
 
include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR})

# define lists of source files 
set(STD_MSGS_GENCPP_GEN_H 
  RosTime.h 
  RosDuration.h 
  HeaderTest.h 
  Bool.h 
  Byte.h 
  ByteMultiArray.h 
  Char.h 
  ColorRGBA.h 
  Duration.h 
  Empty.h 
  Float32.h 
  Float32MultiArray.h 
  Float64.h 
  Float64MultiArray.h 
  Header.h 
  Int16.h 
  Int16MultiArray.h 
  Int32.h 
  Int32MultiArray.h 
  Int64.h 
  Int64MultiArray.h 
  Int8.h 
  Int8MultiArray.h 
  MultiArrayDimension.h 
  MultiArrayLayout.h 
  String.h 
  Time.h 
  UInt16.h 
  UInt16MultiArray.h 
  UInt32.h 
  UInt32MultiArray.h 
  UInt64.h 
  UInt64MultiArray.h 
  UInt8.h 
  UInt8MultiArray.h 
  std_msgs_gencpp_Library.h 
  )

set(STD_MSGS_GENCPP_GEN_CPP 
  RosTime.cpp
  RosDuration.cpp
  HeaderTest.cpp
  Bool.cpp
  Byte.cpp
  ByteMultiArray.cpp
  Char.cpp
  ColorRGBA.cpp
  Duration.cpp
  Empty.cpp
  Float32.cpp
  Float32MultiArray.cpp
  Float64.cpp
  Float64MultiArray.cpp
  Header.cpp
  Int16.cpp
  Int16MultiArray.cpp
  Int32.cpp
  Int32MultiArray.cpp
  Int64.cpp
  Int64MultiArray.cpp
  Int8.cpp
  Int8MultiArray.cpp
  MultiArrayDimension.cpp
  MultiArrayLayout.cpp
  String.cpp
  Time.cpp
  UInt16.cpp
  UInt16MultiArray.cpp
  UInt32.cpp
  UInt32MultiArray.cpp
  UInt64.cpp
  UInt64MultiArray.cpp
  UInt8.cpp
  UInt8MultiArray.cpp
  std_msgs_gencpp_BSON.cpp
  std_msgs_gencpp_Boost.cpp 
  std_msgs_gencpp_Library.cpp 
  )

# allow building of nml libraries to be overridden by top level cmake file
if (NOT RFRAME_NML_OVERRIDE)
  # create nml library for these data classes
  add_rcspaths()
  add_library( std_msgs_gencpp_NML SHARED std_msgs_gencpp_NML.cpp std_msgs_gencpp_NMLSupport.cpp )
  target_link_libraries(std_msgs_gencpp_NML std_msgs_gencpp 
	 
	${RCS_LIBS} 
	common_NML 
	${RFRAME_LIBS})
  install(TARGETS std_msgs_gencpp_NML DESTINATION lib)
endif()

  install(FILES std_msgs_gencpp_NML.h DESTINATION gen_include/std_msgs)

# allow building of ros libraries to be overridden by top level cmake file
if (NOT RFRAME_ROS_OVERRIDE)
  # rosfiles size: 35
  # create ros support library
  add_library(std_msgs_gencpp_ROS SHARED std_msgs_gencpp_ROS.cpp )
  target_link_libraries(std_msgs_gencpp_ROS std_msgs_gencpp ${RFRAME_LIBS})
  install(TARGETS std_msgs_gencpp_ROS DESTINATION lib)
endif()

# install headers
install(FILES ${STD_MSGS_GENCPP_GEN_H} std_msgs_gencpp_ROS.h DESTINATION gen_include/std_msgs)


# setup make clean files list. NOTE:  std_msgs_gencpp_NMLSupport.cpp is not added on purpose!
set(STD_MSGS_GENCPP_GEN 
  ${STD_MSGS_GENCPP_GEN_CPP}
  ${STD_MSGS_GENCPP_GEN_H}  
  std_msgs_gencpp_NML.cpp
  std_msgs_gencpp_NML.h 
  std_msgs_gencpp_ROS.cpp
  std_msgs_gencpp_ROS.h 
)

set_directory_properties( PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${STD_MSGS_GENCPP_GEN}")


