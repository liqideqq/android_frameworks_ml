// clang-format off
// Generated file (from: lstm3_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm3_float16 {
// Generated lstm3_float16 test
#include "generated/examples/lstm3_float16.example.cpp"
// Generated model constructor
#include "generated/models/lstm3_float16.model.cpp"
} // namespace lstm3_float16

TEST_F(GeneratedTests, lstm3_float16) {
    execute(lstm3_float16::CreateModel,
            lstm3_float16::is_ignored,
            lstm3_float16::get_examples());
}
