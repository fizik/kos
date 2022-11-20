file(REMOVE_RECURSE
  "Changestate.edl.h"
  "_headers_/mosquitto/Changestate.edl"
  "_headers_/mosquitto/Changestate.edl.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/changestate_edl_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
