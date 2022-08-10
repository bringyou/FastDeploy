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

#include "fastdeploy/pybind/main.h"

namespace fastdeploy {

void BindYOLOv7(pybind11::module& m);
void BindScaledYOLOv4(pybind11::module& m);
void BindYOLOR(pybind11::module& m);
void BindPPDet(pybind11::module& m);

void BindDetection(pybind11::module& m) {
  auto detection_module =
      m.def_submodule("detection", "Image object detection models.");
  BindPPDet(detection_module);
  BindYOLOv7(detection_module);
  BindScaledYOLOv4(detection_module);
  BindYOLOR(detection_module);
}
}  // namespace fastdeploy