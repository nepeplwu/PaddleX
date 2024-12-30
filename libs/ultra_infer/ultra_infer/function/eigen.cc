// Copyright (c) 2022 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "ultra_infer/function/eigen.h"

namespace ultra_infer {
namespace function {
std::shared_ptr<EigenDeviceWrapper> EigenDeviceWrapper::instance_ = nullptr;

std::shared_ptr<EigenDeviceWrapper> EigenDeviceWrapper::GetInstance() {
  if (instance_ == nullptr) {
    instance_ = std::make_shared<EigenDeviceWrapper>();
  }
  return instance_;
}

const Eigen::DefaultDevice *EigenDeviceWrapper::GetDevice() const {
  return &device_;
}

} // namespace function
} // namespace ultra_infer