static void metadata_eevee_surf_hybrid_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(15153218239913697414LLU));
  source.add_dependency("eevee_cryptomatte.bsl.hh");
  source.add_dependency("eevee_geom_infos.hh");
  source.add_dependency("eevee_nodetree_infos.hh");
  source.add_dependency("draw_curves_lib.glsl");
  source.add_dependency("eevee_forward_lib.bsl.hh");
  source.add_dependency("eevee_gbuffer_write.bsl.hh");
  source.add_dependency("eevee_nodetree_frag_lib.glsl");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  source.add_dependency("eevee_surf_common.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
