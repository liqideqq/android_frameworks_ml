// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace mean_float_1 {
std::vector<MixedTypedExample> examples = {
// Generated mean_float_1 test
#include "generated/examples/mean_float_1.example.cpp"
};
// Generated model constructor
#include "generated/models/mean_float_1.model.cpp"
} // namespace mean_float_1
TEST_F(GeneratedTests, mean_float_1) {
    execute(mean_float_1::CreateModel,
            mean_float_1::is_ignored,
            mean_float_1::examples);
}