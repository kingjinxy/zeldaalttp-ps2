	THUMB_FUNC_START sub_08114418
sub_08114418: @ 0x08114418
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, #214
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811443E
	ldr r1, _08114444  @ =gRam
	ldr r0, _08114448  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0811443E:
	pop {r4}
	pop {r0}
	bx r0
_08114444:
	.4byte gRam
_08114448:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08114418

