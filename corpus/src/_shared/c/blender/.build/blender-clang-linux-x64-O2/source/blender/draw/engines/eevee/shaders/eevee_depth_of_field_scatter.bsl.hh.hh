static void metadata_eevee_depth_of_field_scatter_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(18151572126051718857LLU));
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("eevee_depth_of_field_lib.bsl.hh");
  source.add_dependency("gpu_shader_math_vector_reduce_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_safe_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
