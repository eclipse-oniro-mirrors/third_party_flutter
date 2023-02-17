/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef VULKAN_HILOG_H
#define VULKAN_HILOG_H

#include <hilog/log.h>

#define LOGD(fmt, ...)                                                   \
  ::OHOS::HiviewDFX::HiLog::Debug(                                       \
      ::OHOS::HiviewDFX::HiLogLabel{LOG_CORE, 0xD001400, "VulkanShell"}, \
      "%{public}s: " fmt, __func__, ##__VA_ARGS__)
#define LOGI(fmt, ...)                                                   \
  ::OHOS::HiviewDFX::HiLog::Info(                                        \
      ::OHOS::HiviewDFX::HiLogLabel{LOG_CORE, 0xD001400, "VulkanShell"}, \
      "%{public}s: " fmt, __func__, ##__VA_ARGS__)
#define LOGW(fmt, ...)                                                   \
  ::OHOS::HiviewDFX::HiLog::Warn(                                        \
      ::OHOS::HiviewDFX::HiLogLabel{LOG_CORE, 0xD001400, "VulkanShell"}, \
      "%{public}s: " fmt, __func__, ##__VA_ARGS__)
#define LOGE(fmt, ...)                                                   \
  ::OHOS::HiviewDFX::HiLog::Error(                                       \
      ::OHOS::HiviewDFX::HiLogLabel{LOG_CORE, 0xD001400, "VulkanShell"}, \
      "%{public}s: " fmt, __func__, ##__VA_ARGS__)

#endif