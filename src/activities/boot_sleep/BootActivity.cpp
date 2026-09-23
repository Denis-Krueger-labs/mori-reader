#include "BootActivity.h"

#include <GfxRenderer.h>
#include <I18n.h>

#include "fontIds.h"

void BootActivity::onEnter() {
  Activity::onEnter();

  const auto pageHeight = renderer.getScreenHeight();

  renderer.clearScreen();

  renderer.drawCenteredText(SMALL_FONT_ID, pageHeight / 2 - 65, " /\\_/\\");
  renderer.drawCenteredText(SMALL_FONT_ID, pageHeight / 2 - 45, "( o.o )");
  renderer.drawCenteredText(SMALL_FONT_ID, pageHeight / 2 - 25, " > ^ <");

  renderer.drawCenteredText(UI_12_FONT_ID, pageHeight / 2 + 10, "MORI", true, EpdFontFamily::BOLD);
  renderer.drawCenteredText(UI_10_FONT_ID, pageHeight / 2 + 35, "Reader");
  renderer.drawCenteredText(SMALL_FONT_ID, pageHeight / 2 + 65, "summoning books...");

  renderer.drawCenteredText(SMALL_FONT_ID, pageHeight - 30, CROSSPOINT_VERSION);

  renderer.displayBuffer();
}
