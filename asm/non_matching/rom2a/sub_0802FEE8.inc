	THUMB_FUNC_START sub_0802FEE8
sub_0802FEE8: @ 0x0802FEE8
	push {r4-r6,lr}
	sub sp, sp, #4
	ldr r0, _0802FF0C  @ =gUnknown_03000520
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802FFD6
	ldr r1, _0802FF10  @ =gUnknown_03000FC0
	mov r0, #8
	strh r0, [r1, #18]
	ldr r5, _0802FF14  @ =gUnknown_02016D60
	ldrb r4, [r5]
	cmp r4, #1
	beq _0802FF58
	cmp r4, #1
	bgt _0802FF18
	cmp r4, #0
	beq _0802FF1E
	b _0802FFD6
_0802FF0C:
	.4byte gUnknown_03000520
_0802FF10:
	.4byte gUnknown_03000FC0
_0802FF14:
	.4byte gUnknown_02016D60
_0802FF18:
	cmp r4, #2
	beq _0802FF6C
	b _0802FFD6
_0802FF1E:
	ldr r1, _0802FF4C  @ =gUnknown_030004A0
	mov r0, #64
	strh r0, [r1]
	mov r0, #128
	lsl r0, r0, #19
	strh r4, [r0]
	bl sub_0801239C
	bl sub_080123BC
	str r4, [sp]
	ldr r1, _0802FF50  @ =gUnknown_03006CA8
	ldr r2, _0802FF54  @ =0x05000008
	mov r0, sp
	bl CpuSet
	mov r0, #3
	bl sub_08036704
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	b _0802FFD6
_0802FF4C:
	.4byte gUnknown_030004A0
_0802FF50:
	.4byte gUnknown_03006CA8
_0802FF54:
	.4byte 0x05000008
_0802FF58:
	ldr r0, [r1, #8]
	cmp r0, #1
	bne _0802FFD6
	mov r0, #2
	strb r0, [r5]
	b _0802FFD6
_0802FF64:
	mov r0, #10
	bl set_main_state
	b _0802FFD6
_0802FF6C:
	bl sub_0800BED8
	ldr r1, _0802FFE0  @ =gUnknown_03006C80
	add r0, r1, #0
	add r0, r0, #44
	ldrb r0, [r0]
	mov r3, #240
	and r3, r3, r0
	cmp r3, #240
	beq _0802FFD0
	mov r2, #1
	ldrb r0, [r1]
	cmp r2, r0
	bcs _0802FFAC
	add r5, r1, #0
	mov r6, #240
	add r4, r0, #0
_0802FF8E:
	lsl r0, r2, #3
	add r0, r0, r5
	add r0, r0, #44
	ldrb r0, [r0]
	add r1, r6, #0
	and r1, r1, r0
	cmp r1, #240
	beq _0802FFA2
	cmp r1, r3
	bne _0802FF64
_0802FFA2:
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, r4
	bcc _0802FF8E
_0802FFAC:
	mov r2, #0
	ldr r1, _0802FFE0  @ =gUnknown_03006C80
	ldrb r0, [r1]
	cmp r2, r0
	bcs _0802FFD0
	add r3, r1, #0
	add r1, r0, #0
_0802FFBA:
	lsl r0, r2, #3
	add r0, r0, r3
	add r0, r0, #44
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802FF64
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, r1
	bcc _0802FFBA
_0802FFD0:
	mov r0, #5
	bl set_main_state
_0802FFD6:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802FFE0:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0802FEE8

