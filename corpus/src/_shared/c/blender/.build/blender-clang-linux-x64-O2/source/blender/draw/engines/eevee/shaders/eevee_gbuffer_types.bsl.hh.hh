static void metadata_eevee_gbuffer_types_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_defines.hh");
  source.add_dependency("eevee_thickness_lib.bsl.hh");
  source.add_dependency("gpu_shader_codegen_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_reduce_lib.glsl");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
