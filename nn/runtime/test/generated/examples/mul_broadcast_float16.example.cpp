// clang-format off
// Generated file (from: mul_broadcast_float16.mod.py). Do not edit
std::vector<MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {},
  // int -> FLOAT16 map
  {{0, {1.0f, 2.0f}}, {1, {1.0f, 2.0f, 3.0f, 4.0f}}},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {},
  // int -> QUANT16_ASYMM map
  {},
  // int -> FLOAT16 map
  {{0, {1.0f, 4.0f, 3.0f, 8.0f}}},
}
},
}, // End of an example
};
