static void metadata_gpu_shader_material_tex_environment_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(5601490213402017592LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(5601490213402017592LLU)},
    };
    source.add_function("node_tex_environment_equirectangular", args, g_functions);
  }
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(5601490213402017592LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(5601490213402017592LLU)},
    };
    source.add_function("node_tex_environment_mirror_ball", args, g_functions);
  }
  {
    Vector<metadata::ArgumentFormat> args = {
      metadata::ArgumentFormat{metadata::Qualifier(3766795653032124588LLU), metadata::Type(5601490213402017592LLU)},
      metadata::ArgumentFormat{metadata::Qualifier(18095486126876356427LLU), metadata::Type(5601490213402017599LLU)},
    };
    source.add_function("node_tex_environment_empty", args, g_functions);
  }
  source.add_dependency("gpu_shader_material_vector_math.glsl");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
