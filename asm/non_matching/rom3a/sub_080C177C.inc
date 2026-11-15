	THUMB_FUNC_START sub_080C177C
sub_080C177C: @ 0x080C177C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080C179C  @ =gRam
	ldr r3, _080C17A0  @ =0x00000952
	add r1, r2, r3
	mov r3, #0
	ldrsh r1, [r1, r3]
	ldr r3, _080C17A4  @ =0x00000958
	add r2, r2, r3
	mov r3, #0
	ldrsh r2, [r2, r3]
	bl sub_080BF174
	pop {r0}
	bx r0
_080C179C:
	.4byte gRam
_080C17A0:
	.4byte 0x00000952
_080C17A4:
	.4byte 0x00000958
	THUMB_FUNC_END sub_080C177C

