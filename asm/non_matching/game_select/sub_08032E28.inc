	THUMB_FUNC_START sub_08032E28
sub_08032E28: @ 0x08032E28
	push {r4,r5,lr}
	ldr r0, _08032EBC  @ =gUnknown_03000520
	ldrb r5, [r0]
	cmp r5, #0
	bne _08032EB4
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	mov r4, #0
	strh r5, [r0]
	ldr r0, _08032EC0  @ =gPaletteBuf2
	strh r5, [r0]
	bl sub_080123BC
	bl sub_0801239C
	bl sub_0803A320
	bl sub_080152E0
	bl sub_0802BF60
	bl sub_0802C278
	bl sub_080137DC
	bl sub_0800BEC4
	bl sub_0800D6F4
	bl sub_0800D744
	ldr r0, _08032EC4  @ =0x03000040
	mov r1, #224
	lsl r1, r1, #1
	bl zero_memory
	bl sub_0803E518
	ldr r1, _08032EC8  @ =gUnknown_03006A30
	mov r2, #230
	lsl r2, r2, #1
	add r0, r1, r2
	strb r4, [r0]
	mov r3, #158
	lsl r3, r3, #1
	add r0, r1, r3
	strb r4, [r0]
	add r0, r1, #0
	add r0, r0, #172
	strb r4, [r0]
	strb r4, [r1, #28]
	ldr r0, _08032ECC  @ =gUnknown_03000F44
	str r5, [r0]
	ldr r0, _08032ED0  @ =gUnknown_03000208
	strh r5, [r0]
	ldr r0, _08032ED4  @ =gUnknown_03000E20
	strb r4, [r0, #18]
	ldr r2, _08032ED8  @ =gUnknown_030004A0
	ldrh r0, [r2]
	mov r3, #128
	lsl r3, r3, #5
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r1, _08032EDC  @ =gUnknown_03005050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08032EB4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08032EBC:
	.4byte gUnknown_03000520
_08032EC0:
	.4byte gPaletteBuf2
_08032EC4:
	.4byte 0x03000040
_08032EC8:
	.4byte gUnknown_03006A30
_08032ECC:
	.4byte gUnknown_03000F44
_08032ED0:
	.4byte gUnknown_03000208
_08032ED4:
	.4byte gUnknown_03000E20
_08032ED8:
	.4byte gUnknown_030004A0
_08032EDC:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_08032E28

