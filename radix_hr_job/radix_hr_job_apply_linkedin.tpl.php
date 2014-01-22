<div class="button-linkedin" id="buttonLinkedin">   
  <div class="linkedin-script"  id="linkedinScript">
    <script src="http://platform.linkedin.com/in.js" type="text/javascript">api_key: <?php print $api_key; ?> </script>          
    <script type="IN/Apply" data-companyname="<?php print $company_name; ?>" 
            data-jobtitle="<?php print $jobtitle; ?>"
            data-themecolor="#111" data-email="<?php print $company_email; ?>">
      </script>
  </div>
  <div class="linkedin-title">Apply with LinkedIn</div>
</div>