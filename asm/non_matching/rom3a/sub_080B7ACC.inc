	THUMB_FUNC_START sub_080B7ACC
sub_080B7ACC: @ 0x080B7ACC
	push {lr}
	ldr r2, _080B7B28  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r1, r2, r0
	mov r0, #0
	strh r0, [r1]
	ldr r0, _080B7B2C  @ =gUnknown_02002434
	ldrh r0, [r0]
	cmp r0, #0
	beq _080B7B14
	ldr r3, _080B7B30  @ =gUnknown_02006882
	ldrb r0, [r3]
	cmp r0, #0
	beq _080B7B14
	cmp r0, #2
	beq _080B7B14
	cmp r0, #6
	beq _080B7B14
	ldr r1, _080B7B34  @ =0x00000534
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080B7B08
	mov r0, #10
	and r0, r0, r1
	cmp r0, #0
	beq _080B7B14
_080B7B08:
	ldr r1, _080B7B38  @ =0x0000099D
	add r0, r2, r1
	mov r1, #0
	strb r1, [r0]
	mov r0, #9
	strb r0, [r3]
_080B7B14:
	ldr r1, _080B7B3C  @ =gUnknown_08170284
	ldr r0, _080B7B30  @ =gUnknown_02006882
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
_080B7B28:
	.4byte gRam
_080B7B2C:
	.4byte gUnknown_02002434
_080B7B30:
	.4byte gUnknown_02006882
_080B7B34:
	.4byte 0x00000534
_080B7B38:
	.4byte 0x0000099D
_080B7B3C:
	.4byte gUnknown_08170284
	THUMB_FUNC_END sub_080B7ACC

