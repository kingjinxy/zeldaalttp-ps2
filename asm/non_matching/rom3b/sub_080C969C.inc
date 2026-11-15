	THUMB_FUNC_START sub_080C969C
sub_080C969C: @ 0x080C969C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #236
	add r1, r4, #0
	mov r2, #14
	bl sub_080C9AAC
	add r5, r0, #0
	cmp r5, #0
	blt _080C96EA
	lsl r0, r5, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	add r0, r4, #0
	mov r1, #110
	bl sub_080CF0AC
	ldr r2, _080C96F4  @ =gRam
	ldr r1, _080C96F8  @ =0x00000FA2
	add r0, r2, r1
	add r0, r5, r0
	mov r4, #0
	mov r3, #3
	strb r3, [r0]
	add r1, r1, #32
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #15
	strb r1, [r0]
	ldr r1, _080C96FC  @ =0x00000F52
	add r0, r2, r1
	add r0, r5, r0
	strb r4, [r0]
	ldr r0, _080C9700  @ =0x00001012
	add r2, r2, r0
	add r2, r5, r2
	strb r3, [r2]
_080C96EA:
	add r0, r5, #0
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C96F4:
	.4byte gRam
_080C96F8:
	.4byte 0x00000FA2
_080C96FC:
	.4byte 0x00000F52
_080C9700:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080C969C

