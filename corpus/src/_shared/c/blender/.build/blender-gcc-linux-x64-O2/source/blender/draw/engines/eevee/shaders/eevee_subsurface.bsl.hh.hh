static void metadata_eevee_subsurface_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_view.bsl.hh");
  source.add_dependency("eevee_defines.hh");
  source.add_dependency("eevee_gbuffer_read.bsl.hh");
  source.add_dependency("eevee_reverse_z_lib.bsl.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_subsurface_shared.hh");
  source.add_dependency("gpu_shader_codegen_lib.glsl");
  source.add_dependency("gpu_shader_math_angle_lib.glsl");
  source.add_dependency("gpu_shader_math_matrix_construct_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_safe_lib.glsl");
  source.add_dependency("gpu_shader_shared_exponent_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
