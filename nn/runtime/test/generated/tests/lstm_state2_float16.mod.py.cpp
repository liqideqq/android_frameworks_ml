// clang-format off
// Generated file (from: lstm_state2_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm_state2_float16 {
// Generated lstm_state2_float16 test
#include "generated/examples/lstm_state2_float16.example.cpp"
// Generated model constructor
#include "generated/models/lstm_state2_float16.model.cpp"
} // namespace lstm_state2_float16

TEST_F(GeneratedTests, lstm_state2_float16) {
    execute(lstm_state2_float16::CreateModel,
            lstm_state2_float16::is_ignored,
            lstm_state2_float16::get_examples());
}
