	THUMB_FUNC_START sub_080C17D4
sub_080C17D4: @ 0x080C17D4
	push {lr}
	ldr r1, _080C17FC  @ =gRam
	ldr r2, _080C1800  @ =0x00000961
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080C17F4
	add r2, r2, #4
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080C1804
_080C17F4:
	mov r0, #150
	lsl r0, r0, #4
	add r1, r1, r0
	b _080C1816
_080C17FC:
	.4byte gRam
_080C1800:
	.4byte 0x00000961
_080C1804:
	mov r2, #150
	lsl r2, r2, #4
	add r1, r1, r2
	mov r0, #0
	ldrsb r0, [r1, r0]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #239
	bls _080C181A
_080C1816:
	mov r0, #220
	strh r0, [r1]
_080C181A:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C17D4

	.byte 0x00
	.byte 0x00
