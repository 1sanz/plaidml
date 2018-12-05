// Copyright 2018, Intel Corporation

#pragma once

#include "tile/codegen/codegen.pb.h"
#include "tile/stripe/stripe.h"

namespace vertexai {
namespace tile {
namespace codegen {

void PartitionPass(stripe::Block* root, const proto::PartitionPass& options);

void DebankPass(stripe::Block* root, const proto::DebankPass& options);

}  // namespace codegen
}  // namespace tile
}  // namespace vertexai
