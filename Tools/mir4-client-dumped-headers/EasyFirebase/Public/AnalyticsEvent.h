#pragma once
#include "CoreMinimal.h"
#include "AnalyticsEvent.generated.h"

UENUM(BlueprintType)
enum class AnalyticsEvent : uint8 {
    add_payment_info,
    add_to_cart,
    add_to_wishlist,
    app_open,
    begin_checkout,
    campaign_details,
    checkout_progress,
    earn_virtual_currency,
    ecommerce_purchase,
    generate_lead,
    join_group,
    level_up,
    login,
    post_score,
    present_offer,
    purchase_refund,
    remove_from_cart,
    search,
    select_content,
    set_checkout_option,
    share,
    sign_up,
    spend_virtual_currency,
    tutorial_begin,
    tutorial_complete,
    unlock_achievement,
    view_item,
    view_item_list,
    view_search_results,
    level_start,
    level_end,
};

