	THUMB_FUNC_START sub_08133594
sub_08133594: @ 0x08133594
	push {lr}
	ldr r0, _081335B4  @ =gRam
	ldr r2, _081335B8  @ =0x00000C85
	add r1, r0, r2
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _081335BC
	mov r0, #2
	strb r0, [r1]
	bl sub_08131AF0
	b _081335C0
	.byte 0x00
	.byte 0x00
_081335B4:
	.4byte gRam
_081335B8:
	.4byte 0x00000C85
_081335BC:
	bl sub_0812F95C
_081335C0:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08133594

