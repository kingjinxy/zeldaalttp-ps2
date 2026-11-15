	THUMB_FUNC_START sub_080B79F4
sub_080B79F4: @ 0x080B79F4
	push {r4,r5,lr}
	sub sp, sp, #40
	ldr r4, _080B7A30  @ =gUnknown_020068B1
	ldrb r0, [r4]
	cmp r0, #6
	bne _080B7A10
	ldr r1, _080B7A34  @ =gUnknown_020068B2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #76
	mov r1, #0
	bl sub_0812A324
_080B7A10:
	ldrb r0, [r4]
	cmp r0, #64
	bne _080B7A22
	mov r0, #224
	strb r0, [r4]
	ldr r1, _080B7A38  @ =gUnknown_020068C0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080B7A22:
	ldrb r1, [r4]
	lsl r2, r1, #24
	lsr r0, r2, #24
	cmp r0, #14
	bls _080B7A3C
	add r0, r1, #1
	b _080B7AA2
_080B7A30:
	.4byte gUnknown_020068B1
_080B7A34:
	.4byte gUnknown_020068B2
_080B7A38:
	.4byte gUnknown_020068C0
_080B7A3C:
	lsr r2, r2, #26
	mov r0, #2
	and r2, r2, r0
	lsl r2, r2, #24
	ldr r0, _080B7AAC  @ =gUnknown_0816FF20
	str r0, [sp, #20]
	ldr r0, _080B7AB0  @ =gUnknown_08170238
	lsr r2, r2, #25
	lsl r1, r2, #2
	add r0, r1, r0
	ldr r0, [r0]
	str r0, [sp, #24]
	ldr r0, _080B7AB4  @ =gUnknown_08170240
	add r0, r1, r0
	ldr r0, [r0]
	str r0, [sp, #28]
	ldr r0, _080B7AB8  @ =gUnknown_08170248
	add r0, r1, r0
	ldr r0, [r0]
	str r0, [sp, #32]
	ldr r0, _080B7ABC  @ =gUnknown_08170250
	add r1, r1, r0
	ldr r0, [r1]
	str r0, [sp, #36]
	add r3, sp, #12
	ldr r1, _080B7AC0  @ =gUnknown_08170258
	add r1, r2, r1
	ldr r5, _080B7AC4  @ =0x0000FFF9
	add r0, r5, #0
	ldrb r1, [r1]
	add r0, r0, r1
	strh r0, [r3]
	add r1, r3, #0
	mov r0, #50
	strh r0, [r1, #2]
	ldr r0, _080B7AC8  @ =gUnknown_0817025A
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1, #4]
	mov r1, sp
	add r0, sp, #28
	ldm r0!, {r2,r3,r5}
	stm r1!, {r2,r3,r5}
	ldr r0, [sp, #12]
	ldr r1, [sp, #16]
	ldr r2, [sp, #20]
	ldr r3, [sp, #24]
	bl sub_080B7B40
	ldrb r0, [r4]
	add r0, r0, #1
_080B7AA2:
	strb r0, [r4]
	add sp, sp, #40
	pop {r4,r5}
	pop {r0}
	bx r0
_080B7AAC:
	.4byte gUnknown_0816FF20
_080B7AB0:
	.4byte gUnknown_08170238
_080B7AB4:
	.4byte gUnknown_08170240
_080B7AB8:
	.4byte gUnknown_08170248
_080B7ABC:
	.4byte gUnknown_08170250
_080B7AC0:
	.4byte gUnknown_08170258
_080B7AC4:
	.4byte 0x0000FFF9
_080B7AC8:
	.4byte gUnknown_0817025A
	THUMB_FUNC_END sub_080B79F4

