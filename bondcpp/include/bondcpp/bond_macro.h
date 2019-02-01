/*
 Bondcpp macro
*/

#ifndef _BONDCPP_MACROS_H_INCLUDED_
#define _BONDCPP_MACROS_H_INCLUDED_

#include <ros/macros.h>

#ifdef ROS_BUILD_SHARED_LIBS // ros is being built around shared libraries
  #ifdef bondcpp_EXPORTS // we are building a shared lib/dll
    #define BONDCPP_DECL ROS_HELPER_EXPORT
  #else // we are using shared lib/dll
    #define BONDCPP_DECL ROS_HELPER_IMPORT
  #endif
#else // ros is being built around static libraries
  #define BONDCPP_DECL
#endif

#endif /* ROSCPP_SERIALIZATION_MACROS_HPP_ */
