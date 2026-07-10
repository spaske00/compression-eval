static void metadata_compositor_summed_area_table_compute_complete_x_prologues_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(12256080691004757103LLU));
  source.add_builtin(metadata::Builtin(7070875563240083042LLU));
  source.add_builtin(metadata::Builtin(13135399807675160830LLU));
  source.add_builtin(metadata::Builtin(8536819494230177402LLU));
  source.add_dependency("compositor_summed_area_table_infos.hh");
  source.add_dependency("gpu_shader_compositor_texture_utilities.glsl");
  source.add_shared_variable(Type::float4_t, "complete_prologue[gl_WorkGroupSize.x]");
  UNUSED_VARS(source, g_functions, g_formats);
}
