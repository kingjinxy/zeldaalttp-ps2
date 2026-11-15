	THUMB_FUNC_START sub_0801620C
sub_0801620C: @ 0x0801620C
	push {lr}
	ldr r0, _0801623C  @ =gUnknown_03006C80
	ldrb r0, [r0, #1]
	cmp r0, #0
	blt _08016238
	cmp r0, #2
	bgt _08016238
	ldr r1, _08016240  @ =gUnknown_03000450
	mov r0, #12
	strb r0, [r1, #8]
	ldr r1, _08016244  @ =gUnknown_030004A0
	ldr r0, _08016248  @ =gUnknown_08142374
	ldrh r0, [r0, #38]
	strh r0, [r1, #44]
	ldrh r2, [r1]
	mov r3, #128
	lsl r3, r3, #4
	add r0, r3, #0
	orr r0, r0, r2
	strh r0, [r1]
	bl 0x08008D74
_08016238:
	pop {r0}
	bx r0
_0801623C:
	.4byte gUnknown_03006C80
_08016240:
	.4byte gUnknown_03000450
_08016244:
	.4byte gUnknown_030004A0
_08016248:
	.4byte gUnknown_08142374
	THUMB_FUNC_END sub_0801620C

