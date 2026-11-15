	THUMB_FUNC_START sub_080C7AB8
sub_080C7AB8: @ 0x080C7AB8
	push {r4,lr}
	add r3, r1, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r3, r3, #24
	lsr r3, r3, #24
	ldr r1, _080C7AF0  @ =gRam
	mov r4, #151
	lsl r4, r4, #4
	add r2, r1, r4
	strb r3, [r2]
	ldr r2, _080C7AF4  @ =0x00000D84
	add r1, r1, r2
	add r1, r0, r1
	ldrb r2, [r1]
	mov r1, #240
	and r1, r1, r2
	lsr r1, r1, #2
	add r1, r1, r3
	lsl r1, r1, #25
	lsr r1, r1, #24
	bl sub_080C7490
	lsl r0, r0, #24
	lsr r0, r0, #24
	pop {r4}
	pop {r1}
	bx r1
_080C7AF0:
	.4byte gRam
_080C7AF4:
	.4byte 0x00000D84
	THUMB_FUNC_END sub_080C7AB8

