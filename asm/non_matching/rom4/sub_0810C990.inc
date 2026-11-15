	THUMB_FUNC_START sub_0810C990
sub_0810C990: @ 0x0810C990
	push {r4,r5,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #154
	mov r2, #8
	bl sub_080C9AAC
	add r5, r0, #0
	cmp r5, #0
	blt _0810C9D0
	lsl r4, r5, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CAE50
	add r0, r4, #0
	bl sub_080E9A10
	ldr r2, _0810C9D8  @ =gRam
	ldr r0, _0810C9DC  @ =0x000011B2
	add r1, r2, r0
	add r1, r5, r1
	ldrb r3, [r1]
	mov r0, #240
	and r0, r0, r3
	strb r0, [r1]
	ldr r0, _0810C9E0  @ =0x00000EA5
	add r2, r2, r0
	add r2, r5, r2
	mov r0, #5
	strb r0, [r2]
_0810C9D0:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810C9D8:
	.4byte gRam
_0810C9DC:
	.4byte 0x000011B2
_0810C9E0:
	.4byte 0x00000EA5
	THUMB_FUNC_END sub_0810C990

