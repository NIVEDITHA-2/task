<!DOCTYPE html>
<!-- saved from url=(0077)https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true -->
<html lang="en-us" style="--font-family-text: OpenSans, Arial, Helvetica, sans-serif; --font-family-input: SourceCodePro, monaco, Courier, monospace;"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><style id="react-tooltip">.__react_component_tooltip{border-radius:3px;display:inline-block;font-size:13px;left:-999em;opacity:0;padding:8px 21px;position:fixed;pointer-events:none;transition:opacity 0.3s ease-out;top:-999em;visibility:hidden;z-index:999}.__react_component_tooltip.allow_hover{pointer-events:auto}.__react_component_tooltip:before,.__react_component_tooltip:after{content:"";width:0;height:0;position:absolute}.__react_component_tooltip.show{opacity:0.9;margin-top:0px;margin-left:0px;visibility:visible}.__react_component_tooltip.type-dark{color:#fff;background-color:#222}.__react_component_tooltip.type-dark.place-top:after{border-top-color:#222;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-dark.place-bottom:after{border-bottom-color:#222;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-dark.place-left:after{border-left-color:#222;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-dark.place-right:after{border-right-color:#222;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-dark.border{border:1px solid #fff}.__react_component_tooltip.type-dark.border.place-top:before{border-top:8px solid #fff}.__react_component_tooltip.type-dark.border.place-bottom:before{border-bottom:8px solid #fff}.__react_component_tooltip.type-dark.border.place-left:before{border-left:8px solid #fff}.__react_component_tooltip.type-dark.border.place-right:before{border-right:8px solid #fff}.__react_component_tooltip.type-success{color:#fff;background-color:#8DC572}.__react_component_tooltip.type-success.place-top:after{border-top-color:#8DC572;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-success.place-bottom:after{border-bottom-color:#8DC572;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-success.place-left:after{border-left-color:#8DC572;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-success.place-right:after{border-right-color:#8DC572;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-success.border{border:1px solid #fff}.__react_component_tooltip.type-success.border.place-top:before{border-top:8px solid #fff}.__react_component_tooltip.type-success.border.place-bottom:before{border-bottom:8px solid #fff}.__react_component_tooltip.type-success.border.place-left:before{border-left:8px solid #fff}.__react_component_tooltip.type-success.border.place-right:before{border-right:8px solid #fff}.__react_component_tooltip.type-warning{color:#fff;background-color:#F0AD4E}.__react_component_tooltip.type-warning.place-top:after{border-top-color:#F0AD4E;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-warning.place-bottom:after{border-bottom-color:#F0AD4E;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-warning.place-left:after{border-left-color:#F0AD4E;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-warning.place-right:after{border-right-color:#F0AD4E;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-warning.border{border:1px solid #fff}.__react_component_tooltip.type-warning.border.place-top:before{border-top:8px solid #fff}.__react_component_tooltip.type-warning.border.place-bottom:before{border-bottom:8px solid #fff}.__react_component_tooltip.type-warning.border.place-left:before{border-left:8px solid #fff}.__react_component_tooltip.type-warning.border.place-right:before{border-right:8px solid #fff}.__react_component_tooltip.type-error{color:#fff;background-color:#BE6464}.__react_component_tooltip.type-error.place-top:after{border-top-color:#BE6464;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-error.place-bottom:after{border-bottom-color:#BE6464;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-error.place-left:after{border-left-color:#BE6464;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-error.place-right:after{border-right-color:#BE6464;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-error.border{border:1px solid #fff}.__react_component_tooltip.type-error.border.place-top:before{border-top:8px solid #fff}.__react_component_tooltip.type-error.border.place-bottom:before{border-bottom:8px solid #fff}.__react_component_tooltip.type-error.border.place-left:before{border-left:8px solid #fff}.__react_component_tooltip.type-error.border.place-right:before{border-right:8px solid #fff}.__react_component_tooltip.type-info{color:#fff;background-color:#337AB7}.__react_component_tooltip.type-info.place-top:after{border-top-color:#337AB7;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-info.place-bottom:after{border-bottom-color:#337AB7;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-info.place-left:after{border-left-color:#337AB7;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-info.place-right:after{border-right-color:#337AB7;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-info.border{border:1px solid #fff}.__react_component_tooltip.type-info.border.place-top:before{border-top:8px solid #fff}.__react_component_tooltip.type-info.border.place-bottom:before{border-bottom:8px solid #fff}.__react_component_tooltip.type-info.border.place-left:before{border-left:8px solid #fff}.__react_component_tooltip.type-info.border.place-right:before{border-right:8px solid #fff}.__react_component_tooltip.type-light{color:#222;background-color:#fff}.__react_component_tooltip.type-light.place-top:after{border-top-color:#fff;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-light.place-bottom:after{border-bottom-color:#fff;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-light.place-left:after{border-left-color:#fff;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-light.place-right:after{border-right-color:#fff;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-light.border{border:1px solid #222}.__react_component_tooltip.type-light.border.place-top:before{border-top:8px solid #222}.__react_component_tooltip.type-light.border.place-bottom:before{border-bottom:8px solid #222}.__react_component_tooltip.type-light.border.place-left:before{border-left:8px solid #222}.__react_component_tooltip.type-light.border.place-right:before{border-right:8px solid #222}.__react_component_tooltip.place-top{margin-top:-10px}.__react_component_tooltip.place-top:before{border-left:10px solid transparent;border-right:10px solid transparent;bottom:-8px;left:50%;margin-left:-10px}.__react_component_tooltip.place-top:after{border-left:8px solid transparent;border-right:8px solid transparent;bottom:-6px;left:50%;margin-left:-8px}.__react_component_tooltip.place-bottom{margin-top:10px}.__react_component_tooltip.place-bottom:before{border-left:10px solid transparent;border-right:10px solid transparent;top:-8px;left:50%;margin-left:-10px}.__react_component_tooltip.place-bottom:after{border-left:8px solid transparent;border-right:8px solid transparent;top:-6px;left:50%;margin-left:-8px}.__react_component_tooltip.place-left{margin-left:-10px}.__react_component_tooltip.place-left:before{border-top:6px solid transparent;border-bottom:6px solid transparent;right:-8px;top:50%;margin-top:-5px}.__react_component_tooltip.place-left:after{border-top:5px solid transparent;border-bottom:5px solid transparent;right:-6px;top:50%;margin-top:-4px}.__react_component_tooltip.place-right{margin-left:10px}.__react_component_tooltip.place-right:before{border-top:6px solid transparent;border-bottom:6px solid transparent;left:-8px;top:50%;margin-top:-5px}.__react_component_tooltip.place-right:after{border-top:5px solid transparent;border-bottom:5px solid transparent;left:-6px;top:50%;margin-top:-4px}.__react_component_tooltip .multi-line{display:block;padding:2px 0px;text-align:center}</style>
  <!-- Prefetch dns on production -->
  
    <link rel="dns-prefetch" href="https://pubsub.hackerrank.com/">

    <!-- dns-prefetch pendo for HRW -->
    
  
  <!-- NREUM: (4) -->
  

  
    <link href="./hackerrank_Hello World!_files/hackerrank_r_old_trimmed-26b0f141.css" media="all" rel="stylesheet"><link rel="stylesheet" href="./hackerrank_Hello World!_files/hackerrank_r_old_trimmed-26b0f141.css">
  

  

<meta property="og:image" id="meta-og-image" content="https://hrcdn.net/og/default.jpg"><meta property="og:site_name" id="meta-og-site" content="HackerRank"><meta property="og:type" id="meta-og-type" content="website"><meta property="article:author" content="https://www.facebook.com/hackerrank"><meta name="twitter:card" id="meta-twitter-card" content="summary"><meta name="twitter:site" id="meta-twitter-site" content="@hackerrank"><meta property="fb:app_id" id="meta-fb-id" content="347499128655783"><meta name="theme-color" content="hsla(214.29, 15.56%, 26.47%, 1)"><meta content="authenticity_token" name="csrf-param" id="csrf-param"><meta content="3bz0rekDNuNCnLc3x2wGJafrX26TYKSKKcJD/DFzq8m8GW5ihriVx3wx/QzaMwlxos9DCH17tFqQYB+n1O/yRA==" name="csrf-token" id="csrf-token">
<script type="text/javascript" async="" src="./hackerrank_Hello World!_files/analytics.js.download"></script><script type="text/javascript" async="" src="./hackerrank_Hello World!_files/gtm.js.download"></script><script type="text/javascript" async="" src="./hackerrank_Hello World!_files/analytics.js.download"></script><script type="text/javascript" async="" src="./hackerrank_Hello World!_files/mixpanel-2-latest.min.js.download"></script><script async="" src="./hackerrank_Hello World!_files/gtm(1).js.download"></script><script>
  window.BACKEND_ENDPOINT = 'https://www.hackerrank.com/';
  window.MANIFEST_VERSION = 'd8aac546f3';
</script>

<meta name="viewport" content="width=device-width, initial-scale=1">
<link rel="icon" type="image/png" href="https://hrcdn.net/fcore/assets/favicon-ddc852f75a.png">

<!-- Prefetch dns on production -->

  <link rel="dns-prefetch" href="https://hrcdn.net/">
  <link rel="dns-prefetch" href="https://d3keuzeb2crhkn.cloudfront.net/">
  <link rel="dns-prefetch" href="https://notifications.hackerrank.com/">
  <link rel="dns-prefetch" href="https://api.mixpanel.com/">
  <link rel="dns-prefetch" href="https://metrics.hackerrank.com/">
  <link rel="preconnect" href="https://sentry.io/">
  <link rel="dns-prefetch" href="https://sentry.io/">
  <link rel="dns-prefetch" href="https://browser.sentry-cdn.com/">
  <link rel="dns-prefetch" href="https://www.google-analytics.com/">
  <link rel="dns-prefetch" href="https://www.googletagmanager.com/">



  <link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/modules-node_modules_app-server_es_client_index_js-node_modules_app-server_es_ui_component_co-78b6e5-7a10ff16.css">

  <link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/defaultVendors-node_modules_fingerprintjs_fingerprintjs_dist_fp_esm_js-node_modules_react-ari-18ce87-5d37760d.css">

  <link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/hackerrank_r_app-967cf715.css">

  <link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/modules-node_modules_ui-kit_es_components_loaders_cursor_loader_scss-735363e6.css">

  <link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/modules-node_modules_app-server_es_ui_component_modals_confirm_js-node_modules_app-server_es_-f9ce2e-51d6e112.css">

  <link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/hackerrank_r_community-30f8f064.css">

  <link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/commons-src_shared_community_dashboard_cards_email_verification_card_js-src_shared_community_-7d12ac-084da588.css">

  <link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/hackerrank_r_dashboard_v2-de7dd4ad.css">


<!-- Prefetch / preload assets on production -->


  <!-- preload scripts required on the same page -->
  <link rel="preload" as="script" href="./hackerrank_Hello World!_files/hackerrank_r_vendor-2bc7c1b2f5.js.download">
  <link rel="preload" as="script" href="./hackerrank_Hello World!_files/hackerrank_r_client-93cc27c5.js.download">
  <link rel="preload" as="script" href="./hackerrank_Hello World!_files/runtime-b3f778a9.js.download">
  <link rel="preload" as="script" href="./hackerrank_Hello World!_files/chunks_runtime-b7e6b9af5a.js.download">

  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_client_index_js-node_modules_app-server_es_ui_component_co-78b6e5-08fed848.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_fingerprintjs_fingerprintjs_dist_fp_esm_js-node_modules_react-ari-18ce87-cb7039e5.js">
  
    <link rel="preload" as="script" href="./hackerrank_Hello World!_files/hackerrank_r_app-6c097ff7.js.download">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-icons_es_ui_icons_MenuMore_js-node_modules_ui-kit_es_components_dropd-14fbd7-240dbfb5.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_native_ad_native_ad_action_constant_js-node_m-b1c1e2-8cd56388.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-icons_es_ui_icons_FileText_js-node_modules_ui-icons_es_ui_icons_Minus-235bd5-3e194298.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_accordion_accordion_js-node_modules_ui-kit_es_compo-fa601f-ec24ce83.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_form_utils_js-node_modules_ui-icons_es_ui_icons_User_js-node_-223238-4f5707f5.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-icons_es_ui_icons_CompanyBuilding_js-node_modules_ui-icons_es_ui_icon-e16c98-8ec86696.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_modals_confirm_js-node_modules_app-server_es_-f9ce2e-c95b7c02.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_badges_badge_js-node_modules_app-server_es_ui-addc38-77e6c6b8.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_app-drawer_es_components_app-drawer_index_js-node_modu-4a7f5c-c32c1b9f.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_mixpanel-browser_dist_mixpanel_cjs_js-9a1d3756.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_hrds-components_dist_esm_index_js-node_modules_hackerr-3625ff-526ef9ba.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-selectv3_async-creatable_dist_react-select_browser_esm_js-n-94fa5e-9e4d92c8.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__baseKeys_js-node_modules_ui-kit_node_-c5609c-605d5147.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es7_promise_finally_js-node_modules_lodash__baseF-8be433-a3ae2905.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_debounce-promise_dist_index_js-node_modules_formik_dist_formik_esm_js-94e7d498.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-responsive_dist_react-responsive_js-3af455fe.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_socket-redis_client_index_js-24eb7598.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_early-talent-frontend_node_modules_core-js_modules_es6_array_sort-58aefb-7836645f.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-oauth_google_dist_index_esm_js-node_modules_dom-scroll-into-2d9f83-87f1ef77.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_util_js-950f68c0.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_constants_js-src_shared_community_util_hrc_dark_mode_use_user_th-b09c80-15756b93.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/hackerrank_r_community-0d9569ee.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_mock_tests_mock_test_card_js-src_shared_community_mock_tests_moc-3712aa-a44425e9.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_dashboard_cards_email_verification_card_js-src_shared_community_-7d12ac-bdfc59b8.js">
  
    <link rel="preload" as="script" href="https://hrcdn.net/fcore/assets/hackerrank_r_dashboard_v2-ea2dd8fd.js">
  
  <!-- preload scripts end -->



<!-- Load promise polyfill for the non-believers -->
<script>
  (window.Promise && window.Promise.prototype.finally) || document.write('<script src="https://hrcdn.net/fcore/assets/polyfill-d05a380d50.min.js" type="text\/javascript"><\/script>');
</script>
<!-- Added for GTM and sentry -->


<script>
  window.dataLayer = window.dataLayer || [];
</script>


<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-NZTBQVZ');</script>








  <!-- Prefetch / preload assets on production if we are not loading it in first place -->
  
  
    
      <link rel="prefetch" href="https://hrcdn.net/fcore/assets/backbone_styles/dashboard-173b5e46b8.css">
    
    <!-- Prefetch old css files end -->
  
  
    <style id="stitches">
      /* This is stitches CSS */
      --sxs{--sxs:0 t-fhFiIH}@media{:root,.t-fhFiIH{--colors-baseWhite:#FFFFFF;--colors-baseBlack:#050B1A;--colors-primary50:#EBFAF0;--colors-primary100:#D2F4DE;--colors-primary200:#81DFA2;--colors-primary300:#32C766;--colors-primary400:#1BA94C;--colors-primary500:#068932;--colors-primary600:#057A2D;--colors-primary700:#046224;--colors-primary800:#03491B;--colors-primary900:#023112;--colors-secondary50:#F0FBFF;--colors-secondary100:#CCF3FF;--colors-secondary200:#47D4FF;--colors-secondary300:#00ACE0;--colors-secondary400:#097BBF;--colors-secondary500:#11639C;--colors-secondary600:#1F3D83;--colors-secondary700:#183067;--colors-secondary800:#142652;--colors-secondary900:#0F1D3E;--colors-neutral50:#F3F7F7;--colors-neutral100:#E7EEEF;--colors-neutral200:#B7C9CC;--colors-neutral300:#94AAAD;--colors-neutral400:#738F93;--colors-neutral500:#61616B;--colors-neutral700:#576871;--colors-neutral800:#39424E;--colors-neutral900:#0E141E;--colors-critical50:#FEF8F9;--colors-critical100:#FBE9EB;--colors-critical200:#F8DADC;--colors-critical300:#F4C8CC;--colors-critical400:#F0B5BA;--colors-critical500:#EC9EA5;--colors-critical600:#E6838B;--colors-critical700:#E00000;--colors-critical800:#B80000;--colors-critical900:#8F0000;--colors-warning50:#FDF9F5;--colors-warning100:#F9EBE1;--colors-warning200:#F5DCCB;--colors-warning300:#F0CCB3;--colors-warning400:#EABA98;--colors-warning500:#E4A679;--colors-warning600:#DD8D54;--colors-warning700:#D36D24;--colors-warning800:#B54C00;--colors-warning900:#6B2D00;--colors-success50:#F0FCFB;--colors-success100:#CEF5F2;--colors-success200:#A8EEE8;--colors-success300:#7AE4DC;--colors-success400:#40D9CC;--colors-success500:#00C9B8;--colors-success600:#00B3A4;--colors-success700:#009A8D;--colors-success800:#007A70;--colors-success900:#004842;--fonts-sans:Open Sans, Arial, Helvetica, sans-serif;--fonts-mono:Source Code pro, monaco, Courier, monospace;--space-1:4px;--space-2:8px;--space-3:16px;--space-4:24px;--space-5:32px;--space-6:48px;--space-7:96px;--sizes-1:4px;--sizes-2:8px;--sizes-3:16px;--sizes-4:24px;--sizes-5:32px;--sizes-6:48px;--sizes-7:64px;--sizes-8:96px;--sizes-buttonHeightSm:32px;--sizes-buttonHeight:40px;--sizes-buttonHeightLg:48px;--sizes-inputHeight:40px;--sizes-inputWidth:320px;--sizes-minInputWidth:180px;--sizes-containerSm:416px;--sizes-containerMd:636px;--sizes-containerLg:856px;--fontSizes-1:0.75rem;--fontSizes-2:0.875rem;--fontSizes-3:1rem;--fontSizes-4:1.25rem;--fontSizes-5:1.563rem;--fontSizes-6:1.953rem;--fontSizes-7:2.441rem;--fontSizes-8:3.052rem;--fontSizes-9:3.815rem;--fontSizes-button:1rem;--fontSizes-buttonSm:0.812rem;--fontWeights-1:400;--fontWeights-2:600;--fontWeights-3:700;--lineHeights-0:1rem;--lineHeights-1:1.25rem;--lineHeights-2:1.5rem;--lineHeights-3:1.75rem;--lineHeights-4:2rem;--lineHeights-5:2.5rem;--lineHeights-6:3.5rem;--lineHeights-7:3.75rem;--lineHeights-8:4rem;--lineHeights-9:4.5rem;--radii-1:4px;--radii-round:50%;--radii-pill:9999px;--zIndices-1:100;--zIndices-2:200;--zIndices-3:300;--zIndices-4:400;--zIndices-max:999;--shadows-1:0px 1px 4px rgba(37, 69, 105, 0.05), 0px 2px 8px rgba(37, 69, 105, 0.05);--shadows-2:0px 1px 4px rgba(37, 69, 105, 0.1), 0px 3px 12px rgba(37, 69, 105, 0.1)}}--sxs{--sxs:1 k-eqHaWw k-jwXwnQ}@media{@keyframes k-eqHaWw{100%{transform:rotate(360deg)}}@keyframes k-jwXwnQ{0%{stroke-dasharray:1, 150;stroke-dashoffset:0}50%{stroke-dasharray:90, 150;stroke-dashoffset:-35}100%{stroke-dasharray:90, 150;stroke-dashoffset:-124}}} 
      --sxs{--sxs:0 t-koXUxF}@media{:root,.t-koXUxF{--colors-baseWhite:hsl(0, 0%, 100%);--colors-baseBlack:hsl(221, 69%, 6%);--colors-primary50:hsl(140, 60%, 95%);--colors-primary100:hsl(141, 61%, 89%);--colors-primary200:hsl(141, 59%, 69%);--colors-primary300:hsl(141, 60%, 49%);--colors-primary400:hsl(141, 72%, 38%);--colors-primary500:hsl(140, 92%, 28%);--colors-primary600:hsl(141, 92%, 25%);--colors-primary700:hsl(140, 92%, 20%);--colors-primary800:hsl(141, 92%, 15%);--colors-primary900:hsl(140, 92%, 10%);--colors-secondary50:hsl(196, 100%, 97%);--colors-secondary100:hsl(194, 100%, 90%);--colors-secondary200:hsl(194, 100%, 64%);--colors-secondary300:hsl(194, 100%, 44%);--colors-secondary400:hsl(202, 91%, 39%);--colors-secondary500:hsl(205, 80%, 34%);--colors-secondary600:hsl(222, 62%, 32%);--colors-secondary700:hsl(222, 62%, 25%);--colors-secondary800:hsl(223, 61%, 20%);--colors-secondary900:hsl(222, 61%, 15%);--colors-neutral50:hsl(180, 20%, 96%);--colors-neutral100:hsl(187, 20%, 92%);--colors-neutral200:hsl(189, 17%, 76%);--colors-neutral300:hsl(187, 13%, 63%);--colors-neutral400:hsl(187, 13%, 51%);--colors-neutral700:hsl(201, 13%, 39%);--colors-neutral800:hsl(214, 16%, 26%);--colors-neutral900:hsl(218, 36%, 9%);--colors-critical50:hsl(350, 75%, 98%);--colors-critical100:hsl(353, 69%, 95%);--colors-critical200:hsl(356, 68%, 91%);--colors-critical300:hsl(355, 67%, 87%);--colors-critical400:hsl(355, 66%, 83%);--colors-critical500:hsl(355, 67%, 77%);--colors-critical600:hsl(355, 66%, 71%);--colors-critical700:hsl(355, 67%, 62%);--colors-critical800:hsl(355, 74%, 47%);--colors-critical900:hsl(355, 100%, 26%);--colors-warning50:hsl(30, 67%, 98%);--colors-warning100:hsl(25, 67%, 93%);--colors-warning200:hsl(24, 68%, 88%);--colors-warning300:hsl(25, 67%, 82%);--colors-warning400:hsl(25, 66%, 76%);--colors-warning500:hsl(25, 66%, 68%);--colors-warning600:hsl(25, 67%, 60%);--colors-warning700:hsl(25, 71%, 48%);--colors-warning800:hsl(25, 100%, 35%);--colors-warning900:hsl(25, 100%, 21%);--colors-success50:hsl(175, 67%, 96%);--colors-success100:hsl(175, 66%, 88%);--colors-success200:hsl(175, 67%, 80%);--colors-success300:hsl(175, 66%, 69%);--colors-success400:hsl(175, 67%, 55%);--colors-success500:hsl(175, 100%, 39%);--colors-success600:hsl(175, 100%, 35%);--colors-success700:hsl(175, 100%, 30%);--colors-success800:hsl(175, 100%, 24%);--colors-success900:hsl(175, 100%, 14%);--fonts-sans:Open Sans, Arial, Helvetica, sans-serif;--fonts-mono:Source Code pro, monaco, Courier, monospace;--space-1:4px;--space-2:8px;--space-3:16px;--space-4:24px;--space-5:32px;--space-6:48px;--space-7:96px;--sizes-1:4px;--sizes-2:8px;--sizes-3:16px;--sizes-4:24px;--sizes-5:32px;--sizes-6:48px;--sizes-7:64px;--sizes-8:96px;--sizes-buttonHeightSm:32px;--sizes-buttonHeight:40px;--sizes-buttonHeightLg:48px;--sizes-inputHeight:40px;--sizes-inputWidth:320px;--sizes-minInputWidth:180px;--sizes-containerSm:416px;--sizes-containerMd:636px;--sizes-containerLg:856px;--fontSizes-1:0.75rem;--fontSizes-2:0.875rem;--fontSizes-3:1rem;--fontSizes-4:1.25rem;--fontSizes-5:1.563rem;--fontSizes-6:1.953rem;--fontSizes-7:2.441rem;--fontSizes-8:3.052rem;--fontSizes-9:3.815rem;--fontSizes-button:1rem;--fontSizes-buttonSm:0.812rem;--fontWeights-1:400;--fontWeights-2:600;--fontWeights-3:700;--lineHeights-0:1rem;--lineHeights-1:1.25rem;--lineHeights-2:1.5rem;--lineHeights-3:1.75rem;--lineHeights-4:2rem;--lineHeights-5:2.5rem;--lineHeights-6:3.5rem;--lineHeights-7:3.75rem;--lineHeights-8:4rem;--lineHeights-9:4.5rem;--radii-1:4px;--radii-round:50%;--radii-pill:9999px;--zIndices-1:100;--zIndices-2:200;--zIndices-3:300;--zIndices-4:400;--zIndices-max:999;--shadows-1:0px 1px 4px rgba(37, 69, 105, 0.05), 0px 2px 8px rgba(37, 69, 105, 0.05);--shadows-2:0px 1px 4px rgba(37, 69, 105, 0.1), 0px 3px 12px rgba(37, 69, 105, 0.1)}}--sxs{--sxs:1 k-GtRcY k-cgEAml k-eqHaWw k-jwXwnQ k-fntWbc k-jTSnTZ k-jqPDnV k-btloMR k-bWCOmv k-dJEvCf k-ilhlcC k-ghIPJO ggPDvH}@media{@keyframes k-GtRcY{0%{height:0;overflow:hidden}99%{height:var(--radix-accordion-content-height);overflow:hidden}100%{overflow:visible}}@keyframes k-cgEAml{from{height:var(--radix-accordion-content-height);overflow:hidden}to{height:0;overflow:hidden}}@keyframes k-eqHaWw{100%{transform:rotate(360deg)}}@keyframes k-jwXwnQ{0%{stroke-dasharray:1, 150;stroke-dashoffset:0}50%{stroke-dasharray:90, 150;stroke-dashoffset:-35}100%{stroke-dasharray:90, 150;stroke-dashoffset:-124}}@keyframes k-fntWbc{0%{height:0;overflow:hidden}99%{height:var(--radix-collapsible-content-height);overflow:hidden}100%{overflow:visible}}@keyframes k-jTSnTZ{from{height:var(--radix-collapsible-content-height);overflow:hidden}to{height:0;overflow:hidden}}@keyframes k-jqPDnV{from{opacity:0}to{opacity:1}}@keyframes k-btloMR{from{opacity:1}to{opacity:0}}@keyframes k-bWCOmv{from{transform:var(---transformValue)}to{transform:translate3d(0,0,0)}}@keyframes k-dJEvCf{from{transform:translate3d(0,0,0)}to{transform:var(---transformValue)}}@keyframes k-ilhlcC{from{opacity:0;transform:translate(0, -20px) scale(0.96)}to{opacity:1;transform:translate(0, 0) scale(1)}}@keyframes k-ghIPJO{from{opacity:0;transform:translate(-50%, -20px) scale(0.96)}to{opacity:1;transform:translate(-50%, 0) scale(1)}}.hr-toaster,#floating-ui-root,.portal-wrapper,._pendo-badge{pointer-events:auto}}--sxs{--sxs:2 c-PJLV c-bQZNxM c-cpYffr c-dbqrOz c-cmpvrW c-gbnqRc c-cUYkx c-YCcUu c-lhrvpy c-innKUQ c-cOXWEf c-IfgQY c-iYqHGX c-bHwhJJ c-idwzAS c-lmpoFR c-eiWHog c-jTYnbn c-bUyyQp c-dZydjc c-hsrLxR c-IEEGe c-fgXRGR c-hdHRLY c-SMZYu c-dRiJTD c-geabQv c-fKaTQp c-kPtGmf c-tErrv c-kUMmGg c-ciiPvr c-iLslcY c-ivXFTJ c-dBPfGk c-cRiZRs c-lesPJm c-fEQddE c-TqWOi c-kDrBaX c-UazGY c-irAmsv c-iUxOXR c-jXlKW}@media{.c-bQZNxM{padding:0;margin:0;box-sizing:border-box;border-radius:var(--hr-card-border-radius)}.c-cpYffr{border-radius:50%;overflow:hidden;font-weight:var(--hr-avatar-font-weight);font-family:var(--hr-font-family-text)}.c-dbqrOz{margin:0;border:0;height:1px;width:100%}.c-cmpvrW{position:relative}.c-gbnqRc{all:revert}.c-gbnqRc[type=text],.c-gbnqRc[type=password],.c-gbnqRc[type=number],.c-gbnqRc[type=search]{all:revert}.c-gbnqRc.c-gbnqRc{border-radius:var(--hr-input-border-radius);border:1px solid var(--hr-input-border-color-default);border-bottom-color:var(--hr-input-boundary-border-color-default);box-sizing:border-box;color:var(--hr-input-text-color-default);background-color:var(--hr-input-background-color-default);font-size:0.875rem;font-weight:var(--hr-input-font-weight);padding:var(--hr-input-padding);width:100%;font-family:var(--hr-font-family-text);font-feature-settings:inherit;font-variant-ligatures:inherit}.c-gbnqRc.c-gbnqRc::placeholder{color:var(--hr-input-placeholder-text-color);font-size:0.875rem}.c-gbnqRc.c-gbnqRc::input-placeholder{color:var(--hr-input-placeholder-text-color);font-size:0.875rem}.c-gbnqRc.c-gbnqRc:hover{border-color:var(--hr-input-border-color-hover)}.c-gbnqRc.c-gbnqRc:focus{outline:2px solid var(--hr-app-outline-color);outline-offset:1px;background-color:var(--hr-input-background-color-default);border-color:var(--hr-input-border-color-focus);border-bottom-color:var(--hr-input-boundary-border-color-focus)}.c-gbnqRc.c-gbnqRc:focus:hover{border-color:var(--hr-input-border-color-hover)}.c-gbnqRc.c-gbnqRc:focus ~ div:not([data-input-icon-state="error"]) svg{color:var(--hr-input-icon-color-active)}.c-gbnqRc.c-gbnqRc:focus-visible{outline:2px solid var(--hr-app-outline-color);outline-offset:1px;background-color:var(--hr-input-background-color-default);border-color:var(--hr-input-border-color-focus);border-bottom-color:var(--hr-input-boundary-border-color-focus)}.c-gbnqRc.c-gbnqRc:focus-visible:hover{border-color:var(--hr-input-border-color-hover)}.c-gbnqRc.c-gbnqRc:focus-visible ~ div:not([data-input-icon-state="error"]) svg{color:var(--hr-input-icon-color-active)}.c-gbnqRc.c-gbnqRc:disabled{text-fill-color:var(--hr-input-text-color-disabled);color:var(--hr-input-text-color-disabled);background-color:var(--hr-input-background-color-disabled);border-color:var(--hr-input-border-color-disabled);cursor:not-allowed}.c-gbnqRc.c-gbnqRc:disabled:hover{border-color:var(--hr-input-border-color-disabled)}.c-gbnqRc.c-gbnqRc:disabled ~ div:not([data-input-icon-state="error"]) svg{color:var(--hr-input-icon-color-disabled)}.c-gbnqRc.c-gbnqRc[type=password]:not(:placeholder-shown){text-security:disc !important;font-size:0.875rem;letter-spacing:0.08em}.c-gbnqRc.c-gbnqRc[type=number]::-webkit-outer-spin-button{-webkit-appearance:none;appearance:none;margin:0}.c-gbnqRc.c-gbnqRc[type=number]::-webkit-inner-spin-button{-webkit-appearance:none;appearance:none;margin:0}.c-gbnqRc.c-gbnqRc[type=number]{-moz-appearance:textfield}.c-cUYkx{-webkit-appearance:none;appearance:none;margin:0;outline:none;text-decoration:none;-webkit-user-select:none;user-select:none;-webkit-tap-highlight-color:var(--hr-button-text-color);border:none;cursor:pointer;box-sizing:border-box;line-height:100%;border-radius:var(--hr-button-border-radius);height:var(--hr-button-height-medium);transition:color, backgroundColor, borderColor;transition-duration:.2s;transition-timing-function:ease-in-out}.c-cUYkx[disabled],.c-cUYkx[aria-disabled="true"]{cursor:not-allowed}.c-cUYkx.c-cUYkx{font-size:0.875rem;font-weight:var(--hr-button-font-weight);font-family:var(--hr-font-family-text);line-height:1.25rem}.c-YCcUu{display:inline-block;overflow:hidden;text-overflow:ellipsis;white-space:nowrap}.c-lhrvpy{cursor:pointer;font-size:var(--hr-select-icon-adornment-size)}.c-innKUQ input[type="checkbox"][aria-hidden="true"]{display:none}.c-IfgQY{color:var(--hr-checkbox-icon-color-selected);height:100%}.c-IfgQY[data-disabled]{color:var(--hr-checkbox-icon-color-disabled)}.c-cOXWEf{all:unset;cursor:pointer;width:1.25rem;height:1.25rem;flex-shrink:0;border:1px solid var(--hr-form-object-border-color-default);border-radius:0.25rem}.c-cOXWEf:hover{border-color:var(--hr-form-object-border-color-hover)}.c-cOXWEf[data-state=checked],.c-cOXWEf[data-state=indeterminate]{background-color:var(--hr-checkbox-background-color-selected);border-color:var(--hr-form-object-border-color-selected)}.c-cOXWEf[data-disabled]{background-color:var(--hr-form-object-background-color-disabled);border-color:var(--hr-form-object-border-color-disabled);cursor:not-allowed}.c-cOXWEf[data-disabled][data-state=checked],.c-cOXWEf[data-disabled][data-state=indeterminate]{background-color:var(--hr-form-object-background-color-disabled-checked);border-color:var(--hr-checkbox-border-color-disabled-checked);color:var(--hr-checkbox-icon-color-disabled)}.c-cOXWEf[data-disabled]:hover{border-color:var(--hr-checkbox-border-color-disabled-checked)}.c-bHwhJJ{color:var(--hr-label-text-color-default);font-family:var(--hr-font-family-text)}.c-iYqHGX{--hr-label-text-color-default:var(--hr-form-object-label-color-default);--hr-label-text-color-disabled:var(--hr-form-object-label-color-disabled);padding-left:var(--hr-checkbox-label-gutter-space);font-family:var(--hr-font-family-text)}.c-idwzAS{font-size:var(--hr-button-icon-size)}.c-lmpoFR{text-decoration:underline;text-underline-offset:0.25rem;font-weight:var(--hr-anchor-font-weight)}.c-lmpoFR.c-lmpoFR{font-family:var(--hr-font-family-text)}.c-lmpoFR.c-lmpoFR:hover{color:var(--hr-anchor-text-color-hover)}.c-jTYnbn{width:42px;height:42px;object-fit:contain;object-position:center;border-radius:4px}.c-bUyyQp{flex-grow:1;flex-wrap:wrap;width:100%;overflow:hidden}.c-dZydjc{text-overflow:ellipsis;white-space:nowrap;max-width:75%;max-height:36px;overflow-y:hidden;color:var(--color-input-text);overflow-x:hidden}.c-hsrLxR{color:var(--color-input-text);margin-top:var(--hr-spacing-0-point-5) !important;line-height:26px;overflow:hidden;max-height:52px;text-overflow:ellipsis;word-break:break-word;-webkit-line-clamp:2;-webkit-box-orient:vertical}.c-IEEGe{color:var(--color-input-text);margin-top:var(--hr-spacing-0-point-5) !important}.c-fgXRGR{border-radius:100px;cursor:default;transition:color .2s ease-in;font-family:var(--hr-font-family-text);font-weight:var(--hr-tag-font-weight)}.c-eiWHog{padding:var(--hr-spacing-1) !important;flex-direction:column;height:100%}.c-hdHRLY{list-style:none}.c-dRiJTD{display:flex;align-items:center;background:none;color:inherit;border:none;padding:0.25rem;cursor:pointer;font-size:1.25rem;border-radius:var(--hr-button-border-radius);outline:none}.c-dRiJTD > svg{fon-size:inherit}.c-SMZYu{border:1px solid transparent;color:var(--hr-pagination-text-color-default);cursor:pointer;font-size:1.25rem;height:28px;width:28px;border-radius:4px}.c-SMZYu:hover{border:1px solid var(--hr-pagination-icon-border-color-hover);background-color:var(--hr-pagination-icon-background-color-hover);color:var(--hr-pagination-text-color-hover)}.c-SMZYu[disabled]{color:var(--hr-pagination-text-color-disabled);cursor:not-allowed}.c-SMZYu[disabled]:hover{background-color:unset;border-color:transparent;color:var(--hr-pagination-text-color-disabled)}.c-geabQv{height:28px;min-width:28px;border:1px solid var(--hr-pagination-border-color-default);border-radius:4px;background-color:transparent;color:var(--hr-pagination-text-color-default);font-size:0.875rem;line-height:1.25rem}.c-geabQv.c-geabQv{font-family:var(--hr-font-family-text)}.c-geabQv:hover{border-color:var(--hr-pagination-border-color-hover);background-color:var(--hr-pagination-background-color-hover);color:var(--hr-pagination-text-color-hover);cursor:pointer}.c-geabQv:focus{outline:none}.c-geabQv[disabled]{color:var(--hr-pagination-text-color-disabled);cursor:default}.c-fKaTQp{width:var(--hr-progress-bar-circle-size);height:var(--hr-progress-bar-circle-size);border-radius:50%;background:radial-gradient(closest-side, var(--hr-progress-bar-circle-background-color) 79%, transparent 80% 100%), conic-gradient(var(--hr-progress-color) calc(var(--hr-progress-value) * 1%), var(--hr-progress-bar-background-color) 0);color:var(--hr-progress-color);font-size:var(--hr-progress-bar-font-size);font-family:var(--hr-font-family-text);font-weight:700;letter-spacing:var(--hr-progress-bar-letter-spacing);line-height:1.5rem}.c-kPtGmf{overflow:auto;width:100%;border-radius:var(--hr-table-border-radius)}.c-tErrv{all:revert;border-collapse:collapse;border-top-right-radius:var(--hr-table-border-radius);border-top-left-radius:var(--hr-table-border-radius);width:100%;background-color:var(--hr-table-background-color);box-sizing:border-box}.c-tErrv tbody tr:last-child{border-bottom:none}.c-tErrv tbody tr:last-child td{border-bottom:none}.c-tErrv tr[data-hr-focus-item="round"]:focus-visible,.c-tErrv th[data-hr-focus-item="round"]:focus-visible,.c-tErrv td[data-hr-focus-item="round"]:focus-visible{outline-offset:-4px}.c-tErrv [data-hr-table-sort-button][data-hr-focus-item="round"]:focus-visible{outline-offset:-3px}.c-kUMmGg{background-color:var(--hr-table-header-background-color)}.c-ciiPvr{min-height:52px;color:var(--hr-table-header-text-color);font-size:0.875rem;font-weight:var(--hr-table-header-font-weight);font-family:var(--hr-font-family-text);line-height:1.25rem;vertical-align:middle;background-color:var(--hr-table-header-background-color)}.c-iLslcY{display:inline-block;vertical-align:middle}.c-ivXFTJ:focus{outline:none}.c-ivXFTJ[data-hr-focus-item="round"]:focus-visible [data-table-cell-sticky]:after{top:4px;height:calc(100% - 7px)}.c-ivXFTJ[data-hr-focus-item="round"]:focus-visible [data-table-cell-sticky]:first-of-type:after{left:4px;width:calc(100% - 4px)}.c-ivXFTJ [data-table-cell-sticky]:after{content:"";width:100%;height:100%;display:block;background:var(--hr-table-background-color);position:absolute;top:0;left:0;z-index:-1}.c-dBPfGk{padding:var(--hr-table-cell-padding);min-height:52px;vertical-align:middle}.c-cRiZRs{color:var(--hr-table-text-color);font-weight:400;font-size:0.875rem;font-family:var(--hr-font-family-text);line-height:1.25rem;display:block}.c-TqWOi{all:unset;color:var(--hr-tab-text-color-default);padding:1rem}.c-TqWOi.c-TqWOi{font-weight:var(--hr-tab-font-weight-default);font-family:var(--hr-font-family-text)}.c-TqWOi.c-TqWOi[data-state=active]{font-weight:var(--hr-tab-font-weight-active)}.c-TqWOi:hover{position:relative;background-color:var(--hr-tab-background-color-hover);color:var(--hr-tab-text-color-hover);cursor:pointer}.c-TqWOi:hover::after{content:"";position:absolute;bottom:0;left:0;height:var(--hr-tab-bottom-border-size-inactive);width:100%;background-color:var(--hr-tab-border-color-hover);border-top-left-radius:var(--hr-tab-bottom-border-radius);border-top-right-radius:var(--hr-tab-bottom-border-radius)}.c-TqWOi:active{position:relative;background-color:var(--hr-tab-background-color-pressed);border-bottom:none !important;color:var(--hr-tab-text-color-pressed) !important}.c-TqWOi:active::after{content:"";position:absolute;bottom:0;left:0;height:var(--hr-tab-bottom-border-size-active);width:100%;background-color:var(--hr-tab-border-color-pressed);border-top-left-radius:var(--hr-tab-bottom-border-radius);border-top-right-radius:var(--hr-tab-bottom-border-radius)}.c-TqWOi[data-state=active]{position:relative;color:var(--hr-tab-text-color-active)}.c-TqWOi[data-state=active]:hover{background-color:var(--hr-tab-background-color-hover)}.c-TqWOi[data-state=active]::after{content:"";position:absolute;bottom:0;left:0;height:var(--hr-tab-bottom-border-size-active);width:100%;background-color:var(--hr-tab-border-color-active);border-top-left-radius:var(--hr-tab-bottom-border-radius);border-top-right-radius:var(--hr-tab-bottom-border-radius)}.c-TqWOi.c-TqWOi[data-state=active]:active{background-color:var(--hr-tab-background-color-pressed)}.c-TqWOi[data-disabled]{color:var(--hr-tab-text-color-disabled);pointer-events:none}.c-TqWOi:focus-visible{border-radius:2px;outline:2px solid var(--hr-app-outline-color);outline-offset:-2px}.c-fEQddE{font-size:0.875rem;font-family:var(--hr-font-family-text);line-height:1.25rem;height:3.25rem;white-space:nowrap;overflow-x:auto}.c-fEQddE > [role=tab]:focus-visible{position:relative}.c-lesPJm{box-sizing:border-box}.c-kDrBaX{color:var(--hr-input-icon-color-default);font-size:1.25rem;line-height:0;border-radius:0.25rem}.c-UazGY{display:flex;align-items:center}.c-irAmsv{animation:k-eqHaWw 2s linear infinite;color:var(--hr-spinner-color);width:24px;height:24px}.c-irAmsv circle{stroke-linecap:round;animation:k-jwXwnQ 1.5s ease-in-out infinite}.c-jXlKW{width:100%;height:100%;transition:all ease 200ms}.c-iUxOXR{background:var(--hr-progress-bar-background-color);border-radius:100px;overflow:hidden;position:relative;width:100%;height:var(--hr-progress-bar-height)}}--sxs{--sxs:3 c-PJLV-cHwYNv-spacing-24 c-bQZNxM-oecih-variant-outlined c-bQZNxM-bAtpxi-padding-24 c-bQZNxM-FfGpe-maxWidth-md c-bQZNxM-gEsZWL-background-light c-cpYffr-fmUPhj-size-large c-cpYffr-RPEFT-color-dark c-PJLV-fJStuM-spacing-32 c-bQZNxM-fmOvym-padding-32 c-bQZNxM-hkTaxS-maxWidth-lg c-dbqrOz-dkdxOi-theme-light c-cmpvrW-gHitYF-isFullWidth-true c-cUYkx-dshqME-variant-primary c-cUYkx-fGHEql-isFullWidth-true c-cUYkx-ABeol-size-large c-cUYkx-QOCjp-size-medium c-cOXWEf-ctZMXv-backgroundColor-default c-iYqHGX-szynG-size-medium c-bHwhJJ-gsmDXe-isClickable-true c-cUYkx-cddMLR-variant-secondary c-idwzAS-dLeuRP-gutter-right c-lmpoFR-bRcXDr-underline-hover c-lmpoFR-kcIYeK-variant-medium c-PJLV-exgIfh-spacing-48 c-bQZNxM-VmlJX-padding-48 c-cUYkx-gFvbOT-variant-ghost c-cUYkx-emTwVZ-isIconButton-true c-idwzAS-hyOwCo-gutter-left c-fgXRGR-ghnxRT-color-secondary c-fgXRGR-kTWwkx-size-medium c-geabQv-krtRBm-isActive-true c-geabQv-ewKgMl-isEllipsis-true c-fKaTQp-eSoMnh-type-default c-kPtGmf-hgIMbz-hasBorder-true c-tErrv-kldIoI-tableBackgroundColor-base-2 c-tErrv-cBuAdj-headerBackgroundColor-grey-1 c-kUMmGg-bwHmro-hasHorizontalHeaderRowBorder-true c-ciiPvr-fMDQqx-align-left c-ciiPvr-fUUqeI-isSortableColumn-false c-ciiPvr-gCFCrC-hasVerticalHeaderBorder-true c-ciiPvr-cezigA-isMultipleSelectionAllowed-false c-ciiPvr-HmsXy-align-right c-ivXFTJ-bwHmro-hasHorizontalRowBorder-true c-dBPfGk-cezigA-isMultipleSelectionAllowed-false c-gbnqRc-hvlZMN-hasStartAdornment-true c-gbnqRc-clOyML-elementType-text c-kDrBaX-fCZMaR-align-left c-lmpoFR-hYggsl-variant-large c-ciiPvr-joLkMp-align-center c-ivXFTJ-ldAXXo-isRowClickable-true c-UazGY-JrrAq-alignItems-flex-start c-irAmsv-ckhUjb-size-lg c-jXlKW-dWYxYw-type-primary c-fgXRGR-jwiteU-size-large c-PJLV-enIeSp-hasDefaultStyle-true c-PJLV-kIiYuK-spacing-4 c-fgXRGR-kPvjIH-color-primary c-fgXRGR-ghTckX-color-warning}@media{.c-PJLV-cHwYNv-spacing-24 > * + *{margin-top:24px}.c-bQZNxM-oecih-variant-outlined{border:1px solid var(--hr-card-border-color)}.c-bQZNxM-bAtpxi-padding-24.c-bQZNxM-bAtpxi-padding-24{padding:1.5rem}.c-bQZNxM-FfGpe-maxWidth-md{max-width:636px}.c-bQZNxM-gEsZWL-background-light{background-color:var(--hr-card-background-color)}.c-cpYffr-fmUPhj-size-large{width:2.5rem;height:2.5rem;font-size:var(--hr-avatar-text-size-large)}.c-cpYffr-RPEFT-color-dark{color:var(--hr-avatar-text-color-dark);background-color:var(--hr-avatar-background-color-dark)}.c-PJLV-fJStuM-spacing-32 > * + *{margin-top:32px}.c-bQZNxM-fmOvym-padding-32.c-bQZNxM-fmOvym-padding-32{padding:2rem}.c-bQZNxM-hkTaxS-maxWidth-lg{max-width:856px}.c-dbqrOz-dkdxOi-theme-light{background-color:var(--hr-divider-background-color-light)}.c-cmpvrW-gHitYF-isFullWidth-true.c-cmpvrW-gHitYF-isFullWidth-true{width:100%}.c-cUYkx-dshqME-variant-primary{background-color:var(--hr-button-background-color-primary);color:var(--hr-button-text-color)}.c-cUYkx-dshqME-variant-primary:hover{background-color:var(--hr-button-background-color-primary-hover)}.c-cUYkx-dshqME-variant-primary[disabled],.c-cUYkx-dshqME-variant-primary[aria-disabled="true"]{background-color:var(--hr-button-background-color-disabled);color:var(--hr-button-text-color-primary-disabled)}.c-cUYkx-fGHEql-isFullWidth-true{width:100%}.c-cUYkx-ABeol-size-large{padding-left:var(--hr-button-padding-x-large);padding-right:var(--hr-button-padding-x-large);height:var(--hr-button-height-large)}.c-cUYkx-QOCjp-size-medium{padding-left:var(--hr-button-padding-x-medium);padding-right:var(--hr-button-padding-x-medium);height:var(--hr-button-height-medium)}.c-cOXWEf-ctZMXv-backgroundColor-default{background-color:var(--hr-form-object-background-color-default)}.c-bHwhJJ-gsmDXe-isClickable-true{cursor:pointer}.c-iYqHGX-szynG-size-medium{font-size:.875rem;line-height:1.25rem}.c-cUYkx-cddMLR-variant-secondary{background-color:var(--hr-button-background-color-secondary);color:var(--hr-button-text-color-secondary)}.c-cUYkx-cddMLR-variant-secondary.c-cUYkx-cddMLR-variant-secondary{border:1px solid var(--hr-button-border-color-secondary)}.c-cUYkx-cddMLR-variant-secondary:hover{background-color:var(--hr-button-background-color-secondary-hover);color:var(--hr-button-text-color-secondary-hover)}.c-cUYkx-cddMLR-variant-secondary[disabled],.c-cUYkx-cddMLR-variant-secondary[aria-disabled="true"]{background-color:var(--hr-button-background-color-secondary-disabled);color:var(--hr-button-text-color-secondary-disabled)}.c-cUYkx-cddMLR-variant-secondary[disabled].c-cUYkx-cddMLR-variant-secondary[disabled],.c-cUYkx-cddMLR-variant-secondary[aria-disabled="true"].c-cUYkx-cddMLR-variant-secondary[aria-disabled="true"]{border:1px solid var(--hr-button-border-color-secondary-disabled)}.c-idwzAS-dLeuRP-gutter-right{margin-right:var(--hr-button-icon-gutter-space)}.c-lmpoFR-bRcXDr-underline-hover{text-decoration-line:none}.c-lmpoFR-bRcXDr-underline-hover:hover{text-decoration-line:underline}.c-lmpoFR-kcIYeK-variant-medium{font-size:0.875rem;line-height:1.25rem}.c-PJLV-exgIfh-spacing-48 > * + *{margin-top:48px}.c-bQZNxM-VmlJX-padding-48.c-bQZNxM-VmlJX-padding-48{padding:3rem}.c-cUYkx-gFvbOT-variant-ghost{background-color:var(--hr-button-background-color-ghost)}.c-cUYkx-emTwVZ-isIconButton-true.c-cUYkx-emTwVZ-isIconButton-true{min-width:var(--hr-button-height-medium);min-height:var(--hr-button-height-medium);padding:0;font-size:1.25rem}.c-idwzAS-hyOwCo-gutter-left{margin-left:var(--hr-button-icon-gutter-space)}.c-fgXRGR-ghnxRT-color-secondary{color:var(--hr-tag-text-color-secondary);background-color:var(--hr-tag-background-color-secondary)}.c-fgXRGR-kTWwkx-size-medium{font-size:.75rem;line-height:1rem;padding:var(--hr-tag-padding-medium)}.c-geabQv-krtRBm-isActive-true.c-geabQv-krtRBm-isActive-true{background-color:var(--hr-pagination-background-color-selected);border-color:var(--hr-pagination-border-color-selected);color:var(--hr-pagination-text-color-selected)}.c-geabQv-krtRBm-isActive-true.c-geabQv-krtRBm-isActive-true:hover{border-color:var(--hr-pagination-border-color-selected);color:var(--hr-pagination-text-color-selected)}.c-geabQv-ewKgMl-isEllipsis-true.c-geabQv-ewKgMl-isEllipsis-true{color:var(--hr-pagination-ellipsis-color-default)}.c-geabQv-ewKgMl-isEllipsis-true.c-geabQv-ewKgMl-isEllipsis-true:hover{border-color:var(--hr-pagination-border-color-default);background-color:transparent}.c-fKaTQp-eSoMnh-type-default{--hr-progress-color:var(--hr-progress-bar-indicator-color-default)}.c-kPtGmf-hgIMbz-hasBorder-true{border:1px solid var(--hr-table-border-color)}.c-tErrv-kldIoI-tableBackgroundColor-base-2{--hr-table-background-color:var(--hr-table-background-color-base-2)}.c-tErrv-cBuAdj-headerBackgroundColor-grey-1{--hr-table-header-background-color:var(--hr-table-header-background-color-grey-1);--hr-table-header-group-background-color:var(--hr-table-header-group-background-color-grey);--hr-table-header-group-text-color:var(--hr-table-header-group-text-color-grey)}.c-kUMmGg-bwHmro-hasHorizontalHeaderRowBorder-true{border-bottom:1px solid var(--hr-table-border-color)}.c-ciiPvr-fMDQqx-align-left{text-align:left}.c-ciiPvr-fUUqeI-isSortableColumn-false{padding:var(--hr-table-cell-padding)}.c-ciiPvr-gCFCrC-hasVerticalHeaderBorder-true{border-right:1px solid var(--hr-table-border-color)}.c-ciiPvr-gCFCrC-hasVerticalHeaderBorder-true:last-child{border-right:none}.c-ciiPvr-cezigA-isMultipleSelectionAllowed-false{left:0}.c-ciiPvr-HmsXy-align-right{text-align:right}.c-ivXFTJ-bwHmro-hasHorizontalRowBorder-true{border-bottom:1px solid var(--hr-table-border-color)}.c-dBPfGk-cezigA-isMultipleSelectionAllowed-false{left:0}.c-gbnqRc-hvlZMN-hasStartAdornment-true.c-gbnqRc-hvlZMN-hasStartAdornment-true.c-gbnqRc-hvlZMN-hasStartAdornment-true{padding-left:var(--hr-input-icon-adornment-spacing)}.c-gbnqRc-clOyML-elementType-text.c-gbnqRc-clOyML-elementType-text{height:var(--hr-input-height-text)}.c-kDrBaX-fCZMaR-align-left{position:absolute;margin-left:var(--hr-input-icon-start-gutter-space)}.c-lmpoFR-hYggsl-variant-large{font-size:1rem;line-height:1.5rem}.c-ciiPvr-joLkMp-align-center{text-align:center}.c-ivXFTJ-ldAXXo-isRowClickable-true:hover td{cursor:pointer}.c-ivXFTJ-ldAXXo-isRowClickable-true:hover td:not([data-table-cell-sticky]){background-color:var(--hr-table-row-color-hover)}.c-ivXFTJ-ldAXXo-isRowClickable-true:hover td[data-table-cell-sticky]:after{background-color:var(--hr-table-row-color-hover)}.c-UazGY-JrrAq-alignItems-flex-start{align-items:flex-start}.c-irAmsv-ckhUjb-size-lg{width:32px;height:32px}.c-jXlKW-dWYxYw-type-primary{background-color:var(--hr-progress-bar-indicator-color-primary)}.c-fgXRGR-jwiteU-size-large{font-size:.875rem;line-height:1.25rem;padding:var(--hr-tag-padding-large)}.c-PJLV-enIeSp-hasDefaultStyle-true{-webkit-appearance:none;appearance:none;margin:0;padding:0;background:none;border:none;border-radius:var(--hr-button-border-radius);cursor:pointer;background-color:var(--hr-button-background-color-secondary);color:var(--hr-button-text-color-secondary)}.c-PJLV-enIeSp-hasDefaultStyle-true:hover{background-color:var(--hr-button-background-color-secondary-hover)}.c-PJLV-enIeSp-hasDefaultStyle-true[data-state=open]{background-color:var(--hr-button-background-color-secondary-pressed)}.c-PJLV-kIiYuK-spacing-4{--hr-stack-spacing:4px}.c-PJLV-kIiYuK-spacing-4 > * + *{margin-left:4px}.c-fgXRGR-kPvjIH-color-primary{color:var(--hr-tag-text-color-primary);background-color:var(--hr-tag-background-color-primary)}.c-fgXRGR-ghTckX-color-warning{color:var(--hr-tag-text-color-warning);background-color:var(--hr-tag-background-color-warning)}}--sxs{--sxs:5 c-cUYkx-eSVaTC-cv c-PJLV-Bmuyd-cv}@media{.c-cUYkx-eSVaTC-cv{color:var(--hr-button-text-color-ghost)}.c-cUYkx-eSVaTC-cv:hover{color:var(--hr-button-text-color-ghost-hover);background-color:var(--hr-button-background-color-ghost-hover)}.c-cUYkx-eSVaTC-cv[disabled],.c-cUYkx-eSVaTC-cv[aria-disabled="true"]{color:var(--hr-button-text-color-ghost-disabled);background-color:var(--hr-button-background-color-ghost-disabled)}.c-PJLV-Bmuyd-cv{min-width:var(--hr-button-height-medium);min-height:var(--hr-button-height-medium);font-size:var(--hr-dropdown-menu-trigger-font-size)}}--sxs{--sxs:6 c-cpYffr-iPJLV-css c-dbqrOz-iPJLV-css c-cmpvrW-iHneal-css c-lmpoFR-ijfCDXL-css c-dRiJTD-iPJLV-css c-kPtGmf-iPJLV-css c-lmpoFR-ikXLSPv-css c-UazGY-iPJLV-css c-cUYkx-iPJLV-css}@media{.c-cmpvrW-iHneal-css{width:304px;min-width:180px}.c-lmpoFR-ijfCDXL-css{color:var(--hr-anchor-text-color-default)}.c-lmpoFR-ijfCDXL-css.c-lmpoFR-ijfCDXL-css.c-lmpoFR-ijfCDXL-css:hover{color:var(--hr-anchor-text-color-default)}.c-lmpoFR-ikXLSPv-css{color:#408cff}.c-lmpoFR-ikXLSPv-css.c-lmpoFR-ikXLSPv-css.c-lmpoFR-ikXLSPv-css:hover{color:#408cff}}
    </style>
  


                    <script async="" src="./hackerrank_Hello World!_files/aksb.min.js.download"></script><script>var w=window;if(w.performance||w.mozPerformance||w.msPerformance||w.webkitPerformance){var d=document;AKSB=w.AKSB||{},AKSB.q=AKSB.q||[],AKSB.mark=AKSB.mark||function(e,_){AKSB.q.push(["mark",e,_||(new Date).getTime()])},AKSB.measure=AKSB.measure||function(e,_,t){AKSB.q.push(["measure",e,_,t||(new Date).getTime()])},AKSB.done=AKSB.done||function(e){AKSB.q.push(["done",e])},AKSB.mark("firstbyte",(new Date).getTime()),AKSB.prof={custid:"697829",ustr:"",originlat:"0",clientrtt:"39",ghostip:"23.201.107.7",ipv6:true,pct:"10",clientip:"2409:40f3:1018:9db5:814a:f0d3:3c14:b967",requestid:"a648668",region:"36328",protocol:"h2",blver:14,akM:"dscb",akN:"ae",akTT:"O",akTX:"1",akTI:"a648668",ai:"345742",ra:"false",pmgn:"",pmgi:"",pmp:"",qc:""},function(e){var _=d.createElement("script");_.async="async",_.src=e;var t=d.getElementsByTagName("script"),t=t[t.length-1];t.parentNode.insertBefore(_,t)}(("https:"===d.location.protocol?"https:":"http:")+"//ds-aksb-a.akamaihd.net/aksb.min.js")}</script>
                    <style>
html.scroll-hidden,html.scroll-hidden body{
  overflow: hidden;
  height:100vh;
}
html.scroll-hidden.pad-adjustment body{
    padding-right : 17px;
}
html.scroll-hidden.pad-adjustment .fixed-elm{
    padding-right : 17px;
}</style><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-6ac05d1c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-b2e219b4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-58212056.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-6667e3d8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-ba1edb62.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-3ec3624d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-9ad5df68.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-8e4f9e5b.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/hackerrank_r_challenge_list-e760c466.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list-3ef370d1.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-6ac05d1c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-b2e219b4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-58212056.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-6667e3d8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-ba1edb62.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-3ec3624d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-9ad5df68.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-8e4f9e5b.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/hackerrank_r_challenge_list-e760c466.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list-3ef370d1.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-6ac05d1c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-b2e219b4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-58212056.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-6667e3d8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-ba1edb62.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-3ec3624d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-9ad5df68.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-8e4f9e5b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list_v2-7040318d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list_v2-35457018.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_selectable_dropdown_menu_selectable_dropdown_menu_js-76febf17.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_tab_tab_js-c92fa900.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_forms_recaptcha_v3_js-node_modules_app-server-a5e17e-abb1be40.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-simplemde-editor_lib_index_js-f8ba86e2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-3df4fd7b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_forum-3c0dddfd.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_forum-568d8ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_selectable_dropdown_menu_selectable_dropdown_menu_js-76febf17.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_tab_tab_js-c92fa900.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_full_screen_button_j-cd6705-6790a014.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-6ac05d1c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-b2e219b4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-11c2f0fb.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-58212056.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-fe9e4f-ef15b19b.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-fe9e4f-3c1226fe.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es7_string_trim-right_js-node_modules_lodash_thro-afdf56-623b7db9.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ansi-to-react_lib_index_js-node_modules_core-js_fn_array_includes-0c84a1-b5f6ba1b.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/defaultVendors-node_modules_hackerrank_ide-manager_dist_es_index_js-node_modules_hackerrank_t-a0c4be-0a1fd6aa.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_ide-manager_dist_es_index_js-node_modules_hackerrank_t-a0c4be-62fe82d5.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-7995d937.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-950c76bf.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-3df4fd7b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-ba1edb62.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-229a4ee0.css"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_full_screen_view_header_scss-src_shared_styles_split_scss-src_sh-7fc55c-c7af92f7.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_full_screen_view_header_scss-src_shared_styles_split_scss-src_sh-7fc55c-44ac3adb.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/hackerrank_r_challenge-3d6173b7.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge-8100c853.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-11c2f0fb.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_editor_utils_js-node_modules_ui-kit_e-453337-8f6493b2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es7_array_flat-map_js-node_modules_core-js_module-f23b73-e57760bc.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es7_array_flat-map_js-node_modules_core-js_module-f23b73-0be353d4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-3df4fd7b.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-229a4ee0.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_leaderboard_leaderboard_js-src_shared_community_leaderboard_lead-0d850e-b68fdb00.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-1db63c33.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-e1165458.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_selectable_dropdown_menu_selectable_dropdown_menu_js-76febf17.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_tab_tab_js-c92fa900.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-11c2f0fb.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_editor_utils_js-node_modules_ui-kit_e-453337-8f6493b2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_scss-node_modules_ui-kit_es_component-09dee2-4c411b46.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-3df4fd7b.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-229a4ee0.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_leaderboard_leaderboard_js-src_shared_community_leaderboard_lead-0d850e-b68fdb00.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboardv2-7104075e.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboardv2-ab96016b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_selectable_dropdown_menu_selectable_dropdown_menu_js-76febf17.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_tab_tab_js-c92fa900.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_full_screen_button_j-cd6705-6790a014.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-6ac05d1c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-b2e219b4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-11c2f0fb.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-58212056.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-fe9e4f-ef15b19b.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-fe9e4f-3c1226fe.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es7_string_trim-right_js-node_modules_lodash_thro-afdf56-623b7db9.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ansi-to-react_lib_index_js-node_modules_core-js_fn_array_includes-0c84a1-b5f6ba1b.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/defaultVendors-node_modules_hackerrank_ide-manager_dist_es_index_js-node_modules_hackerrank_t-a0c4be-0a1fd6aa.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_ide-manager_dist_es_index_js-node_modules_hackerrank_t-a0c4be-62fe82d5.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-7995d937.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-950c76bf.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-3df4fd7b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-ba1edb62.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-229a4ee0.css"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_full_screen_view_header_scss-src_shared_styles_split_scss-src_sh-7fc55c-c7af92f7.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_full_screen_view_header_scss-src_shared_styles_split_scss-src_sh-7fc55c-44ac3adb.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/hackerrank_r_challenge-3d6173b7.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge-8100c853.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_selectable_dropdown_menu_selectable_dropdown_menu_js-76febf17.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_tab_tab_js-c92fa900.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_full_screen_button_j-cd6705-6790a014.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-6ac05d1c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-b2e219b4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-11c2f0fb.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-58212056.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-fe9e4f-ef15b19b.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-fe9e4f-3c1226fe.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es7_string_trim-right_js-node_modules_lodash_thro-afdf56-623b7db9.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ansi-to-react_lib_index_js-node_modules_core-js_fn_array_includes-0c84a1-b5f6ba1b.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/defaultVendors-node_modules_hackerrank_ide-manager_dist_es_index_js-node_modules_hackerrank_t-a0c4be-0a1fd6aa.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_ide-manager_dist_es_index_js-node_modules_hackerrank_t-a0c4be-62fe82d5.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-7995d937.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-950c76bf.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-3df4fd7b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-ba1edb62.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-229a4ee0.css"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_full_screen_view_header_scss-src_shared_styles_split_scss-src_sh-7fc55c-c7af92f7.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_full_screen_view_header_scss-src_shared_styles_split_scss-src_sh-7fc55c-44ac3adb.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/hackerrank_r_challenge-3d6173b7.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge-8100c853.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-11c2f0fb.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_editor_utils_js-node_modules_ui-kit_e-453337-8f6493b2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es7_array_flat-map_js-node_modules_core-js_module-f23b73-e57760bc.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es7_array_flat-map_js-node_modules_core-js_module-f23b73-0be353d4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-3df4fd7b.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-229a4ee0.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_leaderboard_leaderboard_js-src_shared_community_leaderboard_lead-0d850e-b68fdb00.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-1db63c33.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-e1165458.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-11c2f0fb.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_editor_utils_js-node_modules_ui-kit_e-453337-8f6493b2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es7_array_flat-map_js-node_modules_core-js_module-f23b73-e57760bc.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es7_array_flat-map_js-node_modules_core-js_module-f23b73-0be353d4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-3df4fd7b.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-229a4ee0.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_leaderboard_leaderboard_js-src_shared_community_leaderboard_lead-0d850e-b68fdb00.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-1db63c33.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-e1165458.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-6ac05d1c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-b2e219b4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-58212056.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-6667e3d8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-ba1edb62.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-3ec3624d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-9ad5df68.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-8e4f9e5b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list_v2-7040318d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list_v2-35457018.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-11c2f0fb.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_editor_utils_js-node_modules_ui-kit_e-453337-8f6493b2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es7_array_flat-map_js-node_modules_core-js_module-f23b73-e57760bc.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es7_array_flat-map_js-node_modules_core-js_module-f23b73-0be353d4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-3df4fd7b.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-229a4ee0.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_leaderboard_leaderboard_js-src_shared_community_leaderboard_lead-0d850e-b68fdb00.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-1db63c33.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-e1165458.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_survey-1436ed7d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_survey-0de995d7.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-6ac05d1c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-b2e219b4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-58212056.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-6667e3d8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_lodash_find_js-node_modules_lodas-6e4732-add2dfb8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-ba1edb62.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-3ec3624d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-9ad5df68.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-8e4f9e5b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_interview_v2_interview_mock_test_card_js-c3aacf64.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-d5043f19.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-830130d5.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-6ac05d1c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-b2e219b4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-58212056.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-6667e3d8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_lodash_find_js-node_modules_lodas-6e4732-add2dfb8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-ba1edb62.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-3ec3624d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-9ad5df68.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-8e4f9e5b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_interview_v2_interview_mock_test_card_js-c3aacf64.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-d5043f19.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-830130d5.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-6ac05d1c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-b2e219b4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-58212056.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-6667e3d8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_lodash_find_js-node_modules_lodas-6e4732-add2dfb8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-ba1edb62.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-3ec3624d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-9ad5df68.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-8e4f9e5b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_interview_v2_interview_mock_test_card_js-c3aacf64.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-d5043f19.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-830130d5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_react_select_option_with_analytics_js-node_mo-21c938-7d765501.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-sticky_lib_index_js-7078499d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_react-window_dist_index_esm_js-a0b32cbf.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-94db089a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_profileV2_onboarding_onboarding_js-f60495f7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-4c694b9a.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-a9b8ace4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_react_select_option_with_analytics_js-node_mo-21c938-7d765501.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-sticky_lib_index_js-7078499d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_react-window_dist_index_esm_js-a0b32cbf.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-94db089a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_profileV2_onboarding_onboarding_js-f60495f7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-4c694b9a.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-a9b8ace4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_extension-79a187a9.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_extension-390d34a1.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_react_select_option_with_analytics_js-node_mo-21c938-7d765501.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-sticky_lib_index_js-7078499d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_react-window_dist_index_esm_js-a0b32cbf.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-94db089a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_profileV2_onboarding_onboarding_js-f60495f7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-4c694b9a.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-a9b8ace4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_react_select_option_with_analytics_js-node_mo-21c938-7d765501.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-sticky_lib_index_js-7078499d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_react-window_dist_index_esm_js-a0b32cbf.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-94db089a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_profileV2_onboarding_onboarding_js-f60495f7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-4c694b9a.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-a9b8ace4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_react_select_option_with_analytics_js-node_mo-21c938-7d765501.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-sticky_lib_index_js-7078499d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_react-window_dist_index_esm_js-a0b32cbf.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-94db089a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_profileV2_onboarding_onboarding_js-f60495f7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-4c694b9a.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-a9b8ace4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_react_select_option_with_analytics_js-node_mo-21c938-7d765501.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-sticky_lib_index_js-7078499d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_react-window_dist_index_esm_js-a0b32cbf.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-94db089a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_profileV2_onboarding_onboarding_js-f60495f7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-4c694b9a.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-a9b8ace4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_react_select_option_with_analytics_js-node_mo-21c938-7d765501.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-sticky_lib_index_js-7078499d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_react-window_dist_index_esm_js-a0b32cbf.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-94db089a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_profileV2_onboarding_onboarding_js-f60495f7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-4c694b9a.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-a9b8ace4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_CheckCircle_-4cf9c4-d75b4e58.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_react_prefetch_js-node_modules_hr-util_es_react_use_copy_to_c-63e538-cc664c3e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_jspdf_dist_jspdf_es_min_js-c441fe25.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_copy-to-clipboard_index_js-node_modules_fontfaceobserver_fontface-b0c1c7-887d06e6.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-94db089a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-3ba8cdbd.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-ba8866e5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-08670d65.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-c1a2f942.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_CheckCircle_-4cf9c4-d75b4e58.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_react_prefetch_js-node_modules_hr-util_es_react_use_copy_to_c-63e538-cc664c3e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_jspdf_dist_jspdf_es_min_js-c441fe25.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_copy-to-clipboard_index_js-node_modules_fontfaceobserver_fontface-b0c1c7-887d06e6.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-94db089a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-3ba8cdbd.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-ba8866e5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-08670d65.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-c1a2f942.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_CheckCircle_-4cf9c4-d75b4e58.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_react_prefetch_js-node_modules_hr-util_es_react_use_copy_to_c-63e538-cc664c3e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_jspdf_dist_jspdf_es_min_js-c441fe25.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_copy-to-clipboard_index_js-node_modules_fontfaceobserver_fontface-b0c1c7-887d06e6.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-94db089a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-3ba8cdbd.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-ba8866e5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-08670d65.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-c1a2f942.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_selectable_dropdown_menu_selectable_dropdown_menu_js-76febf17.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_tab_tab_js-c92fa900.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-6ac05d1c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_react_prefetch_js-node_modules_ui-icons_es_ui_icons_ArrowRigh-16cf98-061f222f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-lines-ellipsis_lib_index_js-node_modules_ui-kit_node_module-959a6d-ae579319.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-94db089a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-3ba8cdbd.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-ba8866e5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification_test-505731b5.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification_test-05d1f124.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_mock_tests-90f6ba31.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_mock_tests-bdc10d0b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_mock_tests_perf-8c5b220b.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_mock_tests_perf-af98b056.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_dashboard_cards_email_verification_card_js-src_shared_community_-7d12ac-084da588.css"><link rel="prefetch" href="./hackerrank_Hello World!_files/hackerrank_r_dashboard_v2-de7dd4ad.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_react_prefetch_js-node_modules_ui-icons_es_ui_icons_Clipboard-6792cc-7e4dabce.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-94db089a.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_dashboard_cards_email_verification_card_js-src_shared_community_-7d12ac-084da588.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_dashboard-1c557f4d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_dashboard-2c3e0d1f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_selectable_dropdown_menu_selectable_dropdown_menu_js-76febf17.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_tab_tab_js-c92fa900.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_js-node_modules_ui-kit_es_components_-d33988-11c2f0fb.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_editor_utils_js-node_modules_ui-kit_e-453337-8f6493b2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_avatar_avatar_scss-node_modules_ui-kit_es_component-4a235a-ca49338c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_profile_card_profile_card_js-3df4fd7b.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-229a4ee0.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_leaderboard_leaderboard_js-src_shared_community_leaderboard_lead-0d850e-b68fdb00.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboard-7da28ddb.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboard-35169092.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_intersection_observer-e1b569c8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_selectable_dropdown_menu_selectable_dropdown_menu_js-76febf17.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_tab_tab_js-c92fa900.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_es_index_js-b76d9691.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_es_index_js-1f77da99.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_CheckCircle_-4cf9c4-d75b4e58.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_showdown_dist_showdown_js-44c11696.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-dnd-html5-backend_lib_index_js-node_modules_react-dnd_lib_i-9d3f76-0087a791.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-image-crop_dist_ReactCrop_js-444aa972.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_shared-components_node_modules_react-diff-view_style_index_css-no-58fd1a-bccda78d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_shared-components_node_modules_react-diff-view_style_index_css-no-58fd1a-5c429f69.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_country-flags-svg_dist_index_js-node_modules_lodash_camelCase_js--04e1f9-c4794b08.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_profileV2_onboarding_onboarding_js-f60495f7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_profile_v2-4e149217.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_profile_v2-d8923b94.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_onboarding_survey-9c38676c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_onboarding_survey-de26397d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_highcharts_highcharts_js-8e5fcb13.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_charts-c9b1b620.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_charts-88b09e4c.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_highcharts_highcharts_js-8e5fcb13.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_charts-c9b1b620.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_charts-88b09e4c.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_scoring-13a98902.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_scoring-2559ae77.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_scoring-13a98902.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_scoring-2559ae77.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-b2e219b4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_hr-util_es_react_set_inner_html_j-58877a-6493a07e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-ba1edb62.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-3ec3624d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-9ad5df68.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_interview_v2_interview_mock_test_card_js-c3aacf64.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview_v2-d3fb642f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview_v2-b025d8d5.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-6ac05d1c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-b2e219b4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_Facebook_js--defd81-58212056.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ui-kit_node_modules_lodash__MapCache_js-node_modules_ui-kit_node_-6beac7-e4546ac2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_camelCase_js-node_modules_hr-util_es_react_set_inner_html_-8d8fec-6667e3d8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_lodash_find_js-node_modules_lodas-6e4732-add2dfb8.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-ba1edb62.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-3ec3624d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-9ad5df68.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_js-8e4f9e5b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_interview_v2_interview_mock_test_card_js-c3aacf64.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-d5043f19.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview-830130d5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-d9bb40-b2e219b4.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_debounce_js-node_modules_hr-util_es_react_set_inner_html_j-58877a-6493a07e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_bookmark_bookmark_icon_js-src_shared_community_challen-fb3918-ba1edb62.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-3ec3624d.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-9ad5df68.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_interview_v2_interview_mock_test_card_js-c3aacf64.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview_v2-d3fb642f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_interview_v2-b025d8d5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_CheckCircle_-4cf9c4-d75b4e58.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_react_prefetch_js-node_modules_hr-util_es_react_use_copy_to_c-63e538-cc664c3e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_jspdf_dist_jspdf_es_min_js-c441fe25.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_copy-to-clipboard_index_js-node_modules_fontfaceobserver_fontface-b0c1c7-887d06e6.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-94db089a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-3ba8cdbd.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-ba8866e5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-08670d65.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-c1a2f942.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_shorten_url_js-node_modules_ui-icons_es_ui_icons_CheckCircle_-4cf9c4-d75b4e58.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_react_prefetch_js-node_modules_hr-util_es_react_use_copy_to_c-63e538-cc664c3e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_jspdf_dist_jspdf_es_min_js-c441fe25.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_copy-to-clipboard_index_js-node_modules_fontfaceobserver_fontface-b0c1c7-887d06e6.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_jobs_jobs_list_jobs_list_scss-src_shared_community_jobs_jobs_lis-572f8c-94db089a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-3ba8cdbd.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_skills_verification_test_test_status_js-src_shared_community_job-25740c-ba8866e5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-08670d65.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_verification-c1a2f942.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_selectable_dropdown_menu_selectable_dropdown_menu_js-76febf17.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_tab_tab_js-c92fa900.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_detect_non_safelisted_domains_js-node_modules_hr-util_es_loca-5101b2-30b4ba91.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_upload_node_modules_core-js_modules_es6_regexp_exec_js-288fb3-1b91c0ed.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_hrds_es_components_Button_Button_js-node_modules_hacke-bc9eaa-4521f2ec.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_pusher-js_dist_web_pusher_js-eb0042c7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-image-crop_dist_ReactCrop_js-444aa972.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_shared-components_form-alert_node_modules_core-js_modules__enum-k-debda2-21b0c088.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_shared-components_form-alert_node_modules_core-js_modules__enum-k-debda2-3eb20c12.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_work_common_components_invite_invite_actions_js-src_shared_work_util_user_-2d7b67-0856ebd1.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_work_common_components_invite_invite_actions_js-src_shared_work_util_user_-2d7b67-56e02e09.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_work_teams_teams_util_js-b1c70a1d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_admin-baf05fd2.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_admin-80b56bf7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_selectable_dropdown_menu_selectable_dropdown_menu_js-76febf17.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_tab_tab_js-c92fa900.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_detect_non_safelisted_domains_js-node_modules_hr-util_es_loca-5101b2-30b4ba91.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_upload_node_modules_core-js_modules_es6_regexp_exec_js-288fb3-1b91c0ed.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_hrds_es_components_Button_Button_js-node_modules_hacke-bc9eaa-4521f2ec.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_pusher-js_dist_web_pusher_js-eb0042c7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-image-crop_dist_ReactCrop_js-444aa972.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_shared-components_form-alert_node_modules_core-js_modules__enum-k-debda2-21b0c088.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_shared-components_form-alert_node_modules_core-js_modules__enum-k-debda2-3eb20c12.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_work_common_components_invite_invite_actions_js-src_shared_work_util_user_-2d7b67-0856ebd1.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_work_common_components_invite_invite_actions_js-src_shared_work_util_user_-2d7b67-56e02e09.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_work_teams_teams_util_js-b1c70a1d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_admin-baf05fd2.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_admin-80b56bf7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_selectable_dropdown_menu_selectable_dropdown_menu_js-76febf17.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_tab_tab_js-c92fa900.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_hr-util_es_detect_non_safelisted_domains_js-node_modules_hr-util_es_loca-5101b2-30b4ba91.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_upload_node_modules_core-js_modules_es6_regexp_exec_js-288fb3-1b91c0ed.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_hrds_es_components_Button_Button_js-node_modules_hacke-bc9eaa-4521f2ec.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_pusher-js_dist_web_pusher_js-eb0042c7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-image-crop_dist_ReactCrop_js-444aa972.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_shared-components_form-alert_node_modules_core-js_modules__enum-k-debda2-21b0c088.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_shared-components_form-alert_node_modules_core-js_modules__enum-k-debda2-3eb20c12.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_work_common_components_invite_invite_actions_js-src_shared_work_util_user_-2d7b67-0856ebd1.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_work_common_components_invite_invite_actions_js-src_shared_work_util_user_-2d7b67-56e02e09.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_work_teams_teams_util_js-b1c70a1d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_admin-baf05fd2.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_admin-80b56bf7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_omit_js-node_modules_hr-util_es_react_set_inner_html_js-no-ad9cb7-0aeeb735.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_omit_js-node_modules_hr-util_es_react_set_inner_html_js-no-ad9cb7-f3a2e243.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_directory-37b61828.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_directory-1eb671b0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_omit_js-node_modules_hr-util_es_react_set_inner_html_js-no-ad9cb7-0aeeb735.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_omit_js-node_modules_hr-util_es_react_set_inner_html_js-no-ad9cb7-f3a2e243.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_directory-37b61828.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_directory-1eb671b0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_react-stickynode_index_js-083d3fc3.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_omit_js-node_modules_hr-util_es_react_set_inner_html_js-no-ad9cb7-0aeeb735.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash_omit_js-node_modules_hr-util_es_react_set_inner_html_js-no-ad9cb7-f3a2e243.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_directory-37b61828.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_skills_directory-1eb671b0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_auth-33d509a6.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_auth-09ea8f5f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_submissions-a577c9fe.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_submissions-66f36903.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_administration_contests-57da2830.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_administration_contests-72c708ad.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_administration_contests-57da2830.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_administration_contests-72c708ad.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_selectable_dropdown_menu_selectable_dropdown_menu_js-76febf17.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_tab_tab_js-c92fa900.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_full_screen_button_j-cd6705-6790a014.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-fe9e4f-ef15b19b.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-fe9e4f-3c1226fe.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-07ed58-10924270.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es7_string_trim-right_js-node_modules_lodash_thro-afdf56-623b7db9.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ansi-to-react_lib_index_js-node_modules_core-js_fn_array_includes-0c84a1-b5f6ba1b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_mock-interviews-bot_dist_esm_index_js-207e3832.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-7995d937.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-950c76bf.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_full_screen_view_header_scss-src_shared_styles_split_scss-src_sh-7fc55c-c7af92f7.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_full_screen_view_header_scss-src_shared_styles_split_scss-src_sh-7fc55c-44ac3adb.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_mock_interviews-aa1ee730.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_mock_interviews-aca980b6.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_selectable_dropdown_menu_selectable_dropdown_menu_js-76febf17.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_tab_tab_js-c92fa900.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_full_screen_button_j-cd6705-6790a014.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-fe9e4f-ef15b19b.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-fe9e4f-3c1226fe.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-07ed58-10924270.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es7_string_trim-right_js-node_modules_lodash_thro-afdf56-623b7db9.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ansi-to-react_lib_index_js-node_modules_core-js_fn_array_includes-0c84a1-b5f6ba1b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_mock-interviews-bot_dist_esm_index_js-207e3832.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-7995d937.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-950c76bf.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_full_screen_view_header_scss-src_shared_styles_split_scss-src_sh-7fc55c-c7af92f7.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_full_screen_view_header_scss-src_shared_styles_split_scss-src_sh-7fc55c-44ac3adb.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_mock_interviews-aa1ee730.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_mock_interviews-aca980b6.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_selectable_dropdown_menu_selectable_dropdown_menu_js-76febf17.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_ui-kit_es_components_tab_tab_js-c92fa900.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_full_screen_button_j-cd6705-6790a014.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-fe9e4f-ef15b19b.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-fe9e4f-3c1226fe.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_countdown_timer_text_countdown_timer_js-node_-07ed58-10924270.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__createCompounder_js-node_modules_lodash_upperFirst_js-b3d375f5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_lodash__baseClone_js-7a420ead.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_core-js_modules_es7_string_trim-right_js-node_modules_lodash_thro-afdf56-623b7db9.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_ansi-to-react_lib_index_js-node_modules_core-js_fn_array_includes-0c84a1-b5f6ba1b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-node_modules_hackerrank_mock-interviews-bot_dist_esm_index_js-207e3832.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-7995d937.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-950c76bf.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_share_share_link_js-e831671e.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/commons-src_shared_community_full_screen_view_header_scss-src_shared_styles_split_scss-src_sh-7fc55c-c7af92f7.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/commons-src_shared_community_full_screen_view_header_scss-src_shared_styles_split_scss-src_sh-7fc55c-44ac3adb.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_mock_interviews-aa1ee730.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_mock_interviews-aca980b6.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_quickapply-c1e126d8.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_quickapply-bed49543.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_utils_js-node_module-d266c7-bb9e8b39.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_utils_js-node_module-d266c7-7ab73ce1.js"><link rel="prefetch" href="./hackerrank_Hello World!_files/defaultVendors-include-loader_node_modules_monaco-editor_esm_vs_editor_editor_main_js-67cff276.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/defaultVendors-include-loader_node_modules_monaco-editor_esm_vs_editor_editor_main_js-4eb10a1a.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_krackjack-1cece867.js"><link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/modules-node_modules_ui-kit_es_components_checklist_checklist_scss-6ac05d1c.css"><link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/commons-src_shared_community_challenge_challenge_list_challenge_list_container_js-src_shared_-352109-3ec3624d.css"><link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/hackerrank_r_challenge_list-e760c466.css"><link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/modules-node_modules_shared-components_testcases_es_components_testcases_index_js-node_module-fe9e4f-ef15b19b.css"><link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/defaultVendors-node_modules_hackerrank_ide-manager_dist_es_index_js-node_modules_hackerrank_t-a0c4be-0a1fd6aa.css"><link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_editors_hr_monaco_editor_js-7995d937.css"><link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/commons-src_shared_community_community_ui_profile_card_profile_card_scss-src_shared_community-7c587e-229a4ee0.css"><link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/commons-src_shared_community_full_screen_view_header_scss-src_shared_styles_split_scss-src_sh-7fc55c-c7af92f7.css"><link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/hackerrank_r_challenge-3d6173b7.css"><link rel="prefetch" as="script" href="https://hrcdn.net/fcore/assets/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_utils_js-node_module-d266c7-7ab73ce1.js"><link rel="prefetch" as="script" href="https://hrcdn.net/fcore/assets/defaultVendors-include-loader_node_modules_monaco-editor_esm_vs_editor_editor_main_js-4eb10a1a.js"><link rel="prefetch" as="script" href="https://hrcdn.net/fcore/assets/hackerrank_r_krackjack-1cece867.js"><style id="38dc4e926f668f49ff19c932acf4b1a792ed2eff13749f6bc7b33af06b5feced">._chatMessage_ezakj_1 {
  width: fit-content;
  max-width: 80%;
  margin-top: var(--hr-spacing-01);
  margin-bottom: var(--hr-spacing-01);
  padding: var(--hr-spacing-03);
  line-height: var(--hr-spacing-05);
}

._chatMessage_ezakj_1 p {
  margin: 0;
  font-size: 14px;
}

._chatMessage_ezakj_1 pre {
  padding: var(--hr-spacing-02);
  white-space: pre-wrap;
  font-family: 'Source Code Pro', monospace;
  font-size: 14px;
  font-style: normal;
  line-height: var(--hr-spacing-05);
  background-color: var(--aiAssistant-chatMessage-codeBlock-bgColor);
  border-radius: var(--hr-spacing-01);
  margin: var(--hr-spacing-02) 0 !important;
}

._chatMessage_ezakj_1 ol,
._chatMessage_ezakj_1 ul {
  display: block !important;
  list-style-type: decimal !important;
  margin-block-start: 1em !important;
  margin-block-end: 1em !important;
  margin-inline-start: 0px !important;
  margin-inline-end: 0px !important;
  padding-inline-start: 40px !important;
}

._chatMessage_ezakj_1._user_ezakj_38 {
  border-radius: var(--hr-spacing-02) var(--hr-spacing-02) 0px var(--hr-spacing-02);
  color: var(--aiAssistant-chatMessage-user-color);
  background: var(--aiAssistant-chatMessage-user-bgColor);
  margin-left: auto;
}

._chatMessage_ezakj_1._user_ezakj_38 pre {
  background-color: var(--aiAssistant-chatMessage-codeBlock-bgColor);
  color: var(--aiAssistant-chatMessage-codeBlock-color);
}

._chatMessage_ezakj_1._bot_ezakj_50 {
  border-radius: 0px var(--hr-spacing-02) var(--hr-spacing-02) var(--hr-spacing-02);
  color: var(--aiAssistant-chatMessage-bot-color);
  background: var(--aiAssistant-chatMessage-bot-bgColor);
}

._chatMessage_ezakj_1._suggestion_ezakj_56 {
  cursor: pointer;
  /* margin-top: var(--hr-spacing-03); */
  /* 4px margin already exists in .chatMessage class */
  /* margin-bottom: var(--hr-spacing-03); */
  /* 4px margin already exists in .chatMessage class */
  border-radius: var(--hr-spacing-04);
  background-color: transparent;
  border: 1px solid var(--aiAssistant-chatMessage-suggestion-borderColor);
  color: var(--aiAssistant-chatMessage-suggestion-color);

  &:hover {
    background-color: var(--aiAssistant-chatMessage-suggestion-hover-backgroundColor);
  }
}

._chatMessage_ezakj_1._codeblock_ezakj_72 {
  white-space: pre-wrap;
  padding: var(--hr-spacing-05);
  border-radius: 0px var(--hr-spacing-02) var(--hr-spacing-02) var(--hr-spacing-02);
  background-color: var(--aiAssistant-chatMessage-codeBlock-bgColor);
  color: var(--aiAssistant-chatMessage-codeBlock-color);
  font-family: 'Source Code Pro', monospace;
  font-size: 14px;
  font-style: normal;
  line-height: var(--hr-spacing-05);
}

._chatMessage_ezakj_1._fadeIn_ezakj_84 {
  animation: _fadeIn_ezakj_84 0.5s ease-in-out;
}

._chatMessage_ezakj_1._fadeOut_ezakj_88 {
  animation: _fadeOut_ezakj_88 0.5s ease-in-out;
}

._chatMessage_ezakj_1._messageGroupEnded_ezakj_92 {
  margin-top: var(--hr-spacing-02);
  /* 4px margin already exists in .chatMessage class */
  margin-bottom: var(--hr-spacing-02);
  /* 4px margin already exists in .chatMessage class */
}

@media (max-width: 1440px) {
  ._chatMessage_ezakj_1 {
    max-width: 90%;
    padding: var(--hr-spacing-02);
  }

  ._chatMessage_ezakj_1 p {
    margin: 0;
    font-size: small;
  }

  ._chatMessage_ezakj_1 pre {
    font-size: 12px;
    line-height: var(--hr-spacing-04);
    padding: var(--hr-spacing-02);
    margin: var(--hr-spacing-02) 0 !important;
  }
}

@media (max-width: 1024px) {
  ._chatMessage_ezakj_1 {
    max-width: 90%;
    padding: var(--hr-spacing-02);
  }

  ._chatMessage_ezakj_1 p {
    margin: 0;
    font-size: smaller;
  }

  ._chatMessage_ezakj_1 pre {
    font-size: 12px;
    line-height: var(--hr-spacing-04);
    padding: var(--hr-spacing-02);
  }
}</style><style id="ecb2d6f528035435a887963b24dbc7e2d67511cc15106c549ab1a698ef1a93dc">._multipleMessagesContainer_1bqp9_1 {
  display: flex;
  justify-content: flex-end;
  max-width: 80%;
  margin-left: auto;
  margin-top: var(--hr-spacing-02);
  margin-bottom: var(--hr-spacing-02);
  gap: 10px;
  flex-wrap: nowrap;
}

@media screen and (max-width: 1440px) {
  ._multipleMessagesContainer_1bqp9_1 {
    max-width: 90%;
    margin-bottom: 0;
  }
}

@media (max-width: 1024px) {
  ._multipleMessagesContainer_1bqp9_1 {
    max-width: 90%;
    flex-wrap: wrap;
    gap: 2px;
    margin-bottom: 0;
  }
}</style><style id="b0a53220f689af23ba9b3ba31fccde61c0e1cf8b12cb15e974e24fd83dda4b02">._chatPanel_wtu34_1 {
  flex: 1 1 0%;
  background-color: var(--aiAssistant-chatPanel-bgColor);
  color: var(--aiAssistant-chatPanel-color);
  transition: height 400ms ease-in-out;
}

._messageListContainer_wtu34_8 {
  padding: var(--hr-spacing-06) var(--hr-spacing-08);
}

._userInputContainer_wtu34_12 {
  padding: var(--hr-spacing-06) var(--hr-spacing-08);
  background-color: var(--aiAssistant-userInputContainer-bgColor);
}

@media (max-width: 1440px) {
  ._messageListContainer_wtu34_8 {
    padding: var(--hr-spacing-02) var(--hr-spacing-04);
  }

  ._userInputContainer_wtu34_12 {
    padding: var(--hr-spacing-02) var(--hr-spacing-04) var(--hr-spacing-03) var(--hr-spacing-04);
  }
}

@media (max-width: 1024px) {
  ._messageListContainer_wtu34_8 {
    padding: var(--hr-spacing-02) var(--hr-spacing-04);
  }

  ._userInputContainer_wtu34_12 {
    padding: var(--hr-spacing-02) var(--hr-spacing-04) var(--hr-spacing-03) var(--hr-spacing-04);
  }
}</style><style id="04de0351d98aac77eaa6741dd63d193dc61a33cc7810cf085ffd304351bb232d">._botTextArea_1a8ob_1 {
  padding: var(--hr-spacing-02);
  border-radius: 8px;
  background-color: var(--aiAssistant-textArea-bgColor);
  border: 1px solid var(--aiAssistant-textArea-borderColor);
  color: var(--aiAssistant-textArea-color);
  resize: none;

  &:focus,
  &:focus-visible,
  &:focus-within {
    outline: none;
  }
}
</style><style id="245e695de00748cd7d72f4a0116beba68d28212c639dd7ad205188500bcc3e8a">._sendIcon_1egn0_1 {
  line-height: 0;
  margin-left: -1.8rem;
  margin-bottom: 0.8rem;
}

._sendIcon_1egn0_1 svg {
  transition: opacity 0.3s;
}

._opacity025_1egn0_11 svg {
  opacity: 0.25;
}

._opacity075_1egn0_15 svg {
  opacity: 0.75;
}

._loadingIcon_1egn0_19 {
  line-height: 0;
  margin-left: -1.8rem;
  margin-bottom: 0.8rem;
}</style><style id="468843275c780dd24c18bd390ae781b2d2e647179de46f6b108e396f000e3226">._tutorbotHeader_1k2om_1 {
  height: 58px;
  background-color: var(--aiAssistant-header-bgColor);
  color: var(--aiAssistant-header-color);
  border-top: 1px solid var(--aiAssistant-header-borderColor);
  border-bottom: 1px solid var(--aiAssistant-header-borderColor);
}

._tutorbotHeader_1k2om_1::before {
  content: '';
  position: absolute;
  top: calc(100% - 58px);
  left: -100%;
  width: 66%;
  height: 100%;
  background: linear-gradient(to right,
      var(--aiAssistant-header-shineColor) 0%,
      var(--aiAssistant-header-shineColor) 100%);
  animation: _shine_1k2om_1 3s;
  animation-delay: 2s;
}

._tutorbotHeader_1k2om_1._cancelShineAnimation_1k2om_23::before {
  animation: none;
}

@keyframes _shine_1k2om_1 {
  0% {
    transform: translateX(-100%) skew(-40deg) scaleX(0.03);
    opacity: 0;
  }

  50% {
    opacity: var(--aiAssistant-header-shineOpacity);
  }

  100% {
    transform: translateX(150%) skew(-40deg) scaleX(0.03);
    opacity: 0;
  }
}

._logoContainer_1k2om_43 {
  display: flex;
  align-content: center;
  justify-content: center;
  align-items: center;
  height: 40px;
  width: 40px;
  border-radius: 50%;
  border: 1px solid var(--aiAssistant-logo-borderColor);
  background-color: var(--aiAssistant-logo-bgColor);
}
</style><style id="93ec7b7920927f46f6c3953a8a38f698aa69a82c1afc623a2c078f1dc4534e20">.aiAssistant-cursorPointer {
  cursor: pointer;
}

*,
*::before,
*::after {
  box-sizing: border-box;
}

.aiAssistant-darkTheme {
  /* TextArea */
  --aiAssistant-textArea-color: var(--hr-neutral-0);
  --aiAssistant-textArea-borderColor: var(--hr-neutral-80);
  --aiAssistant-textArea-bgColor: var(--hr-neutral-80);

  /* UserInputContainer */
  --aiAssistant-userInputContainer-bgColor: var(--hr-neutral-90);

  /* Header */
  --aiAssistant-header-color: var(--hr-neutral-0);
  --aiAssistant-header-bgColor: #0e141e;
  --aiAssistant-header-borderColor: var(--hr-neutral-70);
  --aiAssistant-header-shineColor: #D9D9D9;
  --aiAssistant-header-shineOpacity: 0.2;

  /* Logo */
  --aiAssistant-logo-bgColor: var(--hr-neutral-90);
  --aiAssistant-logo-borderColor: var(--hr-neutral-70);

  /* ChatPanel */
  --aiAssistant-chatPanel-color: var(--hr-neutral-0);
  --aiAssistant-chatPanel-bgColor: var(--hr-neutral-90);

  /* ChatMessage */
  --aiAssistant-chatMessage-bot-color: var(--hr-neutral-0);
  --aiAssistant-chatMessage-bot-bgColor: #1d2432;
  --aiAssistant-chatMessage-user-color: var(--hr-neutral-90);
  --aiAssistant-chatMessage-user-bgColor: var(--hr-neutral-30);
  --aiAssistant-chatMessage-suggestion-color: var(--hr-blue-40);
  --aiAssistant-chatMessage-suggestion-borderColor: var(--hr-blue-40);
  --aiAssistant-chatMessage-suggestion-hover-backgroundColor: var(--hr-blue-90);
  --aiAssistant-chatMessage-codeBlock-color: var(--hr-blue-10);
  --aiAssistant-chatMessage-codeBlock-bgColor: var(--hr-neutral-90);
  --aiAssistant-chatMessage-codeBlock-copyCode-color: var(--hr-neutral-0);
  --aiAssistant-chatMessage-codeBlock-copyCode-borderColor: var(--hr-neutral-0);
}

.aiAssistant-lightTheme {
  /* TextArea */
  --aiAssistant-textArea-color: var(--hr-neutral-70);
  --aiAssistant-textArea-borderColor: var(--hr-neutral-20);
  --aiAssistant-textArea-bgColor: var(--hr-neutral-5);

  /* UserInputContainer */
  --aiAssistant-userInputContainer-bgColor: var(--hr-neutral-0);

  /* Header */
  --aiAssistant-header-color: var(--hr-neutral-70);
  --aiAssistant-header-bgColor: var(--hr-neutral-5);
  --aiAssistant-header-borderColor: var(--hr-neutral-30);
  --aiAssistant-header-shineColor: #FFF;
  --aiAssistant-header-shineOpacity: 0.3;

  /* Logo */
  --aiAssistant-logo-bgColor: var(--hr-neutral-0);
  --aiAssistant-logo-borderColor: var(--hr-neutral-30);

  /* ChatPanel */
  --aiAssistant-chatPanel-color: var(--hr-neutral-70);
  --aiAssistant-chatPanel-bgColor: var(--hr-neutral-0);

  /* ChatMessage */
  --aiAssistant-chatMessage-bot-color: var(--hr-neutral-70);
  --aiAssistant-chatMessage-bot-bgColor: var(--hr-neutral-5);
  --aiAssistant-chatMessage-user-color: var(--hr-neutral-0);
  --aiAssistant-chatMessage-user-bgColor: var(--hr-neutral-70);
  --aiAssistant-chatMessage-suggestion-color: var(--hr-blue-60);
  --aiAssistant-chatMessage-suggestion-borderColor: var(--hr-blue-60);
  --aiAssistant-chatMessage-suggestion-hover-backgroundColor: var(--hr-blue-10);
  --aiAssistant-chatMessage-codeBlock-color: var(--hr-neutral-70);
  --aiAssistant-chatMessage-codeBlock-bgColor: var(--hr-neutral-0);
  --aiAssistant-chatMessage-codeBlock-copyCode-color: var(--hr-neutral-70);
  --aiAssistant-chatMessage-codeBlock-copyCode-borderColor: var(--hr-neutral-70);
}</style><link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/modules-node_modules_app-server_es_ui_component_editors_hr_monaco_editor_utils_js-node_module-d266c7-bb9e8b39.css"><link rel="stylesheet" type="text/css" href="./hackerrank_Hello World!_files/defaultVendors-include-loader_node_modules_monaco-editor_esm_vs_editor_editor_main_js-67cff276.css"><title> "Hello World!" in C | HackerRank </title><meta name="description" id="meta-description" content="This challenge will help you to learn to input some data and then output some data. "><meta property="og:title" id="meta-og-title" content="&quot;Hello World!&quot; in C | HackerRank"><meta property="og:description" id="meta-og-description" content="This challenge will help you to learn to input some data and then output some data. "><meta property="og:url" id="meta-og-url" content="https://www.hackerrank.com/challenges/hello-world-c/problem"><meta name="twitter:url" id="meta-twitter-url" content="https://www.hackerrank.com/challenges/hello-world-c/problem"><meta name="twitter:title" id="meta-twitter-title" content="&quot;Hello World!&quot; in C | HackerRank"><link rel="canonical" href="https://www.hackerrank.com/challenges/hello-world-c/problem"><style type="text/css" media="screen" class="monaco-colors">.codicon-add:before { content: '\ea60'; }
.codicon-plus:before { content: '\ea60'; }
.codicon-gist-new:before { content: '\ea60'; }
.codicon-repo-create:before { content: '\ea60'; }
.codicon-lightbulb:before { content: '\ea61'; }
.codicon-light-bulb:before { content: '\ea61'; }
.codicon-repo:before { content: '\ea62'; }
.codicon-repo-delete:before { content: '\ea62'; }
.codicon-gist-fork:before { content: '\ea63'; }
.codicon-repo-forked:before { content: '\ea63'; }
.codicon-git-pull-request:before { content: '\ea64'; }
.codicon-git-pull-request-abandoned:before { content: '\ea64'; }
.codicon-record-keys:before { content: '\ea65'; }
.codicon-keyboard:before { content: '\ea65'; }
.codicon-tag:before { content: '\ea66'; }
.codicon-tag-add:before { content: '\ea66'; }
.codicon-tag-remove:before { content: '\ea66'; }
.codicon-person:before { content: '\ea67'; }
.codicon-person-follow:before { content: '\ea67'; }
.codicon-person-outline:before { content: '\ea67'; }
.codicon-person-filled:before { content: '\ea67'; }
.codicon-git-branch:before { content: '\ea68'; }
.codicon-git-branch-create:before { content: '\ea68'; }
.codicon-git-branch-delete:before { content: '\ea68'; }
.codicon-source-control:before { content: '\ea68'; }
.codicon-mirror:before { content: '\ea69'; }
.codicon-mirror-public:before { content: '\ea69'; }
.codicon-star:before { content: '\ea6a'; }
.codicon-star-add:before { content: '\ea6a'; }
.codicon-star-delete:before { content: '\ea6a'; }
.codicon-star-empty:before { content: '\ea6a'; }
.codicon-comment:before { content: '\ea6b'; }
.codicon-comment-add:before { content: '\ea6b'; }
.codicon-alert:before { content: '\ea6c'; }
.codicon-warning:before { content: '\ea6c'; }
.codicon-search:before { content: '\ea6d'; }
.codicon-search-save:before { content: '\ea6d'; }
.codicon-log-out:before { content: '\ea6e'; }
.codicon-sign-out:before { content: '\ea6e'; }
.codicon-log-in:before { content: '\ea6f'; }
.codicon-sign-in:before { content: '\ea6f'; }
.codicon-eye:before { content: '\ea70'; }
.codicon-eye-unwatch:before { content: '\ea70'; }
.codicon-eye-watch:before { content: '\ea70'; }
.codicon-circle-filled:before { content: '\ea71'; }
.codicon-primitive-dot:before { content: '\ea71'; }
.codicon-close-dirty:before { content: '\ea71'; }
.codicon-debug-breakpoint:before { content: '\ea71'; }
.codicon-debug-breakpoint-disabled:before { content: '\ea71'; }
.codicon-debug-hint:before { content: '\ea71'; }
.codicon-primitive-square:before { content: '\ea72'; }
.codicon-edit:before { content: '\ea73'; }
.codicon-pencil:before { content: '\ea73'; }
.codicon-info:before { content: '\ea74'; }
.codicon-issue-opened:before { content: '\ea74'; }
.codicon-gist-private:before { content: '\ea75'; }
.codicon-git-fork-private:before { content: '\ea75'; }
.codicon-lock:before { content: '\ea75'; }
.codicon-mirror-private:before { content: '\ea75'; }
.codicon-close:before { content: '\ea76'; }
.codicon-remove-close:before { content: '\ea76'; }
.codicon-x:before { content: '\ea76'; }
.codicon-repo-sync:before { content: '\ea77'; }
.codicon-sync:before { content: '\ea77'; }
.codicon-clone:before { content: '\ea78'; }
.codicon-desktop-download:before { content: '\ea78'; }
.codicon-beaker:before { content: '\ea79'; }
.codicon-microscope:before { content: '\ea79'; }
.codicon-vm:before { content: '\ea7a'; }
.codicon-device-desktop:before { content: '\ea7a'; }
.codicon-file:before { content: '\ea7b'; }
.codicon-file-text:before { content: '\ea7b'; }
.codicon-more:before { content: '\ea7c'; }
.codicon-ellipsis:before { content: '\ea7c'; }
.codicon-kebab-horizontal:before { content: '\ea7c'; }
.codicon-mail-reply:before { content: '\ea7d'; }
.codicon-reply:before { content: '\ea7d'; }
.codicon-organization:before { content: '\ea7e'; }
.codicon-organization-filled:before { content: '\ea7e'; }
.codicon-organization-outline:before { content: '\ea7e'; }
.codicon-new-file:before { content: '\ea7f'; }
.codicon-file-add:before { content: '\ea7f'; }
.codicon-new-folder:before { content: '\ea80'; }
.codicon-file-directory-create:before { content: '\ea80'; }
.codicon-trash:before { content: '\ea81'; }
.codicon-trashcan:before { content: '\ea81'; }
.codicon-history:before { content: '\ea82'; }
.codicon-clock:before { content: '\ea82'; }
.codicon-folder:before { content: '\ea83'; }
.codicon-file-directory:before { content: '\ea83'; }
.codicon-symbol-folder:before { content: '\ea83'; }
.codicon-logo-github:before { content: '\ea84'; }
.codicon-mark-github:before { content: '\ea84'; }
.codicon-github:before { content: '\ea84'; }
.codicon-terminal:before { content: '\ea85'; }
.codicon-console:before { content: '\ea85'; }
.codicon-repl:before { content: '\ea85'; }
.codicon-zap:before { content: '\ea86'; }
.codicon-symbol-event:before { content: '\ea86'; }
.codicon-error:before { content: '\ea87'; }
.codicon-stop:before { content: '\ea87'; }
.codicon-variable:before { content: '\ea88'; }
.codicon-symbol-variable:before { content: '\ea88'; }
.codicon-array:before { content: '\ea8a'; }
.codicon-symbol-array:before { content: '\ea8a'; }
.codicon-symbol-module:before { content: '\ea8b'; }
.codicon-symbol-package:before { content: '\ea8b'; }
.codicon-symbol-namespace:before { content: '\ea8b'; }
.codicon-symbol-object:before { content: '\ea8b'; }
.codicon-symbol-method:before { content: '\ea8c'; }
.codicon-symbol-function:before { content: '\ea8c'; }
.codicon-symbol-constructor:before { content: '\ea8c'; }
.codicon-symbol-boolean:before { content: '\ea8f'; }
.codicon-symbol-null:before { content: '\ea8f'; }
.codicon-symbol-numeric:before { content: '\ea90'; }
.codicon-symbol-number:before { content: '\ea90'; }
.codicon-symbol-structure:before { content: '\ea91'; }
.codicon-symbol-struct:before { content: '\ea91'; }
.codicon-symbol-parameter:before { content: '\ea92'; }
.codicon-symbol-type-parameter:before { content: '\ea92'; }
.codicon-symbol-key:before { content: '\ea93'; }
.codicon-symbol-text:before { content: '\ea93'; }
.codicon-symbol-reference:before { content: '\ea94'; }
.codicon-go-to-file:before { content: '\ea94'; }
.codicon-symbol-enum:before { content: '\ea95'; }
.codicon-symbol-value:before { content: '\ea95'; }
.codicon-symbol-ruler:before { content: '\ea96'; }
.codicon-symbol-unit:before { content: '\ea96'; }
.codicon-activate-breakpoints:before { content: '\ea97'; }
.codicon-archive:before { content: '\ea98'; }
.codicon-arrow-both:before { content: '\ea99'; }
.codicon-arrow-down:before { content: '\ea9a'; }
.codicon-arrow-left:before { content: '\ea9b'; }
.codicon-arrow-right:before { content: '\ea9c'; }
.codicon-arrow-small-down:before { content: '\ea9d'; }
.codicon-arrow-small-left:before { content: '\ea9e'; }
.codicon-arrow-small-right:before { content: '\ea9f'; }
.codicon-arrow-small-up:before { content: '\eaa0'; }
.codicon-arrow-up:before { content: '\eaa1'; }
.codicon-bell:before { content: '\eaa2'; }
.codicon-bold:before { content: '\eaa3'; }
.codicon-book:before { content: '\eaa4'; }
.codicon-bookmark:before { content: '\eaa5'; }
.codicon-debug-breakpoint-conditional-unverified:before { content: '\eaa6'; }
.codicon-debug-breakpoint-conditional:before { content: '\eaa7'; }
.codicon-debug-breakpoint-conditional-disabled:before { content: '\eaa7'; }
.codicon-debug-breakpoint-data-unverified:before { content: '\eaa8'; }
.codicon-debug-breakpoint-data:before { content: '\eaa9'; }
.codicon-debug-breakpoint-data-disabled:before { content: '\eaa9'; }
.codicon-debug-breakpoint-log-unverified:before { content: '\eaaa'; }
.codicon-debug-breakpoint-log:before { content: '\eaab'; }
.codicon-debug-breakpoint-log-disabled:before { content: '\eaab'; }
.codicon-briefcase:before { content: '\eaac'; }
.codicon-broadcast:before { content: '\eaad'; }
.codicon-browser:before { content: '\eaae'; }
.codicon-bug:before { content: '\eaaf'; }
.codicon-calendar:before { content: '\eab0'; }
.codicon-case-sensitive:before { content: '\eab1'; }
.codicon-check:before { content: '\eab2'; }
.codicon-checklist:before { content: '\eab3'; }
.codicon-chevron-down:before { content: '\eab4'; }
.codicon-chevron-left:before { content: '\eab5'; }
.codicon-chevron-right:before { content: '\eab6'; }
.codicon-chevron-up:before { content: '\eab7'; }
.codicon-chrome-close:before { content: '\eab8'; }
.codicon-chrome-maximize:before { content: '\eab9'; }
.codicon-chrome-minimize:before { content: '\eaba'; }
.codicon-chrome-restore:before { content: '\eabb'; }
.codicon-circle-outline:before { content: '\eabc'; }
.codicon-debug-breakpoint-unverified:before { content: '\eabc'; }
.codicon-circle-slash:before { content: '\eabd'; }
.codicon-circuit-board:before { content: '\eabe'; }
.codicon-clear-all:before { content: '\eabf'; }
.codicon-clippy:before { content: '\eac0'; }
.codicon-close-all:before { content: '\eac1'; }
.codicon-cloud-download:before { content: '\eac2'; }
.codicon-cloud-upload:before { content: '\eac3'; }
.codicon-code:before { content: '\eac4'; }
.codicon-collapse-all:before { content: '\eac5'; }
.codicon-color-mode:before { content: '\eac6'; }
.codicon-comment-discussion:before { content: '\eac7'; }
.codicon-compare-changes:before { content: '\eafd'; }
.codicon-credit-card:before { content: '\eac9'; }
.codicon-dash:before { content: '\eacc'; }
.codicon-dashboard:before { content: '\eacd'; }
.codicon-database:before { content: '\eace'; }
.codicon-debug-continue:before { content: '\eacf'; }
.codicon-debug-disconnect:before { content: '\ead0'; }
.codicon-debug-pause:before { content: '\ead1'; }
.codicon-debug-restart:before { content: '\ead2'; }
.codicon-debug-start:before { content: '\ead3'; }
.codicon-debug-step-into:before { content: '\ead4'; }
.codicon-debug-step-out:before { content: '\ead5'; }
.codicon-debug-step-over:before { content: '\ead6'; }
.codicon-debug-stop:before { content: '\ead7'; }
.codicon-debug:before { content: '\ead8'; }
.codicon-device-camera-video:before { content: '\ead9'; }
.codicon-device-camera:before { content: '\eada'; }
.codicon-device-mobile:before { content: '\eadb'; }
.codicon-diff-added:before { content: '\eadc'; }
.codicon-diff-ignored:before { content: '\eadd'; }
.codicon-diff-modified:before { content: '\eade'; }
.codicon-diff-removed:before { content: '\eadf'; }
.codicon-diff-renamed:before { content: '\eae0'; }
.codicon-diff:before { content: '\eae1'; }
.codicon-discard:before { content: '\eae2'; }
.codicon-editor-layout:before { content: '\eae3'; }
.codicon-empty-window:before { content: '\eae4'; }
.codicon-exclude:before { content: '\eae5'; }
.codicon-extensions:before { content: '\eae6'; }
.codicon-eye-closed:before { content: '\eae7'; }
.codicon-file-binary:before { content: '\eae8'; }
.codicon-file-code:before { content: '\eae9'; }
.codicon-file-media:before { content: '\eaea'; }
.codicon-file-pdf:before { content: '\eaeb'; }
.codicon-file-submodule:before { content: '\eaec'; }
.codicon-file-symlink-directory:before { content: '\eaed'; }
.codicon-file-symlink-file:before { content: '\eaee'; }
.codicon-file-zip:before { content: '\eaef'; }
.codicon-files:before { content: '\eaf0'; }
.codicon-filter:before { content: '\eaf1'; }
.codicon-flame:before { content: '\eaf2'; }
.codicon-fold-down:before { content: '\eaf3'; }
.codicon-fold-up:before { content: '\eaf4'; }
.codicon-fold:before { content: '\eaf5'; }
.codicon-folder-active:before { content: '\eaf6'; }
.codicon-folder-opened:before { content: '\eaf7'; }
.codicon-gear:before { content: '\eaf8'; }
.codicon-gift:before { content: '\eaf9'; }
.codicon-gist-secret:before { content: '\eafa'; }
.codicon-gist:before { content: '\eafb'; }
.codicon-git-commit:before { content: '\eafc'; }
.codicon-git-compare:before { content: '\eafd'; }
.codicon-git-merge:before { content: '\eafe'; }
.codicon-github-action:before { content: '\eaff'; }
.codicon-github-alt:before { content: '\eb00'; }
.codicon-globe:before { content: '\eb01'; }
.codicon-grabber:before { content: '\eb02'; }
.codicon-graph:before { content: '\eb03'; }
.codicon-gripper:before { content: '\eb04'; }
.codicon-heart:before { content: '\eb05'; }
.codicon-home:before { content: '\eb06'; }
.codicon-horizontal-rule:before { content: '\eb07'; }
.codicon-hubot:before { content: '\eb08'; }
.codicon-inbox:before { content: '\eb09'; }
.codicon-issue-closed:before { content: '\eba4'; }
.codicon-issue-reopened:before { content: '\eb0b'; }
.codicon-issues:before { content: '\eb0c'; }
.codicon-italic:before { content: '\eb0d'; }
.codicon-jersey:before { content: '\eb0e'; }
.codicon-json:before { content: '\eb0f'; }
.codicon-kebab-vertical:before { content: '\eb10'; }
.codicon-key:before { content: '\eb11'; }
.codicon-law:before { content: '\eb12'; }
.codicon-lightbulb-autofix:before { content: '\eb13'; }
.codicon-link-external:before { content: '\eb14'; }
.codicon-link:before { content: '\eb15'; }
.codicon-list-ordered:before { content: '\eb16'; }
.codicon-list-unordered:before { content: '\eb17'; }
.codicon-live-share:before { content: '\eb18'; }
.codicon-loading:before { content: '\eb19'; }
.codicon-location:before { content: '\eb1a'; }
.codicon-mail-read:before { content: '\eb1b'; }
.codicon-mail:before { content: '\eb1c'; }
.codicon-markdown:before { content: '\eb1d'; }
.codicon-megaphone:before { content: '\eb1e'; }
.codicon-mention:before { content: '\eb1f'; }
.codicon-milestone:before { content: '\eb20'; }
.codicon-mortar-board:before { content: '\eb21'; }
.codicon-move:before { content: '\eb22'; }
.codicon-multiple-windows:before { content: '\eb23'; }
.codicon-mute:before { content: '\eb24'; }
.codicon-no-newline:before { content: '\eb25'; }
.codicon-note:before { content: '\eb26'; }
.codicon-octoface:before { content: '\eb27'; }
.codicon-open-preview:before { content: '\eb28'; }
.codicon-package:before { content: '\eb29'; }
.codicon-paintcan:before { content: '\eb2a'; }
.codicon-pin:before { content: '\eb2b'; }
.codicon-play:before { content: '\eb2c'; }
.codicon-run:before { content: '\eb2c'; }
.codicon-plug:before { content: '\eb2d'; }
.codicon-preserve-case:before { content: '\eb2e'; }
.codicon-preview:before { content: '\eb2f'; }
.codicon-project:before { content: '\eb30'; }
.codicon-pulse:before { content: '\eb31'; }
.codicon-question:before { content: '\eb32'; }
.codicon-quote:before { content: '\eb33'; }
.codicon-radio-tower:before { content: '\eb34'; }
.codicon-reactions:before { content: '\eb35'; }
.codicon-references:before { content: '\eb36'; }
.codicon-refresh:before { content: '\eb37'; }
.codicon-regex:before { content: '\eb38'; }
.codicon-remote-explorer:before { content: '\eb39'; }
.codicon-remote:before { content: '\eb3a'; }
.codicon-remove:before { content: '\eb3b'; }
.codicon-replace-all:before { content: '\eb3c'; }
.codicon-replace:before { content: '\eb3d'; }
.codicon-repo-clone:before { content: '\eb3e'; }
.codicon-repo-force-push:before { content: '\eb3f'; }
.codicon-repo-pull:before { content: '\eb40'; }
.codicon-repo-push:before { content: '\eb41'; }
.codicon-report:before { content: '\eb42'; }
.codicon-request-changes:before { content: '\eb43'; }
.codicon-rocket:before { content: '\eb44'; }
.codicon-root-folder-opened:before { content: '\eb45'; }
.codicon-root-folder:before { content: '\eb46'; }
.codicon-rss:before { content: '\eb47'; }
.codicon-ruby:before { content: '\eb48'; }
.codicon-save-all:before { content: '\eb49'; }
.codicon-save-as:before { content: '\eb4a'; }
.codicon-save:before { content: '\eb4b'; }
.codicon-screen-full:before { content: '\eb4c'; }
.codicon-screen-normal:before { content: '\eb4d'; }
.codicon-search-stop:before { content: '\eb4e'; }
.codicon-server:before { content: '\eb50'; }
.codicon-settings-gear:before { content: '\eb51'; }
.codicon-settings:before { content: '\eb52'; }
.codicon-shield:before { content: '\eb53'; }
.codicon-smiley:before { content: '\eb54'; }
.codicon-sort-precedence:before { content: '\eb55'; }
.codicon-split-horizontal:before { content: '\eb56'; }
.codicon-split-vertical:before { content: '\eb57'; }
.codicon-squirrel:before { content: '\eb58'; }
.codicon-star-full:before { content: '\eb59'; }
.codicon-star-half:before { content: '\eb5a'; }
.codicon-symbol-class:before { content: '\eb5b'; }
.codicon-symbol-color:before { content: '\eb5c'; }
.codicon-symbol-constant:before { content: '\eb5d'; }
.codicon-symbol-enum-member:before { content: '\eb5e'; }
.codicon-symbol-field:before { content: '\eb5f'; }
.codicon-symbol-file:before { content: '\eb60'; }
.codicon-symbol-interface:before { content: '\eb61'; }
.codicon-symbol-keyword:before { content: '\eb62'; }
.codicon-symbol-misc:before { content: '\eb63'; }
.codicon-symbol-operator:before { content: '\eb64'; }
.codicon-symbol-property:before { content: '\eb65'; }
.codicon-wrench:before { content: '\eb65'; }
.codicon-wrench-subaction:before { content: '\eb65'; }
.codicon-symbol-snippet:before { content: '\eb66'; }
.codicon-tasklist:before { content: '\eb67'; }
.codicon-telescope:before { content: '\eb68'; }
.codicon-text-size:before { content: '\eb69'; }
.codicon-three-bars:before { content: '\eb6a'; }
.codicon-thumbsdown:before { content: '\eb6b'; }
.codicon-thumbsup:before { content: '\eb6c'; }
.codicon-tools:before { content: '\eb6d'; }
.codicon-triangle-down:before { content: '\eb6e'; }
.codicon-triangle-left:before { content: '\eb6f'; }
.codicon-triangle-right:before { content: '\eb70'; }
.codicon-triangle-up:before { content: '\eb71'; }
.codicon-twitter:before { content: '\eb72'; }
.codicon-unfold:before { content: '\eb73'; }
.codicon-unlock:before { content: '\eb74'; }
.codicon-unmute:before { content: '\eb75'; }
.codicon-unverified:before { content: '\eb76'; }
.codicon-verified:before { content: '\eb77'; }
.codicon-versions:before { content: '\eb78'; }
.codicon-vm-active:before { content: '\eb79'; }
.codicon-vm-outline:before { content: '\eb7a'; }
.codicon-vm-running:before { content: '\eb7b'; }
.codicon-watch:before { content: '\eb7c'; }
.codicon-whitespace:before { content: '\eb7d'; }
.codicon-whole-word:before { content: '\eb7e'; }
.codicon-window:before { content: '\eb7f'; }
.codicon-word-wrap:before { content: '\eb80'; }
.codicon-zoom-in:before { content: '\eb81'; }
.codicon-zoom-out:before { content: '\eb82'; }
.codicon-list-filter:before { content: '\eb83'; }
.codicon-list-flat:before { content: '\eb84'; }
.codicon-list-selection:before { content: '\eb85'; }
.codicon-selection:before { content: '\eb85'; }
.codicon-list-tree:before { content: '\eb86'; }
.codicon-debug-breakpoint-function-unverified:before { content: '\eb87'; }
.codicon-debug-breakpoint-function:before { content: '\eb88'; }
.codicon-debug-breakpoint-function-disabled:before { content: '\eb88'; }
.codicon-debug-stackframe-active:before { content: '\eb89'; }
.codicon-debug-stackframe-dot:before { content: '\eb8a'; }
.codicon-debug-stackframe:before { content: '\eb8b'; }
.codicon-debug-stackframe-focused:before { content: '\eb8b'; }
.codicon-debug-breakpoint-unsupported:before { content: '\eb8c'; }
.codicon-symbol-string:before { content: '\eb8d'; }
.codicon-debug-reverse-continue:before { content: '\eb8e'; }
.codicon-debug-step-back:before { content: '\eb8f'; }
.codicon-debug-restart-frame:before { content: '\eb90'; }
.codicon-call-incoming:before { content: '\eb92'; }
.codicon-call-outgoing:before { content: '\eb93'; }
.codicon-menu:before { content: '\eb94'; }
.codicon-expand-all:before { content: '\eb95'; }
.codicon-feedback:before { content: '\eb96'; }
.codicon-group-by-ref-type:before { content: '\eb97'; }
.codicon-ungroup-by-ref-type:before { content: '\eb98'; }
.codicon-account:before { content: '\eb99'; }
.codicon-bell-dot:before { content: '\eb9a'; }
.codicon-debug-console:before { content: '\eb9b'; }
.codicon-library:before { content: '\eb9c'; }
.codicon-output:before { content: '\eb9d'; }
.codicon-run-all:before { content: '\eb9e'; }
.codicon-sync-ignored:before { content: '\eb9f'; }
.codicon-pinned:before { content: '\eba0'; }
.codicon-github-inverted:before { content: '\eba1'; }
.codicon-debug-alt:before { content: '\eb91'; }
.codicon-server-process:before { content: '\eba2'; }
.codicon-server-environment:before { content: '\eba3'; }
.codicon-pass:before { content: '\eba4'; }
.codicon-stop-circle:before { content: '\eba5'; }
.codicon-play-circle:before { content: '\eba6'; }
.codicon-record:before { content: '\eba7'; }
.codicon-debug-alt-small:before { content: '\eba8'; }
.codicon-vm-connect:before { content: '\eba9'; }
.codicon-cloud:before { content: '\ebaa'; }
.codicon-merge:before { content: '\ebab'; }
.codicon-export:before { content: '\ebac'; }
.codicon-graph-left:before { content: '\ebad'; }
.codicon-magnet:before { content: '\ebae'; }
.codicon-notebook:before { content: '\ebaf'; }
.codicon-redo:before { content: '\ebb0'; }
.codicon-check-all:before { content: '\ebb1'; }
.codicon-pinned-dirty:before { content: '\ebb2'; }
.codicon-pass-filled:before { content: '\ebb3'; }
.codicon-circle-large-filled:before { content: '\ebb4'; }
.codicon-circle-large-outline:before { content: '\ebb5'; }
.codicon-combine:before { content: '\ebb6'; }
.codicon-gather:before { content: '\ebb6'; }
.codicon-table:before { content: '\ebb7'; }
.codicon-variable-group:before { content: '\ebb8'; }
.codicon-type-hierarchy:before { content: '\ebb9'; }
.codicon-type-hierarchy-sub:before { content: '\ebba'; }
.codicon-type-hierarchy-super:before { content: '\ebbb'; }
.codicon-git-pull-request-create:before { content: '\ebbc'; }
.codicon-run-above:before { content: '\ebbd'; }
.codicon-run-below:before { content: '\ebbe'; }
.codicon-notebook-template:before { content: '\ebbf'; }
.codicon-debug-rerun:before { content: '\ebc0'; }
.codicon-workspace-trusted:before { content: '\ebc1'; }
.codicon-workspace-untrusted:before { content: '\ebc2'; }
.codicon-workspace-unspecified:before { content: '\ebc3'; }
.codicon-terminal-cmd:before { content: '\ebc4'; }
.codicon-terminal-debian:before { content: '\ebc5'; }
.codicon-terminal-linux:before { content: '\ebc6'; }
.codicon-terminal-powershell:before { content: '\ebc7'; }
.codicon-terminal-tmux:before { content: '\ebc8'; }
.codicon-terminal-ubuntu:before { content: '\ebc9'; }
.codicon-terminal-bash:before { content: '\ebca'; }
.codicon-arrow-swap:before { content: '\ebcb'; }
.codicon-copy:before { content: '\ebcc'; }
.codicon-person-add:before { content: '\ebcd'; }
.codicon-filter-filled:before { content: '\ebce'; }
.codicon-wand:before { content: '\ebcf'; }
.codicon-debug-line-by-line:before { content: '\ebd0'; }
.codicon-inspect:before { content: '\ebd1'; }
.codicon-layers:before { content: '\ebd2'; }
.codicon-layers-dot:before { content: '\ebd3'; }
.codicon-layers-active:before { content: '\ebd4'; }
.codicon-compass:before { content: '\ebd5'; }
.codicon-compass-dot:before { content: '\ebd6'; }
.codicon-compass-active:before { content: '\ebd7'; }
.codicon-azure:before { content: '\ebd8'; }
.codicon-issue-draft:before { content: '\ebd9'; }
.codicon-git-pull-request-closed:before { content: '\ebda'; }
.codicon-git-pull-request-draft:before { content: '\ebdb'; }
.codicon-debug-all:before { content: '\ebdc'; }
.codicon-debug-coverage:before { content: '\ebdd'; }
.codicon-run-errors:before { content: '\ebde'; }
.codicon-folder-library:before { content: '\ebdf'; }
.codicon-drop-down-button:before { content: '\eab4'; }
.codicon-scrollbar-button-left:before { content: '\eb6f'; }
.codicon-scrollbar-button-right:before { content: '\eb70'; }
.codicon-scrollbar-button-up:before { content: '\eb71'; }
.codicon-scrollbar-button-down:before { content: '\eb6e'; }
.codicon-widget-close:before { content: '\ea76'; }
.codicon-marker-navigation-next:before { content: '\ea9a'; }
.codicon-marker-navigation-previous:before { content: '\eaa1'; }
.codicon-suggest-more-info:before { content: '\eab6'; }
.codicon-tree-item-expanded:before { content: '\eab4'; }
.codicon-tree-filter-on-type-on:before { content: '\eb83'; }
.codicon-tree-filter-on-type-off:before { content: '\eb85'; }
.codicon-tree-filter-clear:before { content: '\ea76'; }
.codicon-tree-item-loading:before { content: '\eb19'; }
.codicon-find-selection:before { content: '\eb85'; }
.codicon-find-collapsed:before { content: '\eab6'; }
.codicon-find-expanded:before { content: '\eab4'; }
.codicon-find-replace:before { content: '\eb3d'; }
.codicon-find-replace-all:before { content: '\eb3c'; }
.codicon-find-previous-match:before { content: '\eaa1'; }
.codicon-find-next-match:before { content: '\ea9a'; }
.codicon-folding-expanded:before { content: '\eab4'; }
.codicon-folding-collapsed:before { content: '\eab6'; }
.codicon-parameter-hints-next:before { content: '\eab4'; }
.codicon-parameter-hints-previous:before { content: '\eab7'; }
.codicon-diff-review-insert:before { content: '\ea60'; }
.codicon-diff-review-remove:before { content: '\eb3b'; }
.codicon-diff-review-close:before { content: '\ea76'; }
.codicon-diff-insert:before { content: '\ea60'; }
.codicon-diff-remove:before { content: '\eb3b'; }
.codicon-menu-selection:before { content: '\eab2'; }
.codicon-menu-submenu:before { content: '\eab6'; }
.codicon-quick-input-back:before { content: '\ea9b'; }
.monaco-editor .accessibilityHelpWidget { background-color: #f3f3f3; }
.monaco-editor .accessibilityHelpWidget { color: #616161; }
.monaco-editor .accessibilityHelpWidget { box-shadow: 0 2px 8px rgba(0, 0, 0, 0.16); }
.monaco-editor, .monaco-editor-background, .monaco-editor .inputarea.ime-input { background-color: #fffffe; }
.monaco-editor, .monaco-editor .inputarea.ime-input { color: #000000; }
.monaco-editor .margin { background-color: #fffffe; }
.monaco-editor .rangeHighlight { background-color: rgba(253, 255, 0, 0.2); }
.monaco-editor .symbolHighlight { background-color: rgba(234, 92, 0, 0.33); }
.monaco-editor .mtkw { color: rgba(51, 51, 51, 0.2) !important; }
.monaco-editor .mtkz { color: rgba(51, 51, 51, 0.2) !important; }
.monaco-editor .unexpected-closing-bracket { color: rgba(255, 18, 18, 0.8); }
.monaco-editor .bracket-highlighting-0 { color: #0431fa; }
.monaco-editor .bracket-highlighting-1 { color: #319331; }
.monaco-editor .bracket-highlighting-2 { color: #7b3814; }
.monaco-editor .bracket-highlighting-3 { color: #0431fa; }
.monaco-editor .bracket-highlighting-4 { color: #319331; }
.monaco-editor .bracket-highlighting-5 { color: #7b3814; }
.monaco-editor .bracket-highlighting-6 { color: #0431fa; }
.monaco-editor .bracket-highlighting-7 { color: #319331; }
.monaco-editor .bracket-highlighting-8 { color: #7b3814; }
.monaco-editor .bracket-highlighting-9 { color: #0431fa; }
.monaco-editor .bracket-highlighting-10 { color: #319331; }
.monaco-editor .bracket-highlighting-11 { color: #7b3814; }
.monaco-editor .bracket-highlighting-12 { color: #0431fa; }
.monaco-editor .bracket-highlighting-13 { color: #319331; }
.monaco-editor .bracket-highlighting-14 { color: #7b3814; }
.monaco-editor .bracket-highlighting-15 { color: #0431fa; }
.monaco-editor .bracket-highlighting-16 { color: #319331; }
.monaco-editor .bracket-highlighting-17 { color: #7b3814; }
.monaco-editor .bracket-highlighting-18 { color: #0431fa; }
.monaco-editor .bracket-highlighting-19 { color: #319331; }
.monaco-editor .bracket-highlighting-20 { color: #7b3814; }
.monaco-editor .bracket-highlighting-21 { color: #0431fa; }
.monaco-editor .bracket-highlighting-22 { color: #319331; }
.monaco-editor .bracket-highlighting-23 { color: #7b3814; }
.monaco-editor .bracket-highlighting-24 { color: #0431fa; }
.monaco-editor .bracket-highlighting-25 { color: #319331; }
.monaco-editor .bracket-highlighting-26 { color: #7b3814; }
.monaco-editor .bracket-highlighting-27 { color: #0431fa; }
.monaco-editor .bracket-highlighting-28 { color: #319331; }
.monaco-editor .bracket-highlighting-29 { color: #7b3814; }
.monaco-editor .bracket-match { background-color: rgba(0, 100, 0, 0.1); }
.monaco-editor .bracket-match { border: 1px solid #b9b9b9; }
.monaco-editor .monaco-editor-overlaymessage .anchor.below { border-top-color: #007acc; }
.monaco-editor .monaco-editor-overlaymessage .anchor.top { border-bottom-color: #007acc; }
.monaco-editor .monaco-editor-overlaymessage .message { border: 1px solid #007acc; }
.monaco-editor .monaco-editor-overlaymessage .message { background-color: #d6ecf2; }

		.monaco-editor .contentWidgets .codicon.codicon-light-bulb {
			color: #ddb100;
			background-color: rgba(255, 255, 254, 0.7);
		}

		.monaco-editor .contentWidgets .codicon.codicon-lightbulb-autofix {
			color: #007acc;
			background-color: rgba(255, 255, 254, 0.7);
		}
.monaco-editor .codelens-decoration { color: #919191; }
.monaco-editor .codelens-decoration .codicon { color: #919191; }
.monaco-editor .codelens-decoration > a:hover { color: #0000ff !important; }
.monaco-editor .codelens-decoration > a:hover .codicon { color: #0000ff !important; }
.monaco-editor .line-numbers { color: #237893; }
.monaco-editor .line-numbers.active-line-number { color: #0b216f; }
.monaco-editor .view-overlays .current-line { border: 2px solid rgba(87, 104, 113, 0.44); }
.monaco-editor .margin-view-overlays .current-line-margin { border: 2px solid rgba(87, 104, 113, 0.44); }
.monaco-editor .lines-content .cigr { box-shadow: 1px 0 0 0 #d3d3d3 inset; }
.monaco-editor .lines-content .cigra { box-shadow: 1px 0 0 0 #939393 inset; }
.monaco-editor .minimap-slider .minimap-slider-horizontal { background: rgba(100, 100, 100, 0.2); }
.monaco-editor .minimap-slider:hover .minimap-slider-horizontal { background: rgba(100, 100, 100, 0.35); }
.monaco-editor .minimap-slider.active .minimap-slider-horizontal { background: rgba(0, 0, 0, 0.3); }
.monaco-editor .minimap-shadow-visible { box-shadow: #dddddd -6px 0 6px -6px inset; }
.monaco-editor .view-ruler { box-shadow: 1px 0 0 0 #d3d3d3 inset; }
.monaco-editor .scroll-decoration { box-shadow: #dddddd 0 6px 6px -6px inset; }
.monaco-editor .focused .selected-text { background-color: #add6ff; }
.monaco-editor .selected-text { background-color: #e5ebf1; }
.monaco-editor .cursors-layer .cursor { background-color: #000000; border-color: #000000; color: #ffffff; }
.monaco-editor .squiggly-error { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23e51400'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-warning { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23bf8803'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-info { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%231a85ff'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-hint { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%20height%3D%223%22%20width%3D%2212%22%3E%3Cg%20fill%3D%22%236c6c6c%22%3E%3Ccircle%20cx%3D%221%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%225%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%229%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") no-repeat bottom left; }
.monaco-editor.showUnused .squiggly-inline-unnecessary { opacity: 0.467; }
.monaco-editor.showDeprecated .squiggly-inline-deprecated { text-decoration: line-through; text-decoration-color: #000000}

			.monaco-editor .zone-widget .codicon.codicon-error,
			.markers-panel .marker-icon.codicon.codicon-error,
			.text-search-provider-messages .providerMessage .codicon.codicon-error,
			.extensions-viewlet > .extensions .codicon.codicon-error {
				color: #e51400;
			}
		

			.monaco-editor .zone-widget .codicon.codicon-warning,
			.markers-panel .marker-icon.codicon.codicon-warning,
			.extensions-viewlet > .extensions .codicon.codicon-warning,
			.extension-editor .codicon.codicon-warning,
			.text-search-provider-messages .providerMessage .codicon.codicon-warning,
			.preferences-editor .codicon.codicon-warning {
				color: #bf8803;
			}
		

			.monaco-editor .zone-widget .codicon.codicon-info,
			.markers-panel .marker-icon.codicon.codicon-info,
			.extensions-viewlet > .extensions .codicon.codicon-info,
			.text-search-provider-messages .providerMessage .codicon.codicon-info,
			.extension-editor .codicon.codicon-info {
				color: #1a85ff;
			}
		
.monaco-editor .marker-widget a.code-link span { color: #006ab1; }
.monaco-editor .marker-widget a.code-link span:hover { color: #006ab1; }
.monaco-hover .hover-contents a.code-link span { color: #006ab1; }
.monaco-hover .hover-contents a.code-link span:hover { color: #006ab1; }
.monaco-editor .ghost-text-decoration { opacity: 0.467; color: #000000; }
.monaco-editor .ghost-text-decoration-preview { color: rgba(0, 0, 0, 0.47); }
.monaco-editor .suggest-preview-text .ghost-text { opacity: 0.467; color: #000000; }
.monaco-editor .snippet-placeholder { background-color: rgba(10, 50, 100, 0.2); outline-color: transparent; }
.monaco-editor .finish-snippet-placeholder { background-color: transparent; outline-color: rgba(10, 50, 100, 0.5); }
.codicon.codicon-symbol-array { color: #616161; }
.codicon.codicon-symbol-boolean { color: #616161; }
.codicon.codicon-symbol-class { color: #d67e00; }
.codicon.codicon-symbol-method { color: #652d90; }
.codicon.codicon-symbol-color { color: #616161; }
.codicon.codicon-symbol-constant { color: #616161; }
.codicon.codicon-symbol-constructor { color: #652d90; }

			.codicon.codicon-symbol-value,.codicon.codicon-symbol-enum { color: #d67e00; }
.codicon.codicon-symbol-enum-member { color: #007acc; }
.codicon.codicon-symbol-event { color: #d67e00; }
.codicon.codicon-symbol-field { color: #007acc; }
.codicon.codicon-symbol-file { color: #616161; }
.codicon.codicon-symbol-folder { color: #616161; }
.codicon.codicon-symbol-function { color: #652d90; }
.codicon.codicon-symbol-interface { color: #007acc; }
.codicon.codicon-symbol-key { color: #616161; }
.codicon.codicon-symbol-keyword { color: #616161; }
.codicon.codicon-symbol-module { color: #616161; }
.codicon.codicon-symbol-namespace { color: #616161; }
.codicon.codicon-symbol-null { color: #616161; }
.codicon.codicon-symbol-number { color: #616161; }
.codicon.codicon-symbol-object { color: #616161; }
.codicon.codicon-symbol-operator { color: #616161; }
.codicon.codicon-symbol-package { color: #616161; }
.codicon.codicon-symbol-property { color: #616161; }
.codicon.codicon-symbol-reference { color: #616161; }
.codicon.codicon-symbol-snippet { color: #616161; }
.codicon.codicon-symbol-string { color: #616161; }
.codicon.codicon-symbol-struct { color: #616161; }
.codicon.codicon-symbol-text { color: #616161; }
.codicon.codicon-symbol-type-parameter { color: #616161; }
.codicon.codicon-symbol-unit { color: #616161; }
.codicon.codicon-symbol-variable { color: #007acc; }
.monaco-editor .suggest-widget .monaco-list .monaco-list-row .monaco-highlighted-label .highlight { color: #0066bf; }
.monaco-editor .suggest-widget .monaco-list .monaco-list-row.focused .monaco-highlighted-label .highlight { color: #9dddff; }
.monaco-editor .suggest-widget, .monaco-editor .suggest-details { color: #000000; }
.monaco-editor .suggest-widget .monaco-list .monaco-list-row.focused { color: #ffffff; }
.monaco-editor .suggest-details a { color: #006ab1; }
.monaco-editor .suggest-details a:hover { color: #006ab1; }
.monaco-editor .suggest-details code { background-color: rgba(220, 220, 220, 0.4); }
.monaco-editor .reference-zone-widget .ref-tree .referenceMatch .highlight { background-color: rgba(234, 92, 0, 0.3); }
.monaco-editor .reference-zone-widget .preview .reference-decoration { background-color: rgba(245, 216, 2, 0.87); }
.monaco-editor .reference-zone-widget .ref-tree { background-color: #f3f3f3; }
.monaco-editor .reference-zone-widget .ref-tree { color: #646465; }
.monaco-editor .reference-zone-widget .ref-tree .reference-file { color: #1e1e1e; }
.monaco-editor .reference-zone-widget .ref-tree .monaco-list:focus .monaco-list-rows > .monaco-list-row.selected:not(.highlighted) { background-color: rgba(51, 153, 255, 0.2); }
.monaco-editor .reference-zone-widget .ref-tree .monaco-list:focus .monaco-list-rows > .monaco-list-row.selected:not(.highlighted) { color: #6c6c6c !important; }
.monaco-editor .reference-zone-widget .preview .monaco-editor .monaco-editor-background,.monaco-editor .reference-zone-widget .preview .monaco-editor .inputarea.ime-input {	background-color: #f2f8fc;}
.monaco-editor .reference-zone-widget .preview .monaco-editor .margin {	background-color: #f2f8fc;}
.monaco-editor .goto-definition-link { color: #0000ff !important; }
.monaco-editor .hoverHighlight { background-color: rgba(173, 214, 255, 0.15); }
.monaco-editor .monaco-hover { background-color: #f3f3f3; }
.monaco-editor .monaco-hover { border: 1px solid #c8c8c8; }
.monaco-editor .monaco-hover .hover-row:not(:first-child):not(:empty) { border-top: 1px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .monaco-hover hr { border-top: 1px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .monaco-hover hr { border-bottom: 0px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .monaco-hover a { color: #006ab1; }
.monaco-editor .monaco-hover a:hover { color: #006ab1; }
.monaco-editor .monaco-hover { color: #616161; }
.monaco-editor .monaco-hover .hover-row .actions { background-color: #e7e7e7; }
.monaco-editor .monaco-hover code { background-color: rgba(220, 220, 220, 0.4); }
.monaco-editor .findOptionsWidget { background-color: #f3f3f3; }
.monaco-editor .findOptionsWidget { color: #616161; }
.monaco-editor .findOptionsWidget { box-shadow: 0 0 8px 2px rgba(0, 0, 0, 0.16); }
.monaco-editor .findMatch { background-color: rgba(234, 92, 0, 0.33); }
.monaco-editor .currentFindMatch { background-color: #a8ac94; }
.monaco-editor .findScope { background-color: rgba(180, 180, 180, 0.3); }
.monaco-editor .find-widget { background-color: #f3f3f3; }
.monaco-editor .find-widget { box-shadow: 0 0 8px 2px rgba(0, 0, 0, 0.16); }
.monaco-editor .find-widget { color: #616161; }
.monaco-editor .find-widget.no-results .matchesCount { color: #a1260d; }
.monaco-editor .find-widget .monaco-sash { background-color: #c8c8c8; }

		.monaco-editor .find-widget .button:not(.disabled):hover,
		.monaco-editor .find-widget .codicon-find-selection:hover {
			background-color: rgba(184, 184, 184, 0.31) !important;
		}
	
.monaco-editor .find-widget .monaco-inputbox.synthetic-focus { outline-color: #0090f1; }
.monaco-editor .folded-background { background-color: rgba(173, 214, 255, 0.3); }

		.monaco-editor .cldr.codicon.codicon-folding-expanded,
		.monaco-editor .cldr.codicon.codicon-folding-collapsed {
			color: #424242 !important;
		}
		
.monaco-editor.vs .valueSetReplacement { outline: solid 2px #b9b9b9; }
.monaco-editor .tokens-inspect-widget { border: 1px solid #c8c8c8; }
.monaco-editor .tokens-inspect-widget .tokens-inspect-separator { background-color: #c8c8c8; }
.monaco-editor .tokens-inspect-widget { background-color: #f3f3f3; }
.monaco-editor .tokens-inspect-widget { color: #616161; }
.monaco-editor .linked-editing-decoration { background: rgba(255, 0, 0, 0.3); border-left-color: rgba(255, 0, 0, 0.3); }
.monaco-editor .detected-link-active { color: #0000ff !important; }
.monaco-editor .parameter-hints-widget { border: 1px solid #c8c8c8; }
.monaco-editor .parameter-hints-widget.multiple .body { border-left: 1px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .parameter-hints-widget .signature.has-docs { border-bottom: 1px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .parameter-hints-widget { background-color: #f3f3f3; }
.monaco-editor .parameter-hints-widget a { color: #006ab1; }
.monaco-editor .parameter-hints-widget a:hover { color: #006ab1; }
.monaco-editor .parameter-hints-widget { color: #616161; }
.monaco-editor .parameter-hints-widget code { background-color: rgba(220, 220, 220, 0.4); }
.monaco-editor .focused .selectionHighlight { background-color: rgba(173, 214, 255, 0.3); }
.monaco-editor .selectionHighlight { background-color: rgba(173, 214, 255, 0.15); }
.monaco-editor .wordHighlight { background-color: rgba(87, 87, 87, 0.25); }
.monaco-editor .wordHighlightStrong { background-color: rgba(14, 99, 156, 0.25); }
.monaco-diff-editor .diff-review-line-number { color: #237893; }
.monaco-diff-editor .diff-review-shadow { box-shadow: #dddddd 0 -6px 6px -6px inset; }
.monaco-editor .line-insert, .monaco-editor .char-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-diff-editor .line-insert, .monaco-diff-editor .char-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .inline-added-margin-view-zone { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .line-delete, .monaco-editor .char-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-diff-editor .line-delete, .monaco-diff-editor .char-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-editor .inline-deleted-margin-view-zone { background-color: rgba(255, 0, 0, 0.2); }
.monaco-diff-editor.side-by-side .editor.modified { box-shadow: -6px 0 5px -5px #dddddd; }

			.monaco-diff-editor .diffViewport {
				background: rgba(100, 100, 100, 0.4);
			}
		

			.monaco-diff-editor .diffViewport:hover {
				background: rgba(100, 100, 100, 0.7);
			}
		

			.monaco-diff-editor .diffViewport:active {
				background: rgba(0, 0, 0, 0.6);
			}
		

	.monaco-editor .diagonal-fill {
		background-image: linear-gradient(
			-45deg,
			rgba(34, 34, 34, 0.2) 12.5%,
			#0000 12.5%, #0000 50%,
			rgba(34, 34, 34, 0.2) 50%, rgba(34, 34, 34, 0.2) 62.5%,
			#0000 62.5%, #0000 100%
		);
		background-size: 8px 8px;
	}
	

.mtk1 { color: #000000; }
.mtk2 { color: #fffffe; }
.mtk3 { color: #808080; }
.mtk4 { color: #ff0000; }
.mtk5 { color: #d11534; }
.mtk6 { color: #0451a5; }
.mtk7 { color: #0000ff; }
.mtk8 { color: #098658; }
.mtk9 { color: #137c36; }
.mtk10 { color: #008000; }
.mtk11 { color: #dd0000; }
.mtk12 { color: #383838; }
.mtk13 { color: #cd3131; }
.mtk14 { color: #863b00; }
.mtk15 { color: #af00db; }
.mtk16 { color: #800000; }
.mtk17 { color: #e00000; }
.mtk18 { color: #576871; }
.mtk19 { color: #3030c0; }
.mtk20 { color: #666666; }
.mtk21 { color: #778899; }
.mtk22 { color: #c700c7; }
.mtk23 { color: #a31515; }
.mtk24 { color: #4f76ac; }
.mtk25 { color: #008080; }
.mtk26 { color: #025f59; }
.mtk27 { color: #001188; }
.mtk28 { color: #4864aa; }
.mtki { font-style: italic; }
.mtkb { font-weight: bold; }
.mtku { text-decoration: underline; text-underline-position: under; }</style><style type="text/css" media="screen">
		.monaco-editor .codelens-decoration._ee1f61 { line-height: 20px; font-size: 13px; padding-right: 7px; font-feature-settings: var(--codelens-font-features_ee1f61) }
		.monaco-editor .codelens-decoration._ee1f61 span.codicon { line-height: 20px; font-size: 13px; }
		</style></head>

<body data-theme="light" id="hr_v2" data-theme-version="3" class="hr-community">
  
    
      <script>
        document.cookie.search("user_theme=dark")>-1&&document.body.classList.add("theme-dark");
        document.cookie.search("user_theme=dark")>-1&&document.body.setAttribute('data-theme', 'dark');
      </script>
    
  
  

  <div id="fb-root"></div>
    

  <!-- Just a placeholder div to start loading open sans and source code loader -->
  <div class="font-open-sans-loader"></div>
  <div class="font-source-code-loader"></div>
  <!-- Just a placeholder div to start loading open sans and source code loader end -->

  <div id="content" onclick="void(0);"><div class="ui-kit-root"><div class="body-wrap community-page challenges-page problem-page"><div class=""><div class="theme-m new-design logged-user"><div class="page-header-wrapper theme-m-section"><nav class="community-header"><div class="d-flex align-items-center justify-content-between community-header-container"><div class="header-nav-links theme-m-section"><ul class="nav-links"><li class="nav-link-item logo-wrap"><a class="logo-link d-flex align-items-center" data-analytics="NavBarLogo" data-attr1="/dashboard" data-automation="logo-link"><img id="feed-intro" class="logo-img-small" src="./hackerrank_Hello World!_files/logo-new-white-green-a5cb16e0ae.svg" alt="HackerRank Home"></a></li><div class="nav-logo-separator">|</div><li class="nav-link-item"><a class="nav-link active" data-analytics="NavBarDomains" data-automation="dashboard-link"><span>Prepare</span></a></li><li class="nav-link-item"><a class="nav-link " data-analytics="NavBarCertify"><span>Certify</span></a></li><li class="nav-link-item"><a class="nav-link contests" data-analytics="NavBarContests"><span>Compete</span></a></li><li class="nav-link-item"><a class="nav-link " data-analytics="NavBarApply"><span>Apply</span></a></li></ul></div><div class="nav-buttons theme-m-section"><ul class="pull-left psR"><li class="search-input-container input-icon main-hr-search" id="search-span"><div class="search-form new-search"><div><div class="search-query asyn-autocomplete autocomplete"><div class="ac-input-wrap cf"><input autocomplete="off" class="ac-input " value="" placeholder="Search"></div></div><i class="ui-icon-search"></i></div></div></li></ul><ul class="pull-left nav-wrap mmL"><li class="button-item"><div class="dropdown dropdown message-dropdown notify-dropdown theme-m-content"><button data-analytics="NavBarMessageIcon" aria-haspopup="menu" aria-expanded="false" class="dropdown-handle cursor nav_link hr_nav_messages_link stripped-button"><i class="dropdown-icon ui-icon-message"></i></button></div></li><li class="button-item"><div class="dropdown dropdown notification-dropdown notify-dropdown theme-m-content"><button data-toggle="dropdown" data-analytics="NavBarNotificationsIcon" aria-haspopup="menu" aria-expanded="false" class="dropdown-handle cursor nav_link hr_nav_notifications_link stripped-button"><i class="dropdown-icon ui-icon-notification"></i><span class="indicator number-indicator hr_notifications_count">2</span></button></div></li><li class="button-item separator">|</li><li class="button-item"><div class="app-drawer"><button class="ui-icon-btn ui-btn-normal"><span class="sr-only">Switch to..</span><svg width="1em" height="1em" viewBox="0 0 24 24" aria-hidden="true" focusable="false" style="color:#b7c9cc" class=" ui-svg-icon" fill="currentColor"><path d="M9.448 2.713c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274z"></path><path fill-rule="evenodd" clip-rule="evenodd" d="M18.648 2.713c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274z"></path><path d="M.248 2.713c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274zm9.2 9.226c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274z"></path><path fill-rule="evenodd" clip-rule="evenodd" d="M18.648 11.939c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274z"></path><path d="M.248 11.939c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274zm9.2 9.226c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274z"></path><path fill-rule="evenodd" clip-rule="evenodd" d="M18.648 21.165c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274z"></path><path d="M.248 21.165c0-1.256 1.03-2.274 2.3-2.274 1.27 0 2.3 1.018 2.3 2.274s-1.03 2.274-2.3 2.274c-1.27 0-2.3-1.018-2.3-2.274z"></path></svg></button></div></li><li class="button-item"><div class="dropdown profile-menu theme-m-content"><button data-analytics="NavBarProfileDropDown" aria-haspopup="menu" aria-expanded="false" class="dropdown-handle nav_link toggle-wrap stripped-button"><div class="user-avatar-placeholder d-flex align-items-center justify-content-center"><svg viewBox="0 0 24 24" width="1em" height="1em" class=" ui-svg-icon" fill="currentColor"><path d="M21 23c-.6 0-1-.4-1-1v-2.2c0-1.9-1.6-3.4-3.5-3.4h-9c-1.9 0-3.5 1.5-3.5 3.4V22c0 .6-.5 1-1 1s-1-.4-1-1v-2.2c0-3 2.5-5.4 5.5-5.4h9c3 0 5.5 2.4 5.5 5.4V22c0 .6-.5 1-1 1zm-9-11.1c-3 0-5.4-2.4-5.4-5.4S9 1 12 1s5.4 2.4 5.4 5.4-2.4 5.5-5.4 5.5zM12 3c-1.9 0-3.4 1.5-3.4 3.4s1.5 3.4 3.4 3.4 3.4-1.5 3.4-3.4S13.9 3 12 3z"></path></svg></div><i class="ui-icon-chevron-down down-icon"></i></button></div></li></ul></div></div></nav></div><header class="community-header-breadcrumb"><div class="container"><div class="d-flex justify-content-between align-items-center content-header-wrapper"><div class="community-header-breadcrumb-items"><ol itemtype="http://schema.org/BreadcrumbList" class="community-breadcrumb text-content ellipsis"><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="Prepare" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/dashboard"><span itemprop="name" class="breadcrumb-item-text">Prepare</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="C" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/domains/c"><span itemprop="name" class="breadcrumb-item-text">C</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="Introduction" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/domains/c/c-introduction"><span itemprop="name" class="breadcrumb-item-text">Introduction</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><span itemprop="name" class="breadcrumb-item-text">"Hello World!" in C</span><meta itemprop="position" content="1"></li></ol><div class="page-label-wrapper text-headline"><h1 class="page-label"><div class="challenge-page-label-wrapper align-items-center"><h1 class="ui-icon-label page-label">"Hello World!" in C</h1><button class="ui-btn ui-btn-normal ui-btn-plain star-button" aria-label="Add to favourites"><div class="ui-content align-icon-right"><span class="ui-text" aria-hidden="false"><i class="icon-bookmark star-icon ui-icon-star"></i></span></div></button></div></h1></div></div><div class="community-header-aside"><div class="challenge-header-aside"><div class="track-badge-progress"><div class="badge-progress"><div class="remaining"><div class="point-left-wrap"><span class="point-left">10 more points</span> to get your first star!</div><div class="track-progress-bar"><div class="ui-progress-bar progress-bar theme-default"><div class="progress-filler" style="width: 33%;"></div></div></div><div class="score-info"><span class="current-rank">Rank: <span class="value">876588</span></span><span class="pipe">|</span><span class="current-points">Points: <span class="value">5/15</span></span><a class="scoring-link" data-analytics="BadgeLearnMoreLink" data-attr1="c" target="_blank" href="https://www.hackerrank.com/scoring"><i class="scoring-icon ui-icon-warning-hexagon"></i></a></div></div><div location="[object Object]" params="[object Object]" router="[object Object]" additionalcontext="[object Object]" class="ui-badge level-none"><div class="ui-badge-wrap"><svg viewBox="0 0 91 100" class="hexagon"><g><defs><lineargradient id="badge-none-gradient" x1="52.5" y1="2.5" x2="52.5" y2="102.5" gradientUnits="userSpaceOnUse"><stop offset="0" stop-color="#f3f7f7"></stop><stop offset="1" stop-color="#f3f7f7"></stop></lineargradient></defs><path fill="url(#badge-none-gradient)" d="M90.3892 44.9106L90.3893 44.914C90.5873 51.9976 90.3892 59.5788 89.8948 65.4581L89.8947 65.4581L89.894 65.4684C89.7459 67.8071 89.5241 69.8644 89.2548 71.4803C88.9812 73.1224 88.6689 74.2376 88.3726 74.7495L88.3684 74.7569L88.3644 74.7644C88.2249 75.0255 87.9549 75.366 87.5388 75.7853C87.1279 76.1994 86.5969 76.6683 85.9594 77.1872C84.6848 78.2247 83.011 79.4407 81.0792 80.7886C76.1371 84.1752 69.4065 88.1657 62.9661 91.6605L62.9645 91.6614C58.9514 93.8584 55.1183 95.8269 51.996 97.2447C50.4343 97.9539 49.0577 98.522 47.9293 98.9118C46.7841 99.3074 45.9476 99.5 45.4429 99.5C44.8368 99.5 43.7518 99.219 42.2485 98.6583C40.7685 98.1063 38.9475 97.3088 36.9015 96.3316C32.811 94.3779 27.849 91.7188 22.9696 88.9044C18.0901 86.09 13.3015 83.125 9.55688 80.5609C7.68397 79.2784 6.07847 78.1005 4.85537 77.0948C3.6188 76.0781 2.82774 75.2805 2.51554 74.7536C2.28519 74.3275 2.0493 73.5182 1.82917 72.3438C1.61115 71.1807 1.41751 69.7122 1.25082 68.0137C0.917563 64.6178 0.694767 60.3313 0.595718 55.7891L0.595639 55.7862C0.39748 48.597 0.496929 40.7167 0.991039 34.7412L0.991144 34.7412L0.991781 34.7309C1.13992 32.3423 1.36172 30.2598 1.63112 28.6185C1.90193 26.9685 2.21232 25.8224 2.51467 25.2483C2.86854 24.6758 3.67611 23.8504 4.9172 22.8226C6.15287 21.7992 7.77552 20.6094 9.70207 19.315L9.70402 19.3137C14.5518 16.0235 21.0868 12.0319 27.3246 8.63924L27.3247 8.63927L27.3296 8.63653C31.4393 6.34112 35.4202 4.29812 38.6657 2.83059C40.2891 2.09658 41.7217 1.5096 42.8908 1.10715C44.0779 0.698497 44.9386 0.5 45.4429 0.5C45.8599 0.5 46.5131 0.630344 47.3938 0.904038C48.2627 1.17405 49.3131 1.57058 50.508 2.07336C52.8947 3.07763 55.8302 4.49415 58.9957 6.13884L76.0424 15.9271C79.2093 17.9719 82.072 19.9123 84.2641 21.5505C85.3617 22.3708 86.285 23.1108 86.9918 23.7467C87.708 24.391 88.1652 24.8965 88.372 25.2495C88.6251 25.6975 88.8797 26.5434 89.1143 27.7675C89.346 28.9765 89.5489 30.5006 89.7217 32.2614C90.0674 35.7817 90.2902 40.2179 90.3892 44.9106Z" stroke="#8e8e8e"></path></g><image class="badge-icon" xlink:href="https://hrcdn.net/fcore/assets/badges/c-d1985901e6.svg" x="50%" y="22" height="27" width="27" transform="translate(-13.5, 0)"></image><text class="badge-title" x="50%" y="65.5" font-size="10">C language</text>0</svg></div></div></div></div></div></div></div></div></header><div class="container"></div><div class="community-content"><div class="challenge-view theme-m"><div class="challenge-page-header container"><div class="ui-tabs-wrap"><div class="render-list clearfix"><div class="tab-header" role="navigation"><a id="tab-1-item-0" class="tab-item active" href="https://www.hackerrank.com/challenges/hello-world-c/problem"><div class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/hello-world-c/problem" data-attr2="Problem" data-attr3="no_full_screen"><span class="ui-icon-label">Problem</span></div></a><a id="tab-1-item-1" class="tab-item" href="https://www.hackerrank.com/challenges/hello-world-c/submissions"><div class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/hello-world-c/submissions" data-attr2="Submissions" data-attr3="no_full_screen"><span class="ui-icon-label">Submissions</span></div></a><a id="tab-1-item-2" class="tab-item" href="https://www.hackerrank.com/challenges/hello-world-c/leaderboard"><div class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/hello-world-c/leaderboard" data-attr2="Leaderboard" data-attr3="no_full_screen"><span class="ui-icon-label">Leaderboard</span></div></a><a id="tab-1-item-3" class="tab-item" href="https://www.hackerrank.com/challenges/hello-world-c/forum"><div class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/hello-world-c/forum" data-attr2="Discussions" data-attr3="no_full_screen"><span class="ui-icon-label">Discussions</span></div></a><a id="tab-1-item-4" class="tab-item" href="https://www.hackerrank.com/challenges/hello-world-c/editorial"><div class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/hello-world-c/editorial" data-attr2="Editorial" data-attr3="no_full_screen"><span class="ui-icon-label">Editorial</span></div></a></div></div></div></div><section class="challenge-interface challenge-problem"><div class="challenge-body"><div class="challenge-body-elements-problem challenge-container-element"><div class="full-screen-view"><div class="full-screeen-header"><div class="align-left-conatiner"><div class="nav-link-item logo-wrap"><a data-analytics="NavBarLogo" class="logo-link d-flex align-items-center" href="https://www.hackerrank.com/dashboard"><img id="feed-intro" class="logo-img-small" src="./hackerrank_Hello World!_files/logo-new-white-green-a5cb16e0ae.svg" alt="HackerRank Logo"></a></div><div class="nav-logo-separator">|</div><ol itemtype="http://schema.org/BreadcrumbList" class="community-breadcrumb text-content"><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="Prepare" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/dashboard"><span itemprop="name" class="breadcrumb-item-text">Prepare</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="C" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/domains/c"><span itemprop="name" class="breadcrumb-item-text">C</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="Introduction" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/domains/c/c-introduction"><span itemprop="name" class="breadcrumb-item-text">Introduction</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><span itemprop="name" class="breadcrumb-item-text">"Hello World!" in C</span><meta itemprop="position" content="1"></li></ol></div><div class="align-right-container"><a class="restoreScreen active-link no-select" data-analytics="Exit fullscreen"><span>Exit Full Screen View</span><i class="ui-icon-restore-size"></i></a></div></div><div class="contents-wrapper"><div class="fs-pains-container"><div class="fs-left-pane" style="width: calc(45% - 6px); position: relative;"><div class="left-pane-container"><div class="full-screen-sidebar" style="transform: translate3d(0px, 0px, 0px);"><div class="extra-sidebar-wrapper"><div class="sidebar-container"><ul class="sidebar-list"><li class="tab-item active"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/hello-world-c/problem" data-attr2="Problem" data-attr3="full_screen" href="https://www.hackerrank.com/challenges/hello-world-c/problem"><span class="ui-icon-label">Problem</span></a></li><li class="tab-item"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/hello-world-c/submissions" data-attr2="Submissions" data-attr3="full_screen" href="https://www.hackerrank.com/challenges/hello-world-c/submissions"><span class="ui-icon-label">Submissions</span></a></li><li class="tab-item"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/hello-world-c/leaderboard" data-attr2="Leaderboard" data-attr3="full_screen" href="https://www.hackerrank.com/challenges/hello-world-c/leaderboard"><span class="ui-icon-label">Leaderboard</span></a></li><li class="tab-item"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/hello-world-c/forum" data-attr2="Discussions" data-attr3="full_screen" href="https://www.hackerrank.com/challenges/hello-world-c/forum"><span class="ui-icon-label">Discussions</span></a></li><li class="tab-item"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/hello-world-c/editorial" data-attr2="Editorial" data-attr3="full_screen" href="https://www.hackerrank.com/challenges/hello-world-c/editorial"><span class="ui-icon-label">Editorial</span></a></li></ul></div></div></div><div class="left-pane-content" style="transform: translate3d(0px, 0px, 0px);"><div id="fullScreenLeftPane" class="problem-statement-container"><div class="theme-m hr_tour-problem-statement problem-statement have-external-links"><div class="content-text challenge-text mlB hackdown-container theme-m"><div class="challenge-body-html"><div class="challenge_problem_statement"><div class="msB challenge_problem_statement_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
.MathJax_SVG_LineBox {display: table!important}
.MathJax_SVG_LineBox span {display: table-cell!important; width: 10000em!important; min-width: 0; max-width: none; padding: 0; border: 0; margin: 0}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p><strong>Objective</strong></p>

<p>In this challenge, we will learn some basic concepts of C that will get you started with the language. You will need to use the same syntax to read input and write output in many C challenges.  As you work through these problems, review the code stubs to learn about reading from stdin and writing to stdout.  </p>

<p><strong>Task</strong></p>

<p>This challenge requires you to print <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="13.863ex" height="2.509ex" style="vertical-align: -0.671ex;" viewBox="0 -791.3 5968.7 1080.4" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M228 637Q194 637 192 641Q191 643 191 649Q191 673 202 682Q204 683 219 683Q260 681 355 681Q389 681 418 681T463 682T483 682Q499 682 499 672Q499 670 497 658Q492 641 487 638H485Q483 638 480 638T473 638T464 637T455 637Q416 636 405 634T387 623Q384 619 355 500Q348 474 340 442T328 395L324 380Q324 378 469 378H614L615 381Q615 384 646 504Q674 619 674 627T617 637Q594 637 587 639T580 648Q580 650 582 660Q586 677 588 679T604 682Q609 682 646 681T740 680Q802 680 835 681T871 682Q888 682 888 672Q888 645 876 638H874Q872 638 869 638T862 638T853 637T844 637Q805 636 794 634T776 623Q773 618 704 340T634 58Q634 51 638 51Q646 48 692 46H723Q729 38 729 37T726 19Q722 6 716 0H701Q664 2 567 2Q533 2 504 2T458 2T437 1Q420 1 420 10Q420 15 423 24Q428 43 433 45Q437 46 448 46H454Q481 46 514 49Q520 50 522 50T528 55T534 64T540 82T547 110T558 153Q565 181 569 198Q602 330 602 331T457 332H312L279 197Q245 63 245 58Q245 51 253 49T303 46H334Q340 38 340 37T337 19Q333 6 327 0H312Q275 2 178 2Q144 2 115 2T69 2T48 1Q31 1 31 10Q31 12 34 24Q39 43 44 45Q48 46 59 46H65Q92 46 125 49Q139 52 144 61Q147 65 216 339T285 628Q285 635 228 637Z"></path><g transform="translate(888,0)"><path stroke-width="1" d="M39 168Q39 225 58 272T107 350T174 402T244 433T307 442H310Q355 442 388 420T421 355Q421 265 310 237Q261 224 176 223Q139 223 138 221Q138 219 132 186T125 128Q125 81 146 54T209 26T302 45T394 111Q403 121 406 121Q410 121 419 112T429 98T420 82T390 55T344 24T281 -1T205 -11Q126 -11 83 42T39 168ZM373 353Q367 405 305 405Q272 405 244 391T199 357T170 316T154 280T149 261Q149 260 169 260Q282 260 327 284T373 353Z"></path></g><g transform="translate(1355,0)"><path stroke-width="1" d="M117 59Q117 26 142 26Q179 26 205 131Q211 151 215 152Q217 153 225 153H229Q238 153 241 153T246 151T248 144Q247 138 245 128T234 90T214 43T183 6T137 -11Q101 -11 70 11T38 85Q38 97 39 102L104 360Q167 615 167 623Q167 626 166 628T162 632T157 634T149 635T141 636T132 637T122 637Q112 637 109 637T101 638T95 641T94 647Q94 649 96 661Q101 680 107 682T179 688Q194 689 213 690T243 693T254 694Q266 694 266 686Q266 675 193 386T118 83Q118 81 118 75T117 65V59Z"></path></g><g transform="translate(1653,0)"><path stroke-width="1" d="M117 59Q117 26 142 26Q179 26 205 131Q211 151 215 152Q217 153 225 153H229Q238 153 241 153T246 151T248 144Q247 138 245 128T234 90T214 43T183 6T137 -11Q101 -11 70 11T38 85Q38 97 39 102L104 360Q167 615 167 623Q167 626 166 628T162 632T157 634T149 635T141 636T132 637T122 637Q112 637 109 637T101 638T95 641T94 647Q94 649 96 661Q101 680 107 682T179 688Q194 689 213 690T243 693T254 694Q266 694 266 686Q266 675 193 386T118 83Q118 81 118 75T117 65V59Z"></path></g><g transform="translate(1952,0)"><path stroke-width="1" d="M201 -11Q126 -11 80 38T34 156Q34 221 64 279T146 380Q222 441 301 441Q333 441 341 440Q354 437 367 433T402 417T438 387T464 338T476 268Q476 161 390 75T201 -11ZM121 120Q121 70 147 48T206 26Q250 26 289 58T351 142Q360 163 374 216T388 308Q388 352 370 375Q346 405 306 405Q243 405 195 347Q158 303 140 230T121 120Z"></path></g><g transform="translate(2437,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(2882,0)"><path stroke-width="1" d="M436 683Q450 683 486 682T553 680Q604 680 638 681T677 682Q695 682 695 674Q695 670 692 659Q687 641 683 639T661 637Q636 636 621 632T600 624T597 615Q597 603 613 377T629 138L631 141Q633 144 637 151T649 170T666 200T690 241T720 295T759 362Q863 546 877 572T892 604Q892 619 873 628T831 637Q817 637 817 647Q817 650 819 660Q823 676 825 679T839 682Q842 682 856 682T895 682T949 681Q1015 681 1034 683Q1048 683 1048 672Q1048 666 1045 655T1038 640T1028 637Q1006 637 988 631T958 617T939 600T927 584L923 578L754 282Q586 -14 585 -15Q579 -22 561 -22Q546 -22 542 -17Q539 -14 523 229T506 480L494 462Q472 425 366 239Q222 -13 220 -15T215 -19Q210 -22 197 -22Q178 -22 176 -15Q176 -12 154 304T131 622Q129 631 121 633T82 637H58Q51 644 51 648Q52 671 64 683H76Q118 680 176 680Q301 680 313 683H323Q329 677 329 674T327 656Q322 641 318 637H297Q236 634 232 620Q262 160 266 136L501 550L499 587Q496 629 489 632Q483 636 447 637Q428 637 422 639T416 648Q416 650 418 660Q419 664 420 669T421 676T424 680T428 682T436 683Z"></path></g><g transform="translate(3931,0)"><path stroke-width="1" d="M201 -11Q126 -11 80 38T34 156Q34 221 64 279T146 380Q222 441 301 441Q333 441 341 440Q354 437 367 433T402 417T438 387T464 338T476 268Q476 161 390 75T201 -11ZM121 120Q121 70 147 48T206 26Q250 26 289 58T351 142Q360 163 374 216T388 308Q388 352 370 375Q346 405 306 405Q243 405 195 347Q158 303 140 230T121 120Z"></path></g><g transform="translate(4416,0)"><path stroke-width="1" d="M21 287Q22 290 23 295T28 317T38 348T53 381T73 411T99 433T132 442Q161 442 183 430T214 408T225 388Q227 382 228 382T236 389Q284 441 347 441H350Q398 441 422 400Q430 381 430 363Q430 333 417 315T391 292T366 288Q346 288 334 299T322 328Q322 376 378 392Q356 405 342 405Q286 405 239 331Q229 315 224 298T190 165Q156 25 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 114 189T154 366Q154 405 128 405Q107 405 92 377T68 316T57 280Q55 278 41 278H27Q21 284 21 287Z"></path></g><g transform="translate(4868,0)"><path stroke-width="1" d="M117 59Q117 26 142 26Q179 26 205 131Q211 151 215 152Q217 153 225 153H229Q238 153 241 153T246 151T248 144Q247 138 245 128T234 90T214 43T183 6T137 -11Q101 -11 70 11T38 85Q38 97 39 102L104 360Q167 615 167 623Q167 626 166 628T162 632T157 634T149 635T141 636T132 637T122 637Q112 637 109 637T101 638T95 641T94 647Q94 649 96 661Q101 680 107 682T179 688Q194 689 213 690T243 693T254 694Q266 694 266 686Q266 675 193 386T118 83Q118 81 118 75T117 65V59Z"></path></g><g transform="translate(5166,0)"><path stroke-width="1" d="M366 683Q367 683 438 688T511 694Q523 694 523 686Q523 679 450 384T375 83T374 68Q374 26 402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487H491Q506 153 506 145Q506 140 503 129Q490 79 473 48T445 8T417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157Q33 205 53 255T101 341Q148 398 195 420T280 442Q336 442 364 400Q369 394 369 396Q370 400 396 505T424 616Q424 629 417 632T378 637H357Q351 643 351 645T353 664Q358 683 366 683ZM352 326Q329 405 277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q233 26 290 98L298 109L352 326Z"></path></g><g transform="translate(5690,0)"><path stroke-width="1" d="M78 661Q78 682 96 699T138 716T180 700T199 661Q199 654 179 432T158 206Q156 198 139 198Q121 198 119 206Q118 209 98 431T78 661ZM79 61Q79 89 97 105T141 121Q164 119 181 104T198 61Q198 31 181 16T139 1Q114 1 97 16T79 61Z"></path></g></g></svg></span> on a single line, and then print the already provided input string to <a href="https://en.wikipedia.org/wiki/Standard_streams#Standard_output_.28stdout.29">stdout</a>.  If you are not familiar with C, you may want to read about the printf() command.  </p>

<p><strong>Example</strong> <br>
<span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-2-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="22.065ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 9500.1 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M131 289Q131 321 147 354T203 415T300 442Q362 442 390 415T419 355Q419 323 402 308T364 292Q351 292 340 300T328 326Q328 342 337 354T354 372T367 378Q368 378 368 379Q368 382 361 388T336 399T297 405Q249 405 227 379T204 326Q204 301 223 291T278 274T330 259Q396 230 396 163Q396 135 385 107T352 51T289 7T195 -10Q118 -10 86 19T53 87Q53 126 74 143T118 160Q133 160 146 151T160 120Q160 94 142 76T111 58Q109 57 108 57T107 55Q108 52 115 47T146 34T201 27Q237 27 263 38T301 66T318 97T323 122Q323 150 302 164T254 181T195 196T148 231Q131 256 131 289Z"></path><g transform="translate(747,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g><g transform="translate(1803,0)"><path stroke-width="1" d="M34 634Q34 659 50 676T93 694Q121 694 144 668T168 579Q168 525 146 476T101 403T73 379Q69 379 60 388T50 401Q50 404 62 417T88 448T116 500T131 572Q131 584 130 584T125 581T112 576T94 573Q69 573 52 590T34 634ZM238 634Q238 659 254 676T297 694Q325 694 348 668T372 579Q372 525 350 476T305 403T277 379Q273 379 264 388T254 401Q254 404 266 417T292 448T320 500T335 572Q335 584 334 584T329 581T316 576T298 573Q273 573 256 590T238 634Z"></path><path stroke-width="1" d="M128 622Q121 629 117 631T101 634T58 637H25V683H36Q48 680 182 680Q324 680 348 683H360V637H333Q273 637 258 635T233 622L232 342V129Q232 57 237 52Q243 47 313 47Q384 47 410 53Q470 70 498 110T536 221Q536 226 537 238T540 261T542 272T562 273H582V268Q580 265 568 137T554 5V0H25V46H58Q100 47 109 49T128 61V622Z" transform="translate(500,0)"></path><path stroke-width="1" d="M69 609Q69 637 87 653T131 669Q154 667 171 652T188 609Q188 579 171 564T129 549Q104 549 87 564T69 609ZM247 0Q232 3 143 3Q132 3 106 3T56 1L34 0H26V46H42Q70 46 91 49Q100 53 102 60T104 102V205V293Q104 345 102 359T88 378Q74 385 41 385H30V408Q30 431 32 431L42 432Q52 433 70 434T106 436Q123 437 142 438T171 441T182 442H185V62Q190 52 197 50T232 46H255V0H247Z" transform="translate(1126,0)"></path><path stroke-width="1" d="M273 0Q255 3 146 3Q43 3 34 0H26V46H42Q70 46 91 49Q99 52 103 60Q104 62 104 224V385H33V431H104V497L105 564L107 574Q126 639 171 668T266 704Q267 704 275 704T289 705Q330 702 351 679T372 627Q372 604 358 590T321 576T284 590T270 627Q270 647 288 667H284Q280 668 273 668Q245 668 223 647T189 592Q183 572 182 497V431H293V385H185V225Q185 63 186 61T189 57T194 54T199 51T206 49T213 48T222 47T231 47T241 46T251 46H282V0H273Z" transform="translate(1404,0)"></path><path stroke-width="1" d="M28 218Q28 273 48 318T98 391T163 433T229 448Q282 448 320 430T378 380T406 316T415 245Q415 238 408 231H126V216Q126 68 226 36Q246 30 270 30Q312 30 342 62Q359 79 369 104L379 128Q382 131 395 131H398Q415 131 415 121Q415 117 412 108Q393 53 349 21T250 -11Q155 -11 92 58T28 218ZM333 275Q322 403 238 411H236Q228 411 220 410T195 402T166 381T143 340T127 274V267H333V275Z" transform="translate(1711,0)"></path><path stroke-width="1" d="M69 609Q69 637 87 653T131 669Q154 667 171 652T188 609Q188 579 171 564T129 549Q104 549 87 564T69 609ZM247 0Q232 3 143 3Q132 3 106 3T56 1L34 0H26V46H42Q70 46 91 49Q100 53 102 60T104 102V205V293Q104 345 102 359T88 378Q74 385 41 385H30V408Q30 431 32 431L42 432Q52 433 70 434T106 436Q123 437 142 438T171 441T182 442H185V62Q190 52 197 50T232 46H255V0H247Z" transform="translate(2405,0)"></path><path stroke-width="1" d="M295 316Q295 356 268 385T190 414Q154 414 128 401Q98 382 98 349Q97 344 98 336T114 312T157 287Q175 282 201 278T245 269T277 256Q294 248 310 236T342 195T359 133Q359 71 321 31T198 -10H190Q138 -10 94 26L86 19L77 10Q71 4 65 -1L54 -11H46H42Q39 -11 33 -5V74V132Q33 153 35 157T45 162H54Q66 162 70 158T75 146T82 119T101 77Q136 26 198 26Q295 26 295 104Q295 133 277 151Q257 175 194 187T111 210Q75 227 54 256T33 318Q33 357 50 384T93 424T143 442T187 447H198Q238 447 268 432L283 424L292 431Q302 440 314 448H322H326Q329 448 335 442V310L329 304H301Q295 310 295 316Z" transform="translate(2684,0)"></path><path stroke-width="1" d="M307 -11Q234 -11 168 55L158 37Q156 34 153 28T147 17T143 10L138 1L118 0H98V298Q98 599 97 603Q94 622 83 628T38 637H20V660Q20 683 22 683L32 684Q42 685 61 686T98 688Q115 689 135 690T165 693T176 694H179V543Q179 391 180 391L183 394Q186 397 192 401T207 411T228 421T254 431T286 439T323 442Q401 442 461 379T522 216Q522 115 458 52T307 -11ZM182 98Q182 97 187 90T196 79T206 67T218 55T233 44T250 35T271 29T295 26Q330 26 363 46T412 113Q424 148 424 212Q424 287 412 323Q385 405 300 405Q270 405 239 390T188 347L182 339V98Z" transform="translate(3328,0)"></path><path stroke-width="1" d="M28 218Q28 273 48 318T98 391T163 433T229 448Q282 448 320 430T378 380T406 316T415 245Q415 238 408 231H126V216Q126 68 226 36Q246 30 270 30Q312 30 342 62Q359 79 369 104L379 128Q382 131 395 131H398Q415 131 415 121Q415 117 412 108Q393 53 349 21T250 -11Q155 -11 92 58T28 218ZM333 275Q322 403 238 411H236Q228 411 220 410T195 402T166 381T143 340T127 274V267H333V275Z" transform="translate(3885,0)"></path><path stroke-width="1" d="M137 305T115 305T78 320T63 359Q63 394 97 421T218 448Q291 448 336 416T396 340Q401 326 401 309T402 194V124Q402 76 407 58T428 40Q443 40 448 56T453 109V145H493V106Q492 66 490 59Q481 29 455 12T400 -6T353 12T329 54V58L327 55Q325 52 322 49T314 40T302 29T287 17T269 6T247 -2T221 -8T190 -11Q130 -11 82 20T34 107Q34 128 41 147T68 188T116 225T194 253T304 268H318V290Q318 324 312 340Q290 411 215 411Q197 411 181 410T156 406T148 403Q170 388 170 359Q170 334 154 320ZM126 106Q126 75 150 51T209 26Q247 26 276 49T315 109Q317 116 318 175Q318 233 317 233Q309 233 296 232T251 223T193 203T147 166T126 106Z" transform="translate(4329,0)"></path><path stroke-width="1" d="M383 58Q327 -10 256 -10H249Q124 -10 105 89Q104 96 103 226Q102 335 102 348T96 369Q86 385 36 385H25V408Q25 431 27 431L38 432Q48 433 67 434T105 436Q122 437 142 438T172 441T184 442H187V261Q188 77 190 64Q193 49 204 40Q224 26 264 26Q290 26 311 35T343 58T363 90T375 120T379 144Q379 145 379 161T380 201T380 248V315Q380 361 370 372T320 385H302V431Q304 431 378 436T457 442H464V264Q464 84 465 81Q468 61 479 55T524 46H542V0Q540 0 467 -5T390 -11H383V58Z" transform="translate(4830,0)"></path><path stroke-width="1" d="M27 422Q80 426 109 478T141 600V615H181V431H316V385H181V241Q182 116 182 100T189 68Q203 29 238 29Q282 29 292 100Q293 108 293 146V181H333V146V134Q333 57 291 17Q264 -10 221 -10Q187 -10 162 2T124 33T105 68T98 100Q97 107 97 248V385H18V422H27Z" transform="translate(5386,0)"></path><path stroke-width="1" d="M69 609Q69 637 87 653T131 669Q154 667 171 652T188 609Q188 579 171 564T129 549Q104 549 87 564T69 609ZM247 0Q232 3 143 3Q132 3 106 3T56 1L34 0H26V46H42Q70 46 91 49Q100 53 102 60T104 102V205V293Q104 345 102 359T88 378Q74 385 41 385H30V408Q30 431 32 431L42 432Q52 433 70 434T106 436Q123 437 142 438T171 441T182 442H185V62Q190 52 197 50T232 46H255V0H247Z" transform="translate(5776,0)"></path><path stroke-width="1" d="M273 0Q255 3 146 3Q43 3 34 0H26V46H42Q70 46 91 49Q99 52 103 60Q104 62 104 224V385H33V431H104V497L105 564L107 574Q126 639 171 668T266 704Q267 704 275 704T289 705Q330 702 351 679T372 627Q372 604 358 590T321 576T284 590T270 627Q270 647 288 667H284Q280 668 273 668Q245 668 223 647T189 592Q183 572 182 497V431H293V385H185V225Q185 63 186 61T189 57T194 54T199 51T206 49T213 48T222 47T231 47T241 46T251 46H282V0H273Z" transform="translate(6054,0)"></path><path stroke-width="1" d="M383 58Q327 -10 256 -10H249Q124 -10 105 89Q104 96 103 226Q102 335 102 348T96 369Q86 385 36 385H25V408Q25 431 27 431L38 432Q48 433 67 434T105 436Q122 437 142 438T172 441T184 442H187V261Q188 77 190 64Q193 49 204 40Q224 26 264 26Q290 26 311 35T343 58T363 90T375 120T379 144Q379 145 379 161T380 201T380 248V315Q380 361 370 372T320 385H302V431Q304 431 378 436T457 442H464V264Q464 84 465 81Q468 61 479 55T524 46H542V0Q540 0 467 -5T390 -11H383V58Z" transform="translate(6361,0)"></path><path stroke-width="1" d="M42 46H56Q95 46 103 60V68Q103 77 103 91T103 124T104 167T104 217T104 272T104 329Q104 366 104 407T104 482T104 542T103 586T103 603Q100 622 89 628T44 637H26V660Q26 683 28 683L38 684Q48 685 67 686T104 688Q121 689 141 690T171 693T182 694H185V379Q185 62 186 60Q190 52 198 49Q219 46 247 46H263V0H255L232 1Q209 2 183 2T145 3T107 3T57 1L34 0H26V46H42Z" transform="translate(6917,0)"></path><path stroke-width="1" d="M34 634Q34 659 50 676T93 694Q121 694 144 668T168 579Q168 525 146 476T101 403T73 379Q69 379 60 388T50 401Q50 404 62 417T88 448T116 500T131 572Q131 584 130 584T125 581T112 576T94 573Q69 573 52 590T34 634ZM238 634Q238 659 254 676T297 694Q325 694 348 668T372 579Q372 525 350 476T305 403T277 379Q273 379 264 388T254 401Q254 404 266 417T292 448T320 500T335 572Q335 584 334 584T329 581T316 576T298 573Q273 573 256 590T238 634Z" transform="translate(7196,0)"></path></g></g></svg></span>   </p>

<p>The required output is:</p>

<pre><code>Hello, World!  
Life is beautiful  
</code></pre>

<p><strong>Function Descriptio</strong>  </p>

<p>Complete the main() function below.</p>

<p>The main() function has the following input:  </p>

<ul>
<li><em>string s:</em> a string  </li>
</ul>

<p><strong>Prints</strong>  </p>

<ul>
<li>*two strings: * "Hello, World!" on one line and the input string on the next line.  </li>
</ul></div></div></div><div class="challenge_input_format"><div class="msB challenge_input_format_title"><p><strong>Input Format</strong></p></div><div class="msB challenge_input_format_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
.MathJax_SVG_LineBox {display: table!important}
.MathJax_SVG_LineBox span {display: table-cell!important; width: 10000em!important; min-width: 0; max-width: none; padding: 0; border: 0; margin: 0}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>There is one line of text, <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.09ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 469.5 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M131 289Q131 321 147 354T203 415T300 442Q362 442 390 415T419 355Q419 323 402 308T364 292Q351 292 340 300T328 326Q328 342 337 354T354 372T367 378Q368 378 368 379Q368 382 361 388T336 399T297 405Q249 405 227 379T204 326Q204 301 223 291T278 274T330 259Q396 230 396 163Q396 135 385 107T352 51T289 7T195 -10Q118 -10 86 19T53 87Q53 126 74 143T118 160Q133 160 146 151T160 120Q160 94 142 76T111 58Q109 57 108 57T107 55Q108 52 115 47T146 34T201 27Q237 27 263 38T301 66T318 97T323 122Q323 150 302 164T254 181T195 196T148 231Q131 256 131 289Z"></path></g></svg></span>.</p></div></div></div><div class="challenge_sample_input"><div class="msB challenge_sample_input_title"><p><strong>Sample Input 0</strong></p></div><div class="msB challenge_sample_input_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
.MathJax_SVG_LineBox {display: table!important}
.MathJax_SVG_LineBox span {display: table-cell!important; width: 10000em!important; min-width: 0; max-width: none; padding: 0; border: 0; margin: 0}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><div class="highlight"><pre><span></span><span class="err">Welcome to C programming.</span>
</pre></div>
</div></div></div><div class="challenge_sample_output"><div class="msB challenge_sample_output_title"><p><strong>Sample Output 0</strong></p></div><div class="msB challenge_sample_output_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
.MathJax_SVG_LineBox {display: table!important}
.MathJax_SVG_LineBox span {display: table-cell!important; width: 10000em!important; min-width: 0; max-width: none; padding: 0; border: 0; margin: 0}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><div class="highlight"><pre><span></span><span class="err">Hello, World!</span>
<span class="err">Welcome to C programming.</span>
</pre></div>
</div></div></div></div></div></div></div></div></div></div><div class="gutter gutter-horizontal" style="width: 12px;"></div><div class="fs-right-pane" style="width: calc(55.5% - 6px);"><div class="challenge-page-wrap theme-m-content"><section class="code-editor-section split"><div><div><div></div><div class="hr-monaco-editor-wrapper"><div class="hr-monaco-editor-with-input"><div><div class="hr-monaco-editor-with-statusbar"><div class="hr-monaco-editor"><div class="editor-toolbar"><div class="toolbar-left"></div><div class="toolbar-right"><div class="toolbar-custom-items"><div class="theme-change-wrapper"><div class="dropdown"><div aria-haspopup="menu" aria-expanded="false" class="dropdown-handle theme-change-handle"><span class="text-link">Change Theme</span></div></div></div></div><span class=" select-language"><span class="select-language__label">Language: </span>C</span><div class="toolbar-custom-items"><div class="hr-monaco-reset-code"><button class="ui-btn ui-btn-normal cursor reset-btn ui-btn-styled" title="Reset Code" type="button"><div class="ui-content align-icon-right"><span class="ui-text" aria-hidden="false"><svg viewBox="0 0 48 48" width="1em" height="1em" class="icon-grey reset-code-icon ui-svg-icon" fill="currentColor"><path d="M40 8.9C31.7.1 17.7-.3 8.9 8L5.7 4.9c-.4-.4-.9-.7-1.5-.7C3 4.2 2 5.2 2 6.4v8.8c0 1.2 1 2.2 2.2 2.2H13c.6 0 1.2-.2 1.6-.7.9-.9.8-2.3 0-3.1L12 11.1c3.3-3 7.5-4.7 12-4.7 9.7 0 17.6 7.9 17.6 17.6S33.7 41.6 24 41.6c-9.7 0-17.6-7.9-17.6-17.6 0-1.2-1-2.2-2.2-2.2C3 21.8 2 22.8 2 24c0 5.6 2.1 11 6 15.1 8.3 8.8 22.3 9.3 31.1.9 8.8-8.3 9.2-22.3.9-31.1z"></path><path d="M26.6 31.4c.4.4.9.6 1.4.6s1-.2 1.4-.6l6-6c.8-.8.8-2 0-2.8l-6-6c-.8-.8-2-.8-2.8 0-.8.8-.8 2 0 2.8l4.6 4.6-4.6 4.6c-.8.8-.8 2 0 2.8zm-5.2-14.8c-.8-.8-2-.8-2.8 0l-6 6c-.8.8-.8 2 0 2.8l6 6c.4.4.9.6 1.4.6s1-.2 1.4-.6c.8-.8.8-2 0-2.8L16.8 24l4.6-4.6c.8-.8.8-2 0-2.8z"></path></svg></span></div></button></div><div class="fullscreen-btn-wrapper"><div class="ui-tooltip-wrapper"><div data-automation="icon-wrapper" aria-describedby=" tooltip-5"><button class="ui-btn ui-btn-normal restorefullscreen fullscreen-btn no-select active-link hr-monaco-base-btn ui-btn-styled" title="Switch to Normal layout" data-original-title="Switch to Normal layout"><div class="ui-content align-icon-right"><span class="ui-text" aria-hidden="false"><svg viewBox="0 0 100 100" width="1em" height="1em" class="minimize-icon icon-grey no-select ui-svg-icon" fill="currentColor"><path d="M94.59 5.41a3 3 0 00-4.24 0L67.82 27.94 66 11.21a3 3 0 10-6 .65l2.5 22.95v.36a3 3 0 00.09.31c0 .07.05.14.08.21a3 3 0 00.16.31l.1.17a3 3 0 00.79.79l.17.1.31.17.21.08.31.09h.36L88.14 40h.33a3 3 0 00.32-6l-16.73-1.82L94.59 9.66a3 3 0 000-4.25zM91.45 62.7a3 3 0 00-3.31-2.7l-22.95 2.5h-.36l-.31.09-.21.08-.32.17-.17.1a3 3 0 00-.79.79l-.1.17a3 3 0 00-.16.31c0 .07-.06.14-.08.21a3 3 0 00-.09.31v.36L60 88.14a3 3 0 002.66 3.31h.33a3 3 0 003-2.68l1.82-16.72 22.53 22.54a3 3 0 004.24-4.24L72.06 67.82 88.79 66a3 3 0 002.66-3.3zM5.41 9.66l22.53 22.52L11.21 34a3 3 0 00.32 6h.33l22.95-2.5h.36l.31-.09.21-.08.31-.17.17-.1a3 3 0 00.79-.79l.1-.17a3 3 0 00.16-.31c0-.07.06-.14.08-.21a3 3 0 00.09-.31v-.36L40 11.86a3 3 0 10-6-.65l-1.82 16.73L9.66 5.41a3 3 0 00-4.25 4.25zm0 84.93a3 3 0 004.24 0l22.53-22.53L34 88.79a3 3 0 003 2.68h.33A3 3 0 0040 88.14l-2.5-22.95v-.36a3 3 0 00-.09-.31c0-.07-.05-.14-.08-.21a3 3 0 00-.16-.31l-.1-.17a3 3 0 00-.79-.79l-.17-.1-.31-.17-.21-.08-.31-.09h-.36L11.86 60a3 3 0 00-.65 6l16.73 1.82L5.41 90.34a3 3 0 000 4.25z"></path></svg></span></div></button></div></div></div></div><div class="hr-monaco-settings-editor"><button class="ui-icon-btn ui-btn-normal settings-toggle" tabindex="0" aria-haspopup="true" aria-expanded="false" aria-label="Editor Settings" title="Editor Settings"><span class="sr-only">More</span><svg viewBox="0 0 36 36" width="1em" height="1em" aria-hidden="true" focusable="false" class=" ui-svg-icon" fill="currentColor"><path d="M18 0c2.2 0 4 1.8 4 4s-1.8 4-4 4-4-1.8-4-4 1.8-4 4-4zm0 14c2.2 0 4 1.8 4 4s-1.8 4-4 4-4-1.8-4-4 1.8-4 4-4zm0 14c2.2 0 4 1.8 4 4s-1.8 4-4 4-4-1.8-4-4 1.8-4 4-4z" fill-rule="evenodd" clip-rule="evenodd"></path></svg></button></div></div></div><div class="hr-monaco-editor-parent"><div class="hr-monaco-base-editor" data-keybinding-context="1" data-mode-id="c" style="height: 359px; --codelens-font-features_ee1f61: &quot;liga&quot; off, &quot;calt&quot; off;"><div class="monaco-editor no-user-select  showUnused showDeprecated vs" role="code" data-uri="file:///lsp-f24e2510-3888-11ef-90b2-9196dab088d5/Solution.c" style="width: 742px; height: 359px;"><div data-mprt="3" class="overflow-guard" style="width: 742px; height: 359px;"><div class="margin" role="presentation" aria-hidden="true" style="position: absolute; transform: translate3d(0px, 0px, 0px); contain: strict; top: 0px; height: 360px; width: 77px;"><div class="glyph-margin" style="left: 0px; width: 0px; height: 360px;"></div><div class="margin-view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="margin-view-overlays" role="presentation" aria-hidden="true" style="position: absolute; width: 77px; font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 20px; letter-spacing: 0px; height: 372px;"><div style="position:absolute;top:0px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:51px;">1</div></div><div style="position:absolute;top:20px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:51px;">2</div></div><div style="position:absolute;top:40px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:51px;">3</div></div><div style="position:absolute;top:60px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:51px;">4</div></div><div style="position:absolute;top:80px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:51px;">5</div></div><div style="position:absolute;top:100px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:51px;">6</div></div><div style="position:absolute;top:120px;width:100%;height:20px;"><div class="cldr alwaysShowFoldIcons codicon codicon-folding-expanded" style="left:51px;width:26px;"></div><div class="line-numbers" style="left:0px;width:51px;">7</div></div><div style="position:absolute;top:140px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:51px;">8</div></div><div style="position:absolute;top:160px;width:100%;height:20px;"><div class="current-line current-line-margin-both" style="width:77px; height:20px;"></div><div class="active-line-number line-numbers" style="left:0px;width:51px;">9</div></div><div style="position:absolute;top:180px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:51px;">10</div></div><div style="position:absolute;top:200px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:51px;">11</div></div><div style="position:absolute;top:220px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:51px;">12</div></div><div style="position:absolute;top:240px;width:100%;height:20px;"></div><div style="position:absolute;top:260px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:51px;">13</div></div><div style="position:absolute;top:280px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:51px;">14</div></div><div style="position:absolute;top:300px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:51px;">15</div></div><div style="position:absolute;top:320px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:51px;">16</div></div><div style="position:absolute;top:340px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:51px;">17</div></div></div></div><div class="monaco-scrollable-element editor-scrollable vs" role="presentation" data-mprt="5" style="position: absolute; overflow: hidden; left: 77px; height: 359px; width: 665px;"><div class="lines-content monaco-editor-background" style="position: absolute; overflow: hidden; width: 1e+06px; height: 1e+06px; transform: translate3d(0px, 0px, 0px); contain: strict; top: 0px; left: 0px;"><div class="view-overlays" role="presentation" aria-hidden="true" style="position: absolute; height: 0px; width: 675px;"><div style="position:absolute;top:0px;width:100%;height:20px;"></div><div style="position:absolute;top:20px;width:100%;height:20px;"></div><div style="position:absolute;top:40px;width:100%;height:20px;"></div><div style="position:absolute;top:60px;width:100%;height:20px;"></div><div style="position:absolute;top:80px;width:100%;height:20px;"></div><div style="position:absolute;top:100px;width:100%;height:20px;"></div><div style="position:absolute;top:120px;width:100%;height:20px;"><div class="cdr bracket-match" style="left:0px;width:9px;height:20px;"></div></div><div style="position:absolute;top:140px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:16.625px"></div></div><div style="position:absolute;top:160px;width:100%;height:20px;"><div class="current-line" style="width:675px; height:20px;"></div><div class="cigra" style="left:0px;height:20px;width:16.625px"></div></div><div style="position:absolute;top:180px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:16.625px"></div><div class="cdr squiggly-warning" style="left:207px;width:18px;height:20px;"></div></div><div style="position:absolute;top:200px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:16.625px"></div></div><div style="position:absolute;top:220px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:16.625px"></div></div><div style="position:absolute;top:240px;width:100%;height:20px;"></div><div style="position:absolute;top:260px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:16.625px"></div></div><div style="position:absolute;top:280px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:16.625px"></div></div><div style="position:absolute;top:300px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:16.625px"></div></div><div style="position:absolute;top:320px;width:100%;height:20px;"><div class="cdr bracket-match" style="left:0px;width:9px;height:20px;"></div></div><div style="position:absolute;top:340px;width:100%;height:20px;"></div></div><div role="presentation" aria-hidden="true" class="view-rulers"></div><div class="view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="view-lines monaco-mouse-cursor-text" role="presentation" aria-hidden="true" data-mprt="7" style="position: absolute; font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 20px; letter-spacing: 0px; width: 675px; height: 372px;"><div style="top:0px;height:20px;" class="view-line"><span><span class="mtk7">#include</span><span class="mtk1">&nbsp;</span><span class="mtk7">&lt;</span><span class="mtk23">stdio.h</span><span class="mtk7">&gt;</span></span></div><div style="top:20px;height:20px;" class="view-line"><span><span class="mtk7">#include</span><span class="mtk1">&nbsp;</span><span class="mtk7">&lt;</span><span class="mtk23">string.h</span><span class="mtk7">&gt;</span></span></div><div style="top:40px;height:20px;" class="view-line"><span><span class="mtk7">#include</span><span class="mtk1">&nbsp;</span><span class="mtk7">&lt;</span><span class="mtk23">math.h</span><span class="mtk7">&gt;</span></span></div><div style="top:60px;height:20px;" class="view-line"><span><span class="mtk7">#include</span><span class="mtk1">&nbsp;</span><span class="mtk7">&lt;</span><span class="mtk23">stdlib.h</span><span class="mtk7">&gt;</span></span></div><div style="top:80px;height:20px;" class="view-line"><span><span></span></span></div><div style="top:100px;height:20px;" class="view-line"><span><span class="mtk7">int</span><span class="mtk1">&nbsp;main()&nbsp;</span></span></div><div style="top:120px;height:20px;" class="view-line"><span><span class="mtk1">{</span></span></div><div style="top:140px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span></span></div><div style="top:160px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk7">char</span><span class="mtk1">&nbsp;s[</span><span class="mtk9">100</span><span class="mtk1">];</span></span></div><div style="top:180px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;scanf(</span><span class="mtk23">"%[^\n]%*c"</span><span class="mtk1">,&nbsp;&amp;s);</span></span></div><div style="top:200px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span></span></div><div style="top:220px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk9">/*&nbsp;Enter&nbsp;your&nbsp;code&nbsp;here.&nbsp;Read&nbsp;input&nbsp;from&nbsp;STDIN.&nbsp;Pr</span><span class="mtk9">int&nbsp;output&nbsp;to&nbsp;STDOUT&nbsp;</span></span></div><div style="top:240px;height:20px;" class="view-line"><span><span class="mtk9">*/</span><span class="mtk1">&nbsp;&nbsp;</span></span></div><div style="top:260px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;printf(</span><span class="mtk23">"Hello,&nbsp;World!\n"</span><span class="mtk1">)&nbsp;;&nbsp;</span></span></div><div style="top:280px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;printf(</span><span class="mtk23">"%s"</span><span class="mtk1">,s);</span></span></div><div style="top:300px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk7">return</span><span class="mtk1">&nbsp;</span><span class="mtk9">0</span><span class="mtk1">;</span></span></div><div style="top:320px;height:20px;" class="view-line"><span><span class="mtk1">}</span></span></div><div style="top:340px;height:20px;" class="view-line"><span><span></span></span></div></div><div data-mprt="1" class="contentWidgets" style="position: absolute; top: 0px;"></div><div role="presentation" aria-hidden="true" class="cursors-layer cursor-line-style cursor-solid"><div class="cursor monaco-mouse-cursor-text " style="height: 20px; top: 160px; left: 143px; font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 20px; letter-spacing: 0px; display: block; visibility: hidden; width: 2px;"></div></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal fade" style="position: absolute; width: 651px; height: 12px; left: 0px; bottom: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 12px; transform: translate3d(0px, 0px, 0px); contain: strict; width: 641px;"></div></div><canvas class="decorationsOverviewRuler" aria-hidden="true" width="14" height="359" style="position: absolute; transform: translate3d(0px, 0px, 0px); contain: strict; top: 0px; right: 0px; width: 14px; height: 359px;"></canvas><div role="presentation" aria-hidden="true" class="invisible scrollbar vertical fade" style="position: absolute; width: 14px; height: 359px; right: 0px; top: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 14px; transform: translate3d(0px, 0px, 0px); contain: strict; height: 346px;"></div></div></div><div role="presentation" aria-hidden="true" style="width: 742px;"></div><textarea data-mprt="6" class="inputarea monaco-mouse-cursor-text" wrap="off" autocorrect="off" autocapitalize="off" autocomplete="off" spellcheck="false" aria-label="Editor content;Press Alt+F1 for Accessibility Options." tabindex="0" role="textbox" aria-roledescription="editor" aria-multiline="true" aria-haspopup="false" aria-autocomplete="both" style="font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 20px; letter-spacing: 0px; top: 160px; left: 221px; width: 1px; height: 1px;"></textarea><div class="monaco-editor-background textAreaCover line-numbers" style="position: absolute; top: 0px; left: 0px; width: 0px; height: 0px;"></div><div data-mprt="4" class="overlayWidgets" style="width: 742px;"><div class="accessibilityHelpWidget" role="dialog" aria-hidden="true" widgetid="editor.contrib.accessibilityHelpWidget" style="display: none; position: absolute;"><div role="document"></div></div><div widgetid="editor.contrib.quickInputWidget" style="position: absolute; top: 0px; right: 50%;"></div></div><div data-mprt="8" class="minimap slider-mouseover" role="presentation" aria-hidden="true" style="position: absolute; left: 0px; width: 0px; height: 359px;"><div class="minimap-shadow-hidden" style="height: 359px;"></div><canvas width="0" height="359" style="position: absolute; left: 0px; width: 0px; height: 359px;"></canvas><canvas class="minimap-decorations-layer" width="0" height="359" style="position: absolute; left: 0px; width: 0px; height: 359px;"></canvas><div class="minimap-slider" style="position: absolute; transform: translate3d(0px, 0px, 0px); contain: strict; width: 0px;"><div class="minimap-slider-horizontal" style="position: absolute; width: 0px; height: 0px;"></div></div></div></div><div data-mprt="2" class="overflowingContentWidgets"><div class="monaco-editor rename-box" widgetid="__renameInputWidget" style="background-color: rgb(243, 243, 243); box-shadow: rgba(0, 0, 0, 0.16) 0px 0px 8px 2px; color: rgb(97, 97, 97); position: absolute; visibility: hidden; max-width: 1366px;"><input class="rename-input" type="text" aria-label="Rename input. Type new name and press Enter to commit." style="font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; background-color: rgb(255, 255, 255); border-width: 0px; border-style: none;"><div class="rename-label" style="font-size: 12px;">Enter to Rename, Shift+Enter to Preview</div></div><div class="monaco-hover" tabindex="0" role="tooltip" widgetid="editor.contrib.modesContentHoverWidget" style="position: absolute; visibility: hidden; max-width: 1366px;"><div class="monaco-scrollable-element " role="presentation" style="position: relative; overflow: hidden;"><div class="monaco-hover-content" style="overflow: hidden; font-size: 15px; line-height: 20px; max-height: 250px; max-width: 500px;"></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 10px; transform: translate3d(0px, 0px, 0px); contain: strict;"></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar vertical" style="position: absolute;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 10px; transform: translate3d(0px, 0px, 0px); contain: strict;"></div></div><div class="shadow"></div><div class="shadow"></div><div class="shadow"></div></div></div></div><div class="context-view" aria-hidden="true" style="display: none;"></div></div></div></div></div><div class="hr-monaco-editor-statusbar"><div style="display: flex;"></div><div class="statusbar-position">Line: 9 Col: 17</div></div></div><div class="pmR pmL pmB plT run-code-wrapper"><button class="ui-btn ui-btn-normal ui-btn-primary pull-right hr-monaco-submit ui-btn-styled"><div class="ui-content align-icon-right"><span class="ui-text" aria-hidden="false">Submit Code</span></div></button><button class="ui-btn ui-btn-normal ui-btn-secondary pull-right msR hr-monaco-compile hr-monaco__run-code ui-btn-styled"><div class="ui-content align-icon-right"><span class="ui-text" aria-hidden="false">Run Code</span></div></button></div></div><div class="pmR pmL pmB hr-monaco-custom-input-wrapper flex"><div><button class="ui-btn ui-btn-normal ui-btn-secondary upload-file mlR ui-btn-styled" data-analytics="Upload File" type="button"><div class="ui-content align-icon-right"><span class="ui-text" aria-hidden="false"><i class="icon-upload ui-icon-upload"></i>Upload Code as File</span></div></button></div><div class="checkBoxWrapper"><div class="ui-checkbox theme-m"><label class="label-wrap"><div class="checkbox-wrap"><input type="checkbox" class="checkbox-input"><span class="custom-holder inset"><svg viewBox="0 0 24 24" width="1em" height="1em" class="checkbox__check-icon ui-svg-icon" fill="currentColor"><path d="M9 18c-.3 0-.5-.1-.7-.3l-5-5c-.4-.4-.4-1 0-1.4s1-.4 1.4 0L9 15.6 19.3 5.3c.4-.4 1-.4 1.4 0s.4 1 0 1.4l-11 11c-.2.2-.4.3-.7.3z"></path></svg></span></div><div class="label">Test against custom input</div></label></div></div></div></div></div></div></div><div class="challenge-response fs-container"></div></section></div></div></div></div></div></div></div></section></div></div><footer class="community-footer"><ul class="footer-links"><li class="link-item"><a target="_blank" class="footer-link blog" data-analytics="FooterLinkBlog" href="https://www.hackerrank.com/blog">Blog</a></li><li class="link-item"><a target="_blank" class="footer-link scoring" data-analytics="FooterLinkScoring" href="https://www.hackerrank.com/scoring">Scoring</a></li><li class="link-item"><a target="_blank" class="footer-link environment" data-analytics="FooterLinkEnvironment" href="https://www.hackerrank.com/environment">Environment</a></li><li class="link-item"><a target="_blank" class="footer-link faq" data-analytics="FooterLinkFAQ" href="https://www.hackerrank.com/faq">FAQ</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkAboutUs" href="https://www.hackerrank.com/about-us">About Us</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkSupport" href="https://www.hackerrank.com/support">Support</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkCareers" href="https://www.hackerrank.com/careers">Careers</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkTermsOfService" href="https://www.hackerrank.com/terms-of-service">Terms Of Service</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkPrivacyPolicy" href="https://www.hackerrank.com/privacy">Privacy Policy</a></li></ul></footer><div></div></div></div></div></div></div><!--Required to handle event bubbling of click in ios safari -->

  <script>
  //HR namespace
  HR = window.HR || {};
  HR.development = false;
  HR.assetPath = 'https://hrcdn.net/fcore/assets/';
  HR.pageLoadTime = Date.now();
  HR.serverAPITime = 1004
  HR.serverRenderTime = 10
  HR.production = true;
  HR.devServer = false;
  HR.isIsomorphic = true;
  HR.loadedWithOldCss = false;
  HR.pusher = {"key":"a280047e3b323ccb1b65","cluster":"mt1"};
</script>

<!-- Vendor scripts -->

<script src="./hackerrank_Hello World!_files/hackerrank_r_vendor-2bc7c1b2f5.js.download"></script>



<script src="./hackerrank_Hello World!_files/runtime-b3f778a9.js.download"></script>

  <script src="./hackerrank_Hello World!_files/chunks_runtime-b7e6b9af5a.js.download"></script>

<script src="./hackerrank_Hello World!_files/hackerrank_r_client-93cc27c5.js.download"></script>


  <!-- Cookies disabled start -->
  <div id="cookies-check" style="text-align: center; margin-top: 50px; display: none;">
    <h3 class="hr-m-b-0.5">
      Cookie support is required to access HackerRank
    </h3>
    <p class="hr-body-03">Seems like cookies are disabled on this browser, please enable them to open this website</p>
  </div>

  <script>
    (function() {
      document.getElementById("cookies-check").style.display = navigator.cookieEnabled ? "none": "block";
    })()
  </script>
  <!-- Cookies disabled end -->

  <script>
    // HR namespace
    HR = window.HR || {};
    HR.firebaseConfig = {"apiKey":"AIzaSyByUOhaiUFzuu3Cil0y1jIWfS8NfFFjpMc","authDomain":"codepair-dev.firebaseapp.com","databaseURL":"codepair-dev.firebaseio.com","fbProxyEndpoint":"codepair-proxy.hackerrank.link","akamaiProxyEndpoint":"sync-staging.hackerrank.com","databaseName":"codepair-dev"};
    HR.productNamespace = 'hackerrank';
    HR.stripe = {"key":"pk_PBXVCPHjyi31lIcbSe2mnlWEIYUzG"};
    HR.servicesBaseUrl = "https://services.hackerrank.com";
    HR.pendoAPIKey = "6a49047d-7d4c-46f5-7b81-8b6193d6bf7b";
    HR.googleAuthClientId = "539603982008.apps.googleusercontent.com";
    HR.quickApplyId = "mmlghgaenodejbokcogohcjelnogcckl";
    HR.mixpanelProjectId = "b1624f1444aa55610f6661e22efc832c";
    HR.krakendHost = "";
    HR.llmGatewayUrl = "undefined";
  </script>

  <!-- Add app.js before adding track scripts -->
  <script src="./hackerrank_Hello World!_files/hackerrank_r_app-6c097ff7.js.download"></script>

  
<script>
  var getUser = (function() {
    var userData;
    if (HR.userEmitter) {
      HR.userEmitter.on('initializeNewUser', function(user) {
        userData = user;
      });
    }
    try{
      if (typeof userData === 'undefined') {
        var initialDataElm = document.querySelector('#initialUserData');
        userData = JSON.parse(decodeURI(initialDataElm.innerHTML));
        initialDataElm.remove();
      }
    } catch(e){
      userData = {};
      console.log('No initial User data found');
    }
    return function() {
      return userData;
    }
  })();
</script>

<!-- Mixpanel Script -->


  <script type="text/javascript">
    (function (f, b) { if (!b.__SV) { var e, g, i, h; window.mixpanel = b; b._i = []; b.init = function (e, f, c) { function g(a, d) { var b = d.split("."); 2 == b.length && ((a = a[b[0]]), (d = b[1])); a[d] = function () { a.push([d].concat(Array.prototype.slice.call(arguments, 0))); }; } var a = b; "undefined" !== typeof c ? (a = b[c] = []) : (c = "mixpanel"); a.people = a.people || []; a.toString = function (a) { var d = "mixpanel"; "mixpanel" !== c && (d += "." + c); a || (d += " (stub)"); return d; }; a.people.toString = function () { return a.toString(1) + ".people (stub)"; }; i = "disable time_event track track_pageview track_links track_forms track_with_groups add_group set_group remove_group register register_once alias unregister identify name_tag set_config reset opt_in_tracking opt_out_tracking has_opted_in_tracking has_opted_out_tracking clear_opt_in_out_tracking start_batch_senders people.set people.set_once people.unset people.increment people.append people.union people.track_charge people.clear_charges people.delete_user people.remove".split( " "); for (h = 0; h < i.length; h++) g(a, i[h]); var j = "set set_once union unset remove delete".split(" "); a.get_group = function () { function b(c) { d[c] = function () { call2_args = arguments; call2 = [c].concat(Array.prototype.slice.call(call2_args, 0)); a.push([e, call2]); }; } for ( var d = {}, e = ["get_group"].concat( Array.prototype.slice.call(arguments, 0)), c = 0; c < j.length; c++) b(j[c]); return d; }; b._i.push([e, f, c]); }; b.__SV = 1.2; e = f.createElement("script"); e.type = "text/javascript"; e.async = !0; e.src = "undefined" !== typeof MIXPANEL_CUSTOM_LIB_URL ? MIXPANEL_CUSTOM_LIB_URL : "file:" === f.location.protocol && "//cdn.mxpnl.com/libs/mixpanel-2-latest.min.js".match(/^\/\//) ? "https://cdn.mxpnl.com/libs/mixpanel-2-latest.min.js" : "//cdn.mxpnl.com/libs/mixpanel-2-latest.min.js"; g = f.getElementsByTagName("script")[0]; g.parentNode.insertBefore(e, g); } })(document, window.mixpanel || []);
  </script>


<!-- google analytics tracking -->
<script>
var _gaq = _gaq || [];

</script>
<!-- Pending candidate site custom GA code -->
<!-- google analytics tracking end-->

<!-- fullstory tracking start -->

<!-- fullstory tracking end -->

<!-- Pendo Tracking   -->

  <!-- Pendo Tracking end -->
  
<!-- GTM tracking -->

<script type="text/javascript">
var gtmTracking = function (user){
  if (window.dataLayer) {
    

    
      window.dataLayer.push({
        'event': 'identify',
        onboardingStatus: user.onboarding_status,
        signupIntent: user.signup_intent,
        isProfessional: user.is_professional,
      });
    
  }
}
gtmTracking(getUser());
HR.userEmitter.on('initializeNewUser', function(user) {
  gtmTracking(user);
});

</script>

<!-- GTM tracking end -->

<!-- Plausbile tracking (Labs) -->

  <script defer="" data-domain="community" src="./hackerrank_Hello World!_files/script.tagged-events.outbound-links.js.download"></script>
  <script>window.plausible = window.plausible || function() { (window.plausible.q = window.plausible.q || []).push(arguments) }</script>

<!-- Plausbile tracking (Labs) end -->



<!-- Google Tag Manager (noscript) #1 -->
<noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-NZTBQVZ"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<!-- End Google Tag Manager (noscript) #1 -->


<!-- Marketo to be added later -->

<!-- Bizible -->

<!-- HR metrics init -->
<script type="text/javascript">

(function() {
  if(typeof hr_metrics !== 'undefined' && hr_metrics.init ) {
      hr_metrics.init({
        product: 'hackerrank',
        use_cookie: true,
        uid_cookie_key: 'hackerrank_mixpanel_token',
        uid_token_cookie_key: 'metrics_user_identifier',
        session_cookie_key: 'session_id',
        metrics_endpoint:  'https://metrics.hackerrank.com/metrics' 
      });
  }
})();

(function(h) {
  window.hr_metrics = h;
  if (!h.loaded) {
    var a = ['track', 'batch_track', 'app_track', 'externalService', 'init', 'batch_track_record', 'track_dwell_time', 'set_navigation_data'];
    for (var i = 0; i < a.length; i++) {
      if (!h[a[i]]) {h[a[i]] = function() {};}
    }
  }
})(window.hr_metrics || {});



</script>
<!-- hrutm_params -->

<!-- HR metrics extension pack -->
<script type="text/javascript">


  if (('performance' in window) && ('timing' in window.performance)) {
    window.addEventListener('load', function() {
      setTimeout(function(){
        var timing = window.performance.timing;
        var obj = {
          referring_url: window.location.pathname,
          fullLoadTime: timing.loadEventEnd - timing.navigationStart,
          // Total time from req start to load
          loadTime: timing.loadEventEnd - timing.fetchStart,
          // Time spent constructing the DOM tree
          domReadyTime: timing.domComplete - timing.domInteractive,
          // Time consumed preparing the new page
          readyStart: timing.fetchStart - timing.navigationStart,
          // Time spent during redirection
          redirectTime: timing.redirectEnd - timing.redirectStart,
          // AppCache
          appcacheTime: timing.domainLookupStart - timing.fetchStart,
          // Time spent unloading documents
          unloadEventTime: timing.unloadEventEnd - timing.unloadEventStart,
          // DNS query time
          lookupDomainTime: timing.domainLookupEnd - timing.domainLookupStart,
          // TCP connection time
          connectTime: timing.connectEnd - timing.connectStart,
          // Time spent during the request
          requestTime: timing.responseEnd - timing.requestStart,
          // Time to first byte for the request
          timeToFirstByte: timing.responseStart - timing.requestStart,
          // Request to completion of the DOM loading
          initDomTreeTime: timing.domInteractive - timing.responseEnd,
          // Load event time
          loadEventTime: timing.loadEventEnd - timing.loadEventStart,
          // Origin of the request
          react: true,
          //isIsomorphic flag
          isIsomorphic: window.HR.isIsomorphic,
          //old css loaded flag
          loadedWithOldCss: window.HR.loadedWithOldCss,
          // server timings
          serverAPITime: window.HR.serverAPITime,
          serverRenderTime: window.HR.serverRenderTime,
        }

        if (('navigation' in window.performance) && ('getEntries' in window.performance)) {
          obj.navigationType = window.performance.navigation.type;
          obj.navigationRedirectCount = window.performance.navigation.redirectCount;
          if (obj.fullLoadTime > 8000) {
            try {
              var entries = window.performance.getEntries();
              if(entries[0].toJSON){
                obj.networkRequests = entries.map(function(e) {return e.toJSON();});
              }
            } catch (e) {
              //do nothing
            }
          }
        }
        if(hr_metrics && hr_metrics.app_track) hr_metrics.app_track('page-load-metrics', obj);
      }, 1000);
    });
  }


function findCookieValue(cookieName) {
  var cookieString = document.cookie.split(';').find((a) => a.includes(cookieName)) || '';
  return cookieString !== "" ? cookieString.split('=')[1] : "";
}

window.addEventListener('load', function() {
  var _pathname = document.location.pathname;

  if(hr_metrics && hr_metrics.batch_track) hr_metrics.batch_track('PageLoad', _pathname + document.location.search, {
      attribute1: _pathname,
      // check if user is in dark mode or not
      attribute2: findCookieValue('user_theme'),
  });

    if (hr_metrics.track_dwell_time && hr_metrics.set_navigation_data) {
        hr_metrics.track_dwell_time(_pathname);
        hr_metrics.set_navigation_data();
    }

    window.addEventListener('beforeunload', function(){

        var _pathname = document.location.pathname;
        if (hr_metrics){
          if(hr_metrics.batch_track) hr_metrics.batch_track('PageClose', _pathname + document.location.search, {
              attribute2: _pathname
          });
          if(hr_metrics.track_dwell_time) hr_metrics.track_dwell_time(_pathname, true);
          if(hr_metrics.batch_track_record) hr_metrics.batch_track_record(true);
        }
    });

});

</script>

<!-- Facebook SDK -->
<!-- Twitter SDK -->

<!-- track button clicks -->
<script>
  document.addEventListener('click', (e) => {
    const clickableElm = e.target.closest('a[data-analytics], button[data-analytics], input[data-analytics], select[data-analytics], i[data-analytics], div[data-analytics], span[data-analytics], h5[data-analytics]');

    if (clickableElm) {
      if (clickableElm.getAttribute('data-analytics')) {
          action = 'Click'; data = clickableElm.getAttribute('data-analytics');
      } else {
          return;
      }

      
        hr_metrics.batch_track(action, data, (function() {
            var params={};
            for (var _i=1; _i<=12; ++_i){
                var _attr = 'data-attr'+_i;
                if (clickableElm.getAttribute(_attr)){
                  params['attribute'+_i] = clickableElm.getAttribute(_attr);
                }
            }
            var attributes = clickableElm.attributes, attr_length = clickableElm.attributes.length;
            for (var i = 0; i < attr_length; i++){
              var attribute = attributes[i];
              if (attribute.name.indexOf('data-attr-') === 0){
                param_name = attribute.name.substr('data-attr-'.length);
                if (param_name.length > 0) {
                  params[param_name] = attribute.value;
                }
              }
            }
            return params;
        })());
      

      
    }
  }, true);

</script>
<!-- track button clicks end-->
<!-- Profitwell script-->

<!-- Profitwell script ends -->

<!-- Linkedin Insights -->




<div id="toast-portal-container"><div id="toast-portal-container-item"><div class="c-gfnNuf"></div><div class="c-gfnNuf"></div></div></div><script type="text/javascript" id="" charset="">function debounce(b,f,c){var a;return function(){var d=this,e=arguments,g=function(){a=null;c||b.apply(d,e)},h=c&&!a;clearTimeout(a);a=setTimeout(g,f);h&&b.apply(d,e)}}(function(){document.addEventListener("click",debounce(google_tag_manager["rm"]["10905007"](14),500,!0),!0);document.addEventListener("mouseenter",debounce(google_tag_manager["rm"]["10905007"](23),1E3),!0);window.jsTrackGoogleAnalytics&&"function"!==typeof window.jsTrackGoogleAnalytics||(window.jsTrackGoogleAnalytics=google_tag_manager["rm"]["10905007"](26))})();</script><script type="text/javascript" id="" charset="">Element.prototype.matches||(Element.prototype.matches=Element.prototype.msMatchesSelector||Element.prototype.webkitMatchesSelector);"function"!=typeof Object.assign&&Object.defineProperty(Object,"assign",{value:function(d,f){if(null==d)throw new TypeError("Cannot convert undefined or null to object");for(var e=Object(d),b=1;b<arguments.length;b++){var a=arguments[b];if(null!=a)for(var c in a)Object.prototype.hasOwnProperty.call(a,c)&&(e[c]=a[c])}return e},writable:!0,configurable:!0});</script><div class="monaco-aria-container"><div class="monaco-alert" role="alert" aria-atomic="true"></div><div class="monaco-alert" role="alert" aria-atomic="true"></div><div class="monaco-status" role="complementary" aria-live="polite" aria-atomic="true"></div><div class="monaco-status" role="complementary" aria-live="polite" aria-atomic="true"></div></div></body></html>