static void metadata_gpu_shader_material_bit_math_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(17120281461893420969LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(17120281461893420969LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(17120281461893420969LLU)},
    };
    source.add_function("bit_math_and", args, g_functions);
  }
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(17120281461893420969LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(17120281461893420969LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(17120281461893420969LLU)},
    };
    source.add_function("bit_math_or", args, g_functions);
  }
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(17120281461893420969LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(17120281461893420969LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(17120281461893420969LLU)},
    };
    source.add_function("bit_math_xor", args, g_functions);
  }
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(17120281461893420969LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(17120281461893420969LLU)},
    };
    source.add_function("bit_math_not", args, g_functions);
  }
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(17120281461893420969LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(17120281461893420969LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(17120281461893420969LLU)},
    };
    source.add_function("bit_math_shift", args, g_functions);
  }
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(17120281461893420969LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(17120281461893420969LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(17120281461893420969LLU)},
    };
    source.add_function("bit_math_rotate", args, g_functions);
  }
  UNUSED_VARS(source, g_functions, g_formats);
}
