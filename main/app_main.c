#include <stdio.h>
#include "esp_log.h"
#include "esp_system.h"

#define TAG  "HELLO"

//用户函数入口，相当于main函数
void app_main()
{
    printf("Hello world!悦为电子\n");
	ESP_LOGE(TAG, "yueweidianzi. ERROR.");
	ESP_LOGW(TAG, "yueweidianzi.WARN.");
	ESP_LOGI(TAG, "yueweidianzi.INFO.");
	ESP_LOGD(TAG, "yueweidianzi.DEBUG.");
	ESP_LOGV(TAG, "yueweidianzi.VERBOSE.");
}
