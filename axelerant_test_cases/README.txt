
CONTENTS OF THIS FILE
---------------------

  * Introduction
  * Background Information
  * Requirements
  * Example URL
  * Configuration


INTRODUCTION
------------
Create a custom Drupal 7 module

Requirements
------------
* Display a block that shows the time the user last logged in. “You last logged in at “
* In the user’s current time-zone
* Have the block automatically be placed in left side-rail region (if available)
* Make sure that the block is not visible for non-logged in users.
* Allow the message to be configured per user.
* Frontend Javascript should collapse (animated) the block after 10 seconds.
* Make this a panels ctools content type (pane) in addition to a standard block
* Describe any issues or concerns you see with this list of requirements for this task in the context of a high traffic sites like examiner.com, weather.com, etc.

Configuration
-------------
1.Copy module in /sites/all/module folder
2.Goto "<site_name>/admin/modules" and enable "test_cases module"
3.Goto '<sitename>/admin/config/axelerant/cases' and add "test_cases_message" and save configuration form to used this api key for further used.

Issues or concerns on requirement
---------------------------------
1.We have created custom pane to show block of information in panel then we have to choose only one approach like to created custom block or custom pane.
2.If we used panel to show content then there is performance issue to reder data as compaire to normal block.
