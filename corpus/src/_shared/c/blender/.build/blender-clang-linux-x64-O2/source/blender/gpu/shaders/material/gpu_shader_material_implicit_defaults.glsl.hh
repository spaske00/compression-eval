static void metadata_gpu_shader_material_implicit_defaults_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(5601490213402017592LLU)},
    };
    source.add_function("world_normals_get", args, g_functions);
  }
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(5601490213402017592LLU)},
    };
    source.add_function("world_position_get", args, g_functions);
  }
  UNUSED_VARS(source, g_functions, g_formats);
}
