	THUMB_FUNC_START sub_080F16A0
sub_080F16A0: @ 0x080F16A0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _080F16F4  @ =gRam
	ldr r1, _080F16F8  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080F1708
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F16EE
	ldr r1, _080F16FC  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _080F16DA
	mov r0, #192
	lsl r0, r0, #1
	bl sub_080C95C0
_080F16DA:
	ldr r0, _080F1700  @ =0x00000F92
	add r2, r5, r0
	add r2, r6, r2
	ldr r1, _080F1704  @ =0x00000996
	add r0, r5, r1
	ldrb r0, [r0]
	lsr r0, r0, #4
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
_080F16EE:
	pop {r4-r6}
	pop {r0}
	bx r0
_080F16F4:
	.4byte gRam
_080F16F8:
	.4byte 0x00000FB2
_080F16FC:
	.4byte 0x00000FC2
_080F1700:
	.4byte 0x00000F92
_080F1704:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080F16A0

