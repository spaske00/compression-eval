static void metadata_gpu_shader_material_shader_to_rgba_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(8958605483171873792LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(5601490213402017599LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(17120281461893420969LLU)},
    };
    source.add_function("node_shader_to_rgba", args, g_functions);
  }
  UNUSED_VARS(source, g_functions, g_formats);
}
