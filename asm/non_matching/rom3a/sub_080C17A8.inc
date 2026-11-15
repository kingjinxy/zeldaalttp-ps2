	THUMB_FUNC_START sub_080C17A8
sub_080C17A8: @ 0x080C17A8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080C17CC  @ =gRam
	ldr r3, _080C17D0  @ =0x00000A2C
	add r1, r2, r3
	mov r3, #0
	ldrsh r1, [r1, r3]
	mov r3, #163
	lsl r3, r3, #4
	add r2, r2, r3
	mov r3, #0
	ldrsh r2, [r2, r3]
	bl sub_080BF174
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C17CC:
	.4byte gRam
_080C17D0:
	.4byte 0x00000A2C
	THUMB_FUNC_END sub_080C17A8

