#include "test_com_testjni_JniUtil.h"

JNIEXPORT jstring JNICALL Java_test_com_testjni_JniUtil_getMString
        (JNIEnv *env, jobject obj){
    return (*env)->NewStringUTF(env,"this just test");
}
