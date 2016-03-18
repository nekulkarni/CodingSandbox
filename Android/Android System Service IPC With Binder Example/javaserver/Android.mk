LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE_TAGS := samples

# Only compile source java files in this apk.
LOCAL_SRC_FILES := $(call all-java-files-under, src)
LOCAL_SRC_FILES += $(call all-Iaidl-files-under, src)

LOCAL_PACKAGE_NAME := HelloActivityServer

LOCAL_SDK_VERSION := current
LOCAL_CERTIFICATE := platform

include $(BUILD_PACKAGE)
