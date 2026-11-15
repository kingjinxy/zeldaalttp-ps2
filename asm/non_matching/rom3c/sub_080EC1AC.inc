	THUMB_FUNC_START sub_080EC1AC
sub_080EC1AC: @ 0x080EC1AC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080EC1D4  @ =gRam
	ldr r2, _080EC1D8  @ =0x00001052
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsr r1, r1, #2
	mov r2, #3
	and r1, r1, r2
	lsl r1, r1, #4
	ldr r2, _080EC1DC  @ =gUnknown_081783C0
	add r1, r1, r2
	mov r2, #2
	bl sub_080C9480
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EC1D4:
	.4byte gRam
_080EC1D8:
	.4byte 0x00001052
_080EC1DC:
	.4byte gUnknown_081783C0
	THUMB_FUNC_END sub_080EC1AC

