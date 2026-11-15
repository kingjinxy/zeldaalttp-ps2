	THUMB_FUNC_START sub_080F4560
sub_080F4560: @ 0x080F4560
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080F1708
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F45A8
	add r0, r4, #0
	bl sub_080C90F4
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r3, _080F45B0  @ =gRam
	ldr r2, _080F45B4  @ =0x00001082
	add r1, r3, r2
	add r1, r4, r1
	mov r2, #3
	eor r0, r0, r2
	strb r0, [r1]
	ldr r1, _080F45B8  @ =gUnknown_08179640
	ldr r0, _080F45BC  @ =0x00000F52
	add r3, r3, r0
	add r3, r4, r3
	ldrb r0, [r3]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080F45A8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F45B0:
	.4byte gRam
_080F45B4:
	.4byte 0x00001082
_080F45B8:
	.4byte gUnknown_08179640
_080F45BC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F4560

