#ifndef OBFUSCATION_INDIRECT_CALL_H
#define OBFUSCATION_INDIRECT_CALL_H

// Namespace
namespace llvm {
class FunctionPass;
class PassRegistry;
class ObfuscationOptions;

FunctionPass* createIndirectCallPass(unsigned pointerSize, ObfuscationOptions *argsOptions);
void initializeIndirectCallPass(PassRegistry &Registry);

}

#endif
