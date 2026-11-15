	THUMB_FUNC_START sub_080310DC
sub_080310DC: @ 0x080310DC
	push {r4-r6,lr}
	sub sp, sp, #4
	bl sub_0800BED8
	bl sub_0801239C
	bl sub_080123BC
	bl sub_0803A2E8
	mov r0, sp
	mov r6, #0
	strh r6, [r0]
	ldr r5, _0803116C  @ =gUnknown_02016D60
	ldr r2, _08031170  @ =0x01000014
	add r1, r5, #0
	bl CpuSet
	mov r0, #35
	bl load_palette_from_gfx_group
	mov r0, #12
	bl load_gfx_group
	ldr r4, _08031174  @ =gUnknown_030004A0
	mov r1, #0
	mov r0, #242
	lsl r0, r0, #5
	strh r0, [r4, #8]
	sub r0, r0, #255
	strh r0, [r4, #20]
	sub r0, r0, #255
	strh r0, [r4, #32]
	strh r1, [r4, #36]
	strh r1, [r4, #34]
	strh r1, [r4, #24]
	strh r1, [r4, #22]
	strh r1, [r4, #12]
	strh r1, [r4, #10]
	ldr r0, _08031178  @ =gUnknown_03000450
	strh r1, [r0, #34]
	strh r1, [r0, #32]
	ldr r0, _0803117C  @ =gUnknown_0813D878
	bl sub_0804C808
	strb r6, [r5, #2]
	bl sub_080397F0
	strb r0, [r5, #3]
	strb r6, [r5, #8]
	mov r0, #2
	strb r0, [r5, #10]
	ldrh r0, [r4]
	mov r2, #184
	lsl r2, r2, #5
	add r1, r2, #0
	orr r0, r0, r1
	strh r0, [r4]
	mov r0, #0
	mov r1, #1
	bl sub_080599A8
	ldr r1, _08031180  @ =gUnknown_03005050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08031184  @ =gSubState
	strb r6, [r0]
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_0803116C:
	.4byte gUnknown_02016D60
_08031170:
	.4byte 0x01000014
_08031174:
	.4byte gUnknown_030004A0
_08031178:
	.4byte gUnknown_03000450
_0803117C:
	.4byte gUnknown_0813D878
_08031180:
	.4byte gUnknown_03005050
_08031184:
	.4byte gSubState
	THUMB_FUNC_END sub_080310DC

