static void metadata_gpu_shader_function_transform_point_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(5601490213402017592LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(2120460826536408571LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(5601490213402017592LLU)},
    };
    source.add_function("node_function_transform_point", args, g_functions);
  }
  source.add_dependency("gpu_shader_math_matrix_transform_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
