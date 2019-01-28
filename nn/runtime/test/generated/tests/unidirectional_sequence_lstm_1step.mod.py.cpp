// clang-format off
// Generated file (from: unidirectional_sequence_lstm_1step.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace unidirectional_sequence_lstm_1step {
// Generated unidirectional_sequence_lstm_1step test
#include "generated/examples/unidirectional_sequence_lstm_1step.example.cpp"
// Generated model constructor
#include "generated/models/unidirectional_sequence_lstm_1step.model.cpp"
} // namespace unidirectional_sequence_lstm_1step

TEST_F(GeneratedTests, unidirectional_sequence_lstm_1step) {
    execute(unidirectional_sequence_lstm_1step::CreateModel,
            unidirectional_sequence_lstm_1step::is_ignored,
            unidirectional_sequence_lstm_1step::get_examples());
}

#if 0
TEST_F(DynamicOutputShapeTests, unidirectional_sequence_lstm_1step_dynamic_output_shape) {
    execute(unidirectional_sequence_lstm_1step::CreateModel_dynamic_output_shape,
            unidirectional_sequence_lstm_1step::is_ignored_dynamic_output_shape,
            unidirectional_sequence_lstm_1step::get_examples_dynamic_output_shape());
}

#endif