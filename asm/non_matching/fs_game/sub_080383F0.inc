	THUMB_FUNC_START sub_080383F0
sub_080383F0: @ 0x080383F0
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	bl sub_0801239C
	bl sub_080144A0
	bl sub_080123BC
	bl sub_0803A320
	bl sub_080152E0
	bl sub_0802BF60
	bl sub_0802C278
	ldr r0, _08038430  @ =0x03000040
	mov r1, #224
	lsl r1, r1, #1
	bl zero_memory
	bl sub_0803E518
	add r0, r7, #0
	mov r1, #0
	strb r1, [r0]
_08038426:
	add r0, r7, #0
	ldrb r1, [r0]
	cmp r1, #3
	bls _08038434
	b _0803847C
_08038430:
	.4byte 0x03000040
_08038434:
	ldr r0, _08038474  @ =gUnknown_03006A30
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _08038478  @ =gUnknown_03006C80
	add r3, r7, #0
	ldrb r2, [r3]
	add r3, r1, #0
	add r4, r1, #0
	add r4, r4, #88
	add r1, r4, r2
	ldrb r2, [r0, #28]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	add r1, r7, #0
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08038426
_08038474:
	.4byte gUnknown_03006A30
_08038478:
	.4byte gUnknown_03006C80
_0803847C:
	mov r0, #2
	bl load_palette_from_gfx_group
	mov r0, #16
	bl load_gfx_group
	mov r0, #160
	lsl r0, r0, #19
	mov r1, #0
	strh r1, [r0]
	ldr r0, _080384F0  @ =gPaletteBuf2
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r1, _080384F4  @ =gSubState
	ldr r0, _080384F4  @ =gSubState
	ldr r1, _080384F4  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _080384F8  @ =gUnknown_0202E1E0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080384FC  @ =gUnknown_03000E20
	ldrh r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #10
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #2]
	mov r0, #0
	mov r1, #0
	bl set_palette_color
	ldr r1, _08038500  @ =0x0000FFFF
	mov r0, #14
	bl set_palette_color
	ldr r0, _08038504  @ =gUnknown_030004A0
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	mov r0, #128
	lsl r0, r0, #19
	mov r1, #0
	strh r1, [r0]
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
_080384F0:
	.4byte gPaletteBuf2
_080384F4:
	.4byte gSubState
_080384F8:
	.4byte gUnknown_0202E1E0
_080384FC:
	.4byte gUnknown_03000E20
_08038500:
	.4byte 0x0000FFFF
_08038504:
	.4byte gUnknown_030004A0
	THUMB_FUNC_END sub_080383F0

