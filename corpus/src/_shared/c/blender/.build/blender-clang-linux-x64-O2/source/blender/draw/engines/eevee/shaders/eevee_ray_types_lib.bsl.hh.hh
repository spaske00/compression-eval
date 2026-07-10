static void metadata_eevee_ray_types_lib_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_math_geom_lib.glsl");
  source.add_dependency("draw_shader_shared.hh");
  source.add_dependency("gpu_shader_math_safe_lib.glsl");
  source.add_dependency("gpu_shader_ray_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
