static void metadata_eevee_ray_trace_screen_lib_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_bxdf.bsl.hh");
  source.add_dependency("eevee_lightprobe_shared.hh");
  source.add_dependency("eevee_ray_types_lib.bsl.hh");
  source.add_dependency("eevee_reverse_z_lib.bsl.hh");
  source.add_dependency("eevee_thickness_lib.bsl.hh");
  source.add_dependency("gpu_shader_codegen_lib.glsl");
  source.add_dependency("gpu_shader_math_fast_lib.glsl");
  source.add_dependency("gpu_shader_math_matrix_transform_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
