# 
#  AUTOGENERATED FILE:   do not edit
#
#  Generated by:         alex on alex-laptop, 2016-11-23 12:44:45 -0500
#  From Template/Script: data_templates/IncludeTemplate.cmake
 
include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR})

# define lists of source files 
set(BOND_GENCPP_GEN_H 
  Constants.h 
  Status.h 
  bond_gencpp_Library.h 
  )

set(BOND_GENCPP_GEN_CPP 
  Constants.cpp
  Status.cpp
  bond_gencpp_BSON.cpp
  bond_gencpp_Boost.cpp 
  bond_gencpp_Library.cpp 
  )

# dependencies
set(BOND_GENCPP_GEN_DEPS std_msgs_gencpp std_srvs_gencpp  )

# allow building of nml libraries to be overridden by top level cmake file
if (NOT RFRAME_NML_OVERRIDE)
  # create nml library for these data classes
  add_rcspaths()
  add_library( bond_gencpp_NML SHARED bond_gencpp_NML.cpp bond_gencpp_NMLSupport.cpp )
  target_link_libraries(bond_gencpp_NML bond_gencpp 
	std_msgs_gencpp_NML std_srvs_gencpp_NML  
	${RCS_LIBS} 
	common_NML 
	${RFRAME_LIBS})
  install(TARGETS bond_gencpp_NML DESTINATION lib)
endif()

  install(FILES bond_gencpp_NML.h DESTINATION gen_include/bond)

# allow building of ros libraries to be overridden by top level cmake file
if (NOT RFRAME_ROS_OVERRIDE)
  # rosfiles size: 2
  # create ros support library
  add_library(bond_gencpp_ROS SHARED bond_gencpp_ROS.cpp )
  target_link_libraries(bond_gencpp_ROS bond_gencpp ${RFRAME_LIBS})
  install(TARGETS bond_gencpp_ROS DESTINATION lib)
endif()

# install headers
install(FILES ${BOND_GENCPP_GEN_H} bond_gencpp_ROS.h DESTINATION gen_include/bond)


# setup make clean files list. NOTE:  bond_gencpp_NMLSupport.cpp is not added on purpose!
set(BOND_GENCPP_GEN 
  ${BOND_GENCPP_GEN_CPP}
  ${BOND_GENCPP_GEN_H}  
  bond_gencpp_NML.cpp
  bond_gencpp_NML.h 
  bond_gencpp_ROS.cpp
  bond_gencpp_ROS.h 
)

set_directory_properties( PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${BOND_GENCPP_GEN}")


