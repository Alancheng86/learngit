
 
JNI := jni
LOG := log

LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

ifdef LOG
LOCAL_SRC_FILES+= \
	src/serial.cpp \
	src/thread.cpp \
	src/device.cpp  \
	src/file_op.cpp  
else
LOCAL_SRC_FILES+= \
	src/serial.cpp \
	src/thread.cpp \
	src/device.cpp  
endif

ifdef JNI 
LOCAL_SRC_FILES+=src/zigbee_jni.cpp 
else
LOCAL_SRC_FILES+=  src/main.cpp 
endif

#LOCAL_LDLIBS =:-llog
#LOCAL_C_INCLUDES  += system/core/include/cutils
#LOCAL_SHARED_LIBRARIES := libcutils


LOCAL_C_INCLUDES += \
    external/jhead \
    external/tremor/Tremor \
    frameworks/base/core/jni \
	$(LOCAL_PATH)/include \
    $(PV_INCLUDES) \
    $(JNI_H_INCLUDE) \
    $(call include-path-for, corecg graphics)

LOCAL_SHARED_LIBRARIES := \
		 libcutils libutils libgui liblog 

#LOCAL_CFLAGS +=\
	-DANDROID_DEBUG -DANDROID -DTEST	
LOCAL_CFLAGS +=\
	-DANDROID_DEBUG -DANDROID	

ifdef JNI
LOCAL_MODULE := libzigbee
else
LOCAL_MODULE := smartTestByJason
endif

LOCAL_MODULE_TAGS := eng

ifdef JNI
include $(BUILD_SHARED_LIBRARY)
else
include $(BUILD_EXECUTABLE)
endif

include $(call all-makefiles-under,$(LOCAL_PATH))

