#include <stdio.h>
#include "esp_log.h"
#include "esp_system.h"

#define TAG  "HELLO"

//�û�������ڣ��൱��main����
void app_main()
{
    printf("Hello world!��Ϊ����\n");
	ESP_LOGE(TAG, "yueweidianzi. ERROR.");
	ESP_LOGW(TAG, "yueweidianzi.WARN.");
	ESP_LOGI(TAG, "yueweidianzi.INFO.");
	ESP_LOGD(TAG, "yueweidianzi.DEBUG.");
	ESP_LOGV(TAG, "yueweidianzi.VERBOSE.");
}
