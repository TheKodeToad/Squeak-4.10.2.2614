SET (CMAKE_SHARED_MODULE_CREATE_C_FLAGS "${CMAKE_SHARED_MODULE_CREATE_C_FLAGS} -framework CoreAudio -framework AudioToolbox")
EXPECT_UNDEFINED_SYMBOLS ()
