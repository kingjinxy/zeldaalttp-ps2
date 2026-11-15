	THUMB_FUNC_START sub_080C65B0
sub_080C65B0: @ 0x080C65B0
	push {lr}
	ldr r1, _080C65D8  @ =gRam
	ldr r2, _080C65DC  @ =0x00000968
	add r0, r1, r2
	sub r2, r2, #22
	add r1, r1, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	asr r1, r0, #16
	mov r0, #255
	lsl r0, r0, #8
	and r1, r1, r0
	cmp r1, #0
	beq _080C65D2
	mov r1, #1
_080C65D2:
	add r0, r1, #0
	pop {r1}
	bx r1
_080C65D8:
	.4byte gRam
_080C65DC:
	.4byte 0x00000968
	THUMB_FUNC_END sub_080C65B0

