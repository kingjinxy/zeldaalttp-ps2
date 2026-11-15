	THUMB_FUNC_START sub_08111C54
sub_08111C54: @ 0x08111C54
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _08111C80  @ =0x00000101
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _08111C78
	ldr r1, _08111C84  @ =gRam
	ldr r0, _08111C88  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08111C78:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08111C80:
	.4byte 0x00000101
_08111C84:
	.4byte gRam
_08111C88:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08111C54

