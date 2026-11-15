	THUMB_FUNC_START sub_080C500C
sub_080C500C: @ 0x080C500C
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _080C502C  @ =gRam
	mov r3, #161
	lsl r3, r3, #4
	add r1, r0, r3
	ldr r3, _080C5030  @ =0x000010F2
	add r0, r0, r3
	add r0, r2, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	cmp r1, r0
	beq _080C5034
	mov r0, #0
	b _080C503E
_080C502C:
	.4byte gRam
_080C5030:
	.4byte 0x000010F2
_080C5034:
	add r0, r2, #0
	bl sub_080C46EC
	lsl r0, r0, #24
	lsr r0, r0, #24
_080C503E:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C500C

	.byte 0x00
	.byte 0x00
