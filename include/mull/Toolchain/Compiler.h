#pragma once

#include "llvm/Object/Binary.h"
#include "llvm/Object/ObjectFile.h"

namespace llvm {

class Module;
class TargetMachine;

} // namespace llvm

namespace mull {

class Bitcode;

class Compiler {
public:
  llvm::object::OwningBinary<llvm::object::ObjectFile>
  compileBitcode(const Bitcode &bitcode, llvm::TargetMachine &machine);
  llvm::object::OwningBinary<llvm::object::ObjectFile>
  compileModule(llvm::Module *module, llvm::TargetMachine &machine);
};
} // namespace mull
