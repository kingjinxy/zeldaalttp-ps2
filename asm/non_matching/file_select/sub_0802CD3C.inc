	THUMB_FUNC_START sub_0802CD3C
sub_0802CD3C: @ 0x0802CD3C
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r5, _0802CD54  @ =gUnknown_03000420
	ldrb r0, [r5]
	cmp r0, #0
	bne _0802CDAC
	ldrb r4, [r5, #5]
	cmp r4, #0
	beq _0802CD58
	bl sub_0802CC20
	b _0802CD7E
_0802CD54:
	.4byte gUnknown_03000420
_0802CD58:
	ldrb r1, [r5, #4]
	cmp r1, #0
	beq _0802CD7E
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0802CD78
	str r4, [sp]
	ldrb r1, [r5, #3]
	lsl r1, r1, #11
	ldr r0, _0802CD9C  @ =gUnknown_0202D250
	add r1, r1, r0
	ldr r2, _0802CDA0  @ =0x010000A0
	mov r0, sp
	bl CpuFastSet
_0802CD78:
	strb r4, [r5, #4]
	mov r0, #1
	strb r0, [r5, #2]
_0802CD7E:
	ldr r2, _0802CDA4  @ =gUnknown_03000420
	ldr r0, [r2]
	ldr r1, _0802CDA8  @ =0x00FFFF00
	and r0, r0, r1
	cmp r0, #0
	bne _0802CD8C
	b _0802CE8C
_0802CD8C:
	ldrb r0, [r2, #2]
	neg r0, r0
	lsr r0, r0, #31
	strb r0, [r2, #1]
	bl sub_0802D8C0
	b _0802CE8C
	.byte 0x00
	.byte 0x00
_0802CD9C:
	.4byte gUnknown_0202D250
_0802CDA0:
	.4byte 0x010000A0
_0802CDA4:
	.4byte gUnknown_03000420
_0802CDA8:
	.4byte 0x00FFFF00
_0802CDAC:
	bl sub_0802CFBC
	ldrb r4, [r5, #5]
	cmp r4, #0
	bne _0802CE7C
	ldrb r1, [r5, #4]
	cmp r1, #0
	beq _0802CDE8
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0802CDD6
	str r4, [sp]
	ldrb r1, [r5, #3]
	lsl r1, r1, #11
	ldr r0, _0802CDE0  @ =gUnknown_0202D250
	add r1, r1, r0
	ldr r2, _0802CDE4  @ =0x010000A0
	mov r0, sp
	bl CpuFastSet
_0802CDD6:
	strb r4, [r5, #4]
	mov r0, #1
	strb r0, [r5, #2]
	b _0802CE80
	.byte 0x00
	.byte 0x00
_0802CDE0:
	.4byte gUnknown_0202D250
_0802CDE4:
	.4byte 0x010000A0
_0802CDE8:
	ldr r0, _0802CE5C  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #0
	bne _0802CE80
	ldr r1, _0802CE60  @ =gUnknown_03000940
	ldr r0, _0802CE64  @ =gLCDRegisterBuffer
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _0802CE80
	ldrb r0, [r5]
	cmp r0, #1
	bne _0802CE80
	strb r0, [r5, #5]
	ldr r3, _0802CE68  @ =gUnknown_030004A0
	add r1, r3, #0
	add r1, r1, #102
	ldr r0, _0802CE6C  @ =0x00003F41
	strh r0, [r1]
	add r1, r1, #2
	ldr r0, _0802CE70  @ =0x00000808
	strh r0, [r1]
	ldrh r0, [r3]
	mov r2, #128
	lsl r2, r2, #7
	add r1, r2, #0
	orr r0, r0, r1
	strh r0, [r3]
	add r2, r3, #0
	add r2, r2, #96
	ldrb r0, [r2]
	mov r4, #252
	lsl r4, r4, #6
	add r1, r4, #0
	orr r0, r0, r1
	strh r0, [r2]
	add r1, r3, #0
	add r1, r1, #98
	mov r0, #31
	strh r0, [r1]
	sub r1, r1, #8
	ldr r0, _0802CE74  @ =0x000050A0
	strh r0, [r1]
	add r1, r1, #4
	ldr r0, _0802CE78  @ =0x00002878
	strh r0, [r1]
	mov r0, #17
	bl load_gfx_group
	b _0802CE8C
	.byte 0x00
	.byte 0x00
_0802CE5C:
	.4byte gUnknown_02000010
_0802CE60:
	.4byte gUnknown_03000940
_0802CE64:
	.4byte gLCDRegisterBuffer
_0802CE68:
	.4byte gUnknown_030004A0
_0802CE6C:
	.4byte 0x00003F41
_0802CE70:
	.4byte 0x00000808
_0802CE74:
	.4byte 0x000050A0
_0802CE78:
	.4byte 0x00002878
_0802CE7C:
	bl sub_0802CC20
_0802CE80:
	bl sub_0802D1E8
	ldr r0, _0802CE94  @ =gUnknown_03000204
	ldrb r0, [r0]
	bl sub_0802D858
_0802CE8C:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_0802CE94:
	.4byte gUnknown_03000204
	THUMB_FUNC_END sub_0802CD3C

