#include <jni.h>
#include <dlfcn.h>
#include <android/log.h>
#include <stdlib.h>
#include <item/Item.h>
#include <item/BackpackItem.h>
#include <Substrate.h>

#define LOG_TAG "backpackmod"

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__))

//BackpackItem* backpack = 

static void (*Item_initItems_real)();

static void Item_initItems_hook() {
	Item_initItems_real();
	new BackpackItem(349);
};

static void (*Item_initCreativeItems_real)();

static void Item_initCreativeItems_hook() {
Item_initCreativeItems_real();
//Item::addCreativeItem(349, 0);
};

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
	//MSHookFunction((void*)&Item::initItems, (void*)&Item_initItems_hook, (void**)&Item_initItems_real);
	return JNI_VERSION_1_2;
}
