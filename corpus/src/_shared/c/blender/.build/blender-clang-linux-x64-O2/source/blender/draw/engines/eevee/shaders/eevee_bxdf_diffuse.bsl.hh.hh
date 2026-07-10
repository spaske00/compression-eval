static void metadata_eevee_bxdf_diffuse_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_bxdf_types.bsl.hh");
  source.add_dependency("eevee_ltc_lut_lib.bsl.hh");
  source.add_dependency("eevee_thickness_lib.bsl.hh");
  source.add_dependency("gpu_shader_codegen_lib.glsl");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_math_safe_lib.glsl");
  source.add_dependency("gpu_shader_ray_lib.glsl");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
