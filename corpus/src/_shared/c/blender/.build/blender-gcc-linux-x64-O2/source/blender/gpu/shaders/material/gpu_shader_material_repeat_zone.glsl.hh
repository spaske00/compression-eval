static void metadata_gpu_shader_material_repeat_zone_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(17120281461893420969LLU)},
    };
    source.add_function("REPEAT_BEGIN", args, g_functions);
  }
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(17120281461893420969LLU)},
    };
    source.add_function("REPEAT_END", args, g_functions);
  }
  UNUSED_VARS(source, g_functions, g_formats);
}
