// Generated file (from: relu1_quant8.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, 0.0f, 127.5f, {1, 2, 2, 1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_RELU1, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->setInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}