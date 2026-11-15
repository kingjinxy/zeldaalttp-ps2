	THUMB_FUNC_START sub_080D374C
sub_080D374C: @ 0x080D374C
	push {r4,lr}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C5080
	add r0, r4, #0
	mov r1, #230
	mov r2, sp
	bl sub_080C9164
	ldr r1, _080D3790  @ =gRam
	ldr r0, _080D3794  @ =0x00001770
	add r2, r1, r0
	mov r0, #0
	strb r0, [r2]
	ldr r2, _080D3798  @ =0x00000FB2
	add r0, r1, r2
	add r4, r4, r0
	mov r0, #1
	strb r0, [r4]
	ldr r0, _080D379C  @ =0x00001662
	add r1, r1, r0
	ldrb r2, [r1]
	mov r0, #32
	orr r0, r0, r2
	strb r0, [r1]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D3790:
	.4byte gRam
_080D3794:
	.4byte 0x00001770
_080D3798:
	.4byte 0x00000FB2
_080D379C:
	.4byte 0x00001662
	THUMB_FUNC_END sub_080D374C

