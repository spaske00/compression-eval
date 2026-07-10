static void metadata_gpu_shader_compositor_color_to_luminance_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(5601490213402017599LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(5601490213402017592LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(17120281461893420969LLU)},
    };
    source.add_function("color_to_luminance", args, g_functions);
  }
  source.add_dependency("gpu_shader_common_color_utils.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
