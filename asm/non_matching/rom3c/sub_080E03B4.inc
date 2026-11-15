	THUMB_FUNC_START sub_080E03B4
sub_080E03B4: @ 0x080E03B4
	push {r4,lr}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r1, _080E03E8  @ =0x0000014F
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r2, _080E03EC  @ =gRam
	ldr r1, _080E03F0  @ =0x00000F52
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080E03F4  @ =0x00000FC2
	add r2, r2, r0
	add r4, r4, r2
	mov r0, #255
	strb r0, [r4]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E03E8:
	.4byte 0x0000014F
_080E03EC:
	.4byte gRam
_080E03F0:
	.4byte 0x00000F52
_080E03F4:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E03B4

