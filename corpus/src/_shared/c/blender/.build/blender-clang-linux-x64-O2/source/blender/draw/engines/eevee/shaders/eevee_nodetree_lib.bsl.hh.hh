static void metadata_eevee_nodetree_lib_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(15153218239913697414LLU));
  source.add_dependency("eevee_common_infos.hh");
  source.add_dependency("eevee_geom_infos.hh");
  source.add_dependency("draw_intersect_lib.glsl");
  source.add_dependency("draw_model.bsl.hh");
  source.add_dependency("draw_view.bsl.hh");
  source.add_dependency("eevee_bxdf_lut_lib.bsl.hh");
  source.add_dependency("eevee_hiz.bsl.hh");
  source.add_dependency("eevee_nodetree_closures_lib.glsl");
  source.add_dependency("eevee_pipeline.bsl.hh");
  source.add_dependency("eevee_ray_trace_screen_lib.bsl.hh");
  source.add_dependency("eevee_renderpass.bsl.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_uniform.bsl.hh");
  source.add_dependency("eevee_utility_tx.bsl.hh");
  source.add_dependency("gpu_shader_codegen_lib.glsl");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("gpu_shader_math_safe_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_reduce_lib.glsl");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
