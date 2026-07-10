static void metadata_eevee_nodetree_closures_lib_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_common_infos.hh");
  source.add_dependency("gpu_shader_codegen_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_reduce_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
