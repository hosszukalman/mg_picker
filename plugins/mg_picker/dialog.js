/**
 * @file
 *
 *
 *
 * @author Kálmán Hosszu - hosszu.kalman@gmail.com
 */

(function ($) {

  /**
   * Cancel button click
   */
  Drupal.behaviors.mgPickerCloseDialog = {
    attach: function (context, settings) {
      $('#mg-picker-cancel', context).click(function () {
        var dialog = Drupal.settings.wysiwyg;
        var target = window.opener || window.parent;
        target.Drupal.wysiwyg.instances[dialog.instance].closeDialog(window);
        return false;
      });
    }
  };

  /**
   * Select file item
   */
  Drupal.behaviors.mgPickerSelectItem = {
    attach: function (context, settings) {
      $('.mg-picker-file-item', context).click(function () {
        $('.mg-picker-file-item', context).each(function() {
          $(this).removeClass('selected');
        });

        $(this).addClass('selected');

        return false;
      });
    }
  };

})(jQuery);