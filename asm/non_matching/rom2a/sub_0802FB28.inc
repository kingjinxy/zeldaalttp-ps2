	THUMB_FUNC_START sub_0802FB28
sub_0802FB28: @ 0x0802FB28
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #20
	ldr r0, _0802FC20  @ =gUnknown_03000520
	ldrb r7, [r0]
	cmp r7, #0
	bne _0802FC12
	mov r0, #128
	lsl r0, r0, #19
	mov r1, #0
	mov r8, r1
	strh r7, [r0]
	ldr r5, _0802FC24  @ =gUnknown_030004A0
	mov r0, #64
	strh r0, [r5]
	mov r4, #160
	str r4, [sp]
	mov r1, #224
	lsl r1, r1, #19
	ldr r2, _0802FC28  @ =0x01000100
	mov r0, sp
	bl CpuFastSet
	str r4, [sp, #4]
	add r0, sp, #4
	ldr r6, _0802FC2C  @ =gOAMBuffer
	ldr r1, _0802FC30  @ =0x01000200
	mov r9, r1
	add r1, r6, #0
	mov r2, r9
	bl CpuFastSet
	str r7, [sp, #8]
	add r0, sp, #8
	ldr r4, _0802FC34  @ =gUnknown_03006630
	ldr r2, _0802FC38  @ =0x01000040
	add r1, r4, #0
	bl CpuFastSet
	ldr r0, _0802FC3C  @ =gUnknown_0300050C
	mov r1, r8
	strb r1, [r0]
	ldr r0, _0802FC40  @ =gUnknown_03000204
	strb r1, [r0]
	ldr r0, _0802FC44  @ =gUnknown_03000E34
	str r4, [r0]
	ldr r0, _0802FC48  @ =gUnknown_03005E08
	add r4, r4, #128
	str r4, [r0]
	ldr r0, _0802FC4C  @ =gUnknown_03005E04
	str r6, [r0]
	bl sub_0800D6F4
	bl sub_0801239C
	bl sub_080123BC
	str r7, [sp, #12]
	add r0, sp, #12
	ldr r1, _0802FC50  @ =0x0600C000
	ldr r2, _0802FC54  @ =0x01000080
	bl CpuFastSet
	str r7, [sp, #16]
	add r0, sp, #16
	ldr r1, _0802FC58  @ =0x0600D800
	mov r2, r9
	bl CpuFastSet
	mov r0, #5
	bl load_palette_from_gfx_group
	mov r0, #3
	bl load_gfx_group
	bl sub_08030054
	ldr r0, _0802FC5C  @ =gUnknown_0200B310
	str r7, [r0]
	ldr r1, _0802FC60  @ =0x00006739
	mov r0, #0
	bl set_palette_color
	add r1, r5, #0
	add r1, r1, #102
	ldr r0, _0802FC64  @ =0x00003C64
	strh r0, [r1]
	ldr r0, _0802FC68  @ =0x0000FF60
	strh r0, [r5, #12]
	ldr r0, _0802FC6C  @ =0x00001B0C
	strh r0, [r5, #8]
	str r7, [r5, #16]
	strh r7, [r5, #24]
	strh r7, [r5, #22]
	ldr r0, _0802FC70  @ =0x00001309
	strh r0, [r5, #20]
	strh r7, [r5, #34]
	mov r1, #91
	strh r1, [r5, #36]
	strh r7, [r5, #46]
	strh r1, [r5, #48]
	ldr r0, _0802FC74  @ =gUnknown_03000450
	strh r7, [r0, #32]
	strh r1, [r0, #34]
	ldr r0, _0802FC78  @ =gUnknown_0813D804
	bl sub_0804C808
	ldr r2, _0802FC7C  @ =gUnknown_02016D60
	strh r7, [r2, #6]
	ldr r1, _0802FC80  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #4
	strh r0, [r2, #4]
_0802FC12:
	add sp, sp, #20
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_0802FC20:
	.4byte gUnknown_03000520
_0802FC24:
	.4byte gUnknown_030004A0
_0802FC28:
	.4byte 0x01000100
_0802FC2C:
	.4byte gOAMBuffer
_0802FC30:
	.4byte 0x01000200
_0802FC34:
	.4byte gUnknown_03006630
_0802FC38:
	.4byte 0x01000040
_0802FC3C:
	.4byte gUnknown_0300050C
_0802FC40:
	.4byte gUnknown_03000204
_0802FC44:
	.4byte gUnknown_03000E34
_0802FC48:
	.4byte gUnknown_03005E08
_0802FC4C:
	.4byte gUnknown_03005E04
_0802FC50:
	.4byte 0x0600C000
_0802FC54:
	.4byte 0x01000080
_0802FC58:
	.4byte 0x0600D800
_0802FC5C:
	.4byte gUnknown_0200B310
_0802FC60:
	.4byte 0x00006739
_0802FC64:
	.4byte 0x00003C64
_0802FC68:
	.4byte 0x0000FF60
_0802FC6C:
	.4byte 0x00001B0C
_0802FC70:
	.4byte 0x00001309
_0802FC74:
	.4byte gUnknown_03000450
_0802FC78:
	.4byte gUnknown_0813D804
_0802FC7C:
	.4byte gUnknown_02016D60
_0802FC80:
	.4byte gSubState
	THUMB_FUNC_END sub_0802FB28

