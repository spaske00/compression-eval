static void metadata_eevee_velocity_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_view.bsl.hh");
  source.add_dependency("eevee_camera_shared.hh");
  source.add_dependency("eevee_defines.hh");
  source.add_dependency("eevee_velocity_shared.hh");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_math_matrix_transform_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
