# 
#  AUTOGENERATED FILE:   do not edit
#
#  Generated by:         alex on alex-laptop, 2016-11-23 12:44:48 -0500
#  From Template/Script: data_templates/IncludeTemplate.cmake
 
include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR})

# define lists of source files 
set(DIAGNOSTIC_MSGS_GENCPP_GEN_H 
  DiagnosticArray.h 
  DiagnosticStatus.h 
  KeyValue.h 
  AddDiagnosticsRequest.h 
  AddDiagnosticsResponse.h 
  AddDiagnostics.h 
  SelfTestRequest.h 
  SelfTestResponse.h 
  SelfTest.h 
  diagnostic_msgs_gencpp_Library.h 
  )

set(DIAGNOSTIC_MSGS_GENCPP_GEN_CPP 
  DiagnosticArray.cpp
  DiagnosticStatus.cpp
  KeyValue.cpp
  AddDiagnosticsRequest.cpp
  AddDiagnosticsResponse.cpp
  AddDiagnostics.cpp
  SelfTestRequest.cpp
  SelfTestResponse.cpp
  SelfTest.cpp
  diagnostic_msgs_gencpp_BSON.cpp
  diagnostic_msgs_gencpp_Boost.cpp 
  diagnostic_msgs_gencpp_Library.cpp 
  )

# dependencies
set(DIAGNOSTIC_MSGS_GENCPP_GEN_DEPS std_msgs_gencpp std_srvs_gencpp  )

# allow building of nml libraries to be overridden by top level cmake file
if (NOT RFRAME_NML_OVERRIDE)
  # create nml library for these data classes
  add_rcspaths()
  add_library( diagnostic_msgs_gencpp_NML SHARED diagnostic_msgs_gencpp_NML.cpp diagnostic_msgs_gencpp_NMLSupport.cpp )
  target_link_libraries(diagnostic_msgs_gencpp_NML diagnostic_msgs_gencpp 
	std_msgs_gencpp_NML std_srvs_gencpp_NML  
	${RCS_LIBS} 
	common_NML 
	${RFRAME_LIBS})
  install(TARGETS diagnostic_msgs_gencpp_NML DESTINATION lib)
endif()

  install(FILES diagnostic_msgs_gencpp_NML.h DESTINATION gen_include/diagnostic_msgs)

# allow building of ros libraries to be overridden by top level cmake file
if (NOT RFRAME_ROS_OVERRIDE)
  # rosfiles size: 9
  # create ros support library
  add_library(diagnostic_msgs_gencpp_ROS SHARED diagnostic_msgs_gencpp_ROS.cpp )
  target_link_libraries(diagnostic_msgs_gencpp_ROS diagnostic_msgs_gencpp ${RFRAME_LIBS})
  install(TARGETS diagnostic_msgs_gencpp_ROS DESTINATION lib)
endif()

# install headers
install(FILES ${DIAGNOSTIC_MSGS_GENCPP_GEN_H} diagnostic_msgs_gencpp_ROS.h DESTINATION gen_include/diagnostic_msgs)


# setup make clean files list. NOTE:  diagnostic_msgs_gencpp_NMLSupport.cpp is not added on purpose!
set(DIAGNOSTIC_MSGS_GENCPP_GEN 
  ${DIAGNOSTIC_MSGS_GENCPP_GEN_CPP}
  ${DIAGNOSTIC_MSGS_GENCPP_GEN_H}  
  diagnostic_msgs_gencpp_NML.cpp
  diagnostic_msgs_gencpp_NML.h 
  diagnostic_msgs_gencpp_ROS.cpp
  diagnostic_msgs_gencpp_ROS.h 
)

set_directory_properties( PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${DIAGNOSTIC_MSGS_GENCPP_GEN}")


