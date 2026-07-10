static void metadata_gpu_shader_material_rotation_to_axis_angle_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(5601490213402017599LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(5601490213402017592LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(17120281461893420969LLU)},
    };
    source.add_function("rotation_to_axis_angle", args, g_functions);
  }
  source.add_dependency("gpu_shader_math_rotation_conversion_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
