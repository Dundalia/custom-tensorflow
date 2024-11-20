/* Copyright 2021 The TensorFlow Authors. All Rights Reserved.

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

#include "unsupported/Eigen/CXX11/Tensor"  // from @eigen_archive
#include "tensorflow/core/kernels/mlir_generated/base_gpu_op.h"

namespace tensorflow {

GENERATE_AND_REGISTER_UNARY_GPU_KERNEL(OnesLike, DT_BOOL);
GENERATE_AND_REGISTER_UNARY_GPU_KERNEL(OnesLike, DT_HALF);
GENERATE_AND_REGISTER_UNARY_GPU_KERNEL(OnesLike, DT_FLOAT);
GENERATE_AND_REGISTER_UNARY_GPU_KERNEL(OnesLike, DT_DOUBLE);
GENERATE_AND_REGISTER_UNARY_GPU_KERNEL(OnesLike, DT_INT64);
GENERATE_AND_REGISTER_UNARY_GPU_KERNEL(OnesLike, DT_COMPLEX64);
GENERATE_AND_REGISTER_UNARY_GPU_KERNEL(OnesLike, DT_COMPLEX128);

// These kernels are JIT-compiled.
GENERATE_AND_REGISTER_UNARY_JIT_GPU_KERNEL(OnesLike, DT_INT8);
GENERATE_AND_REGISTER_UNARY_JIT_GPU_KERNEL(OnesLike, DT_INT16);
GENERATE_AND_REGISTER_UNARY_JIT_GPU_KERNEL(OnesLike, DT_UINT8);
GENERATE_AND_REGISTER_UNARY_JIT_GPU_KERNEL(OnesLike, DT_UINT16);
GENERATE_AND_REGISTER_UNARY_JIT_GPU_KERNEL(OnesLike, DT_UINT32);
GENERATE_AND_REGISTER_UNARY_JIT_GPU_KERNEL(OnesLike, DT_UINT64);

}  // namespace tensorflow