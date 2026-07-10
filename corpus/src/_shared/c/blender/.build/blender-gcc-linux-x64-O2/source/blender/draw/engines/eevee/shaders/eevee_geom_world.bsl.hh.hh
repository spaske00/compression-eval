static void metadata_eevee_geom_world_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("eevee_geom_infos.hh");
  source.add_dependency("eevee_nodetree_infos.hh");
  source.add_dependency("draw_model.bsl.hh");
  source.add_dependency("draw_view.bsl.hh");
  source.add_dependency("eevee_lightprobe_shared.hh");
  source.add_dependency("eevee_reverse_z_lib.bsl.hh");
  source.add_dependency("eevee_sampling_shared.hh");
  source.add_dependency("eevee_uniform.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
