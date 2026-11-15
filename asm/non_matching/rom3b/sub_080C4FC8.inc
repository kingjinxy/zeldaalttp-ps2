	THUMB_FUNC_START sub_080C4FC8
sub_080C4FC8: @ 0x080C4FC8
	push {lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _080C4FF0  @ =gRam
	ldr r1, _080C4FF4  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	add r0, r3, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	ldr r1, _080C4FF8  @ =0x000010C2
	add r2, r2, r1
	add r2, r3, r2
	ldrb r1, [r2]
	orr r0, r0, r1
	cmp r0, #0
	beq _080C4FFC
	mov r0, #0
	b _080C5006
_080C4FF0:
	.4byte gRam
_080C4FF4:
	.4byte 0x00000996
_080C4FF8:
	.4byte 0x000010C2
_080C4FFC:
	add r0, r3, #0
	bl sub_080C500C
	lsl r0, r0, #24
	lsr r0, r0, #24
_080C5006:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C4FC8

	.byte 0x00
	.byte 0x00
