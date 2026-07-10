static void metadata_eevee_bxdf_lut_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_bxdf.bsl.hh");
  source.add_dependency("eevee_bxdf_lut_lib.bsl.hh");
  source.add_dependency("eevee_precompute_shared.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_subsurface_shared.hh");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
