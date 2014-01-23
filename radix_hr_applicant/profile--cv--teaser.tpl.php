<?php

/**
 * @file
 * Default theme implementation for profiles.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) profile type label.
 * - $url: The URL to view the current profile.
 * - $page: TRUE if this is the main view page $url points too.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-profile
 *   - profile-{TYPE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
$image_rendered = "";
if (isset($content['field_cv_personal_information'][0])) {
	$entity = $content['field_cv_personal_information'][0]['entity']['field_collection_item'];
	if (is_array($entity)) {
	  foreach ($entity as $key => $value) {
	    $field_wrapper = entity_metadata_wrapper('field_collection_item', $key);
	    $field_photo = $field_wrapper->field_cv_pers_photo->value();
	    $image_path = image_style_url('thumbnail', $field_photo['uri']);
	    $image_rendered = theme('image', array('path' => $image_path));
	  }
	}
}

?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>>
        <a class="recruiter-resume-link" href="<?php print $url; ?>"><?php print $title; ?></a>
    </h2>
  <?php endif; ?>
  <div class="content"<?php print $content_attributes; ?>>
    <div class="cv-teaser-container clearfix">
      <div class="resume-teaser-info clearfix">
        <?php if ($image_rendered): ?>
          <div class="cv-photo"><?php print $image_rendered; ?></div>
        <?php endif; ?>
        <?php print render($content['field_cv_job_preferences']); ?>
        <div class="links">
          <?php print render($content['links']); ?>
        </div>
      </div>
    </div>
  </div>
</div>
