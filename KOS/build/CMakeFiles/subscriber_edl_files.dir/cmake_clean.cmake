file(REMOVE_RECURSE
  "Subscriber.edl.h"
  "_headers_/mosquitto/Subscriber.edl"
  "_headers_/mosquitto/Subscriber.edl.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/subscriber_edl_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
