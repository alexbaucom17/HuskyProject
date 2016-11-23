# 
#  AUTOGENERATED FILE:   do not edit
#
#  Generated by:         alex on alex-laptop, 2016-11-23 12:44:52 -0500
#  From Template/Script: data_templates/IncludeTemplate.cmake
 
include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR})

# define lists of source files 
set(NODELET_GENCPP_GEN_H 
  NodeletListRequest.h 
  NodeletListResponse.h 
  NodeletList.h 
  NodeletLoadRequest.h 
  NodeletLoadResponse.h 
  NodeletLoad.h 
  NodeletUnloadRequest.h 
  NodeletUnloadResponse.h 
  NodeletUnload.h 
  nodelet_gencpp_Library.h 
  )

set(NODELET_GENCPP_GEN_CPP 
  NodeletListRequest.cpp
  NodeletListResponse.cpp
  NodeletList.cpp
  NodeletLoadRequest.cpp
  NodeletLoadResponse.cpp
  NodeletLoad.cpp
  NodeletUnloadRequest.cpp
  NodeletUnloadResponse.cpp
  NodeletUnload.cpp
  nodelet_gencpp_BSON.cpp
  nodelet_gencpp_Boost.cpp 
  nodelet_gencpp_Library.cpp 
  )

# dependencies
set(NODELET_GENCPP_GEN_DEPS std_msgs_gencpp std_srvs_gencpp  )

# allow building of nml libraries to be overridden by top level cmake file
if (NOT RFRAME_NML_OVERRIDE)
  # create nml library for these data classes
  add_rcspaths()
  add_library( nodelet_gencpp_NML SHARED nodelet_gencpp_NML.cpp nodelet_gencpp_NMLSupport.cpp )
  target_link_libraries(nodelet_gencpp_NML nodelet_gencpp 
	std_msgs_gencpp_NML std_srvs_gencpp_NML  
	${RCS_LIBS} 
	common_NML 
	${RFRAME_LIBS})
  install(TARGETS nodelet_gencpp_NML DESTINATION lib)
endif()

  install(FILES nodelet_gencpp_NML.h DESTINATION gen_include/nodelet)

# allow building of ros libraries to be overridden by top level cmake file
if (NOT RFRAME_ROS_OVERRIDE)
  # rosfiles size: 9
  # create ros support library
  add_library(nodelet_gencpp_ROS SHARED nodelet_gencpp_ROS.cpp )
  target_link_libraries(nodelet_gencpp_ROS nodelet_gencpp ${RFRAME_LIBS})
  install(TARGETS nodelet_gencpp_ROS DESTINATION lib)
endif()

# install headers
install(FILES ${NODELET_GENCPP_GEN_H} nodelet_gencpp_ROS.h DESTINATION gen_include/nodelet)


# setup make clean files list. NOTE:  nodelet_gencpp_NMLSupport.cpp is not added on purpose!
set(NODELET_GENCPP_GEN 
  ${NODELET_GENCPP_GEN_CPP}
  ${NODELET_GENCPP_GEN_H}  
  nodelet_gencpp_NML.cpp
  nodelet_gencpp_NML.h 
  nodelet_gencpp_ROS.cpp
  nodelet_gencpp_ROS.h 
)

set_directory_properties( PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${NODELET_GENCPP_GEN}")


