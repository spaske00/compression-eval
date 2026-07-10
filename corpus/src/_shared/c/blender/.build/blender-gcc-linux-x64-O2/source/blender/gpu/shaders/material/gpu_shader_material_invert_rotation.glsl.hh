static void metadata_gpu_shader_material_invert_rotation_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(5601490213402017599LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(5601490213402017599LLU)},
    };
    source.add_function("invert_rotation", args, g_functions);
  }
  source.add_dependency("gpu_shader_math_quaternion_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
