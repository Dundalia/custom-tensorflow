/* Copyright 2024 The OpenXLA Authors.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef XLA_STREAM_EXECUTOR_CUDA_PTX_COMPILER_SUPPORT_H_
#define XLA_STREAM_EXECUTOR_CUDA_PTX_COMPILER_SUPPORT_H_

#include "absl/strings/string_view.h"

namespace stream_executor {
// Returns true if XLA was built with libnvptxcompiler support. Otherwise false
// is returned.
bool IsLibNvPtxCompilerSupported();

// Checks whether ptxas log contains errors related to register allocation.
bool IsPtxRegisterAllocationError(absl::string_view);
}  // namespace stream_executor

#endif  // XLA_STREAM_EXECUTOR_CUDA_PTX_COMPILER_SUPPORT_H_