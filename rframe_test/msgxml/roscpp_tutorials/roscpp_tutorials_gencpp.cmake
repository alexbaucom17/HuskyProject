# 
#  AUTOGENERATED FILE:   do not edit
#
#  Generated by:         alex on alex-laptop, 2016-11-23 12:44:52 -0500
#  From Template/Script: data_templates/IncludeTemplate.cmake
 
include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR})

# define lists of source files 
set(ROSCPP_TUTORIALS_GENCPP_GEN_H 
  TwoIntsRequest.h 
  TwoIntsResponse.h 
  TwoInts.h 
  roscpp_tutorials_gencpp_Library.h 
  )

set(ROSCPP_TUTORIALS_GENCPP_GEN_CPP 
  TwoIntsRequest.cpp
  TwoIntsResponse.cpp
  TwoInts.cpp
  roscpp_tutorials_gencpp_BSON.cpp
  roscpp_tutorials_gencpp_Boost.cpp 
  roscpp_tutorials_gencpp_Library.cpp 
  )

# dependencies
set(ROSCPP_TUTORIALS_GENCPP_GEN_DEPS std_msgs_gencpp std_srvs_gencpp  )

# allow building of nml libraries to be overridden by top level cmake file
if (NOT RFRAME_NML_OVERRIDE)
  # create nml library for these data classes
  add_rcspaths()
  add_library( roscpp_tutorials_gencpp_NML SHARED roscpp_tutorials_gencpp_NML.cpp roscpp_tutorials_gencpp_NMLSupport.cpp )
  target_link_libraries(roscpp_tutorials_gencpp_NML roscpp_tutorials_gencpp 
	std_msgs_gencpp_NML std_srvs_gencpp_NML  
	${RCS_LIBS} 
	common_NML 
	${RFRAME_LIBS})
  install(TARGETS roscpp_tutorials_gencpp_NML DESTINATION lib)
endif()

  install(FILES roscpp_tutorials_gencpp_NML.h DESTINATION gen_include/roscpp_tutorials)

# allow building of ros libraries to be overridden by top level cmake file
if (NOT RFRAME_ROS_OVERRIDE)
  # rosfiles size: 3
  # create ros support library
  add_library(roscpp_tutorials_gencpp_ROS SHARED roscpp_tutorials_gencpp_ROS.cpp )
  target_link_libraries(roscpp_tutorials_gencpp_ROS roscpp_tutorials_gencpp ${RFRAME_LIBS})
  install(TARGETS roscpp_tutorials_gencpp_ROS DESTINATION lib)
endif()

# install headers
install(FILES ${ROSCPP_TUTORIALS_GENCPP_GEN_H} roscpp_tutorials_gencpp_ROS.h DESTINATION gen_include/roscpp_tutorials)


# setup make clean files list. NOTE:  roscpp_tutorials_gencpp_NMLSupport.cpp is not added on purpose!
set(ROSCPP_TUTORIALS_GENCPP_GEN 
  ${ROSCPP_TUTORIALS_GENCPP_GEN_CPP}
  ${ROSCPP_TUTORIALS_GENCPP_GEN_H}  
  roscpp_tutorials_gencpp_NML.cpp
  roscpp_tutorials_gencpp_NML.h 
  roscpp_tutorials_gencpp_ROS.cpp
  roscpp_tutorials_gencpp_ROS.h 
)

set_directory_properties( PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${ROSCPP_TUTORIALS_GENCPP_GEN}")


