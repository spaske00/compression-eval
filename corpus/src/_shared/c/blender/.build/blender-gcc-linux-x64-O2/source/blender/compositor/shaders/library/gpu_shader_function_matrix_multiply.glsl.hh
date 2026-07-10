static void metadata_gpu_shader_function_matrix_multiply_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(2120460826536408571LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(2120460826536408571LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(2120460826536408571LLU)},
    };
    source.add_function("node_function_matrix_multiply", args, g_functions);
  }
  UNUSED_VARS(source, g_functions, g_formats);
}
