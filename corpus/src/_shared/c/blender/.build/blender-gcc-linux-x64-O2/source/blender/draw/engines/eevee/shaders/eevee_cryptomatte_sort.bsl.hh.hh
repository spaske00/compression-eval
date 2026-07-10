static void metadata_eevee_cryptomatte_sort_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_uniform.bsl.hh");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
