	THUMB_FUNC_START sub_080FD684
sub_080FD684: @ 0x080FD684
	push {r4,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #112
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080FD6D6
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080FD6DC  @ =gRam
	ldr r0, _080FD6E0  @ =0x00000964
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #28
	strh r0, [r1]
	ldr r3, _080FD6E4  @ =0x00000ED2
	add r0, r2, r3
	add r0, r4, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080FD6E8  @ =0x00000EF2
	add r0, r2, r1
	add r0, r4, r0
	ldr r3, _080FD6EC  @ =0x00000965
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080FD6F0  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	ldr r3, _080FD6F4  @ =0x00001172
	add r2, r2, r3
	add r2, r4, r2
	strb r1, [r2]
_080FD6D6:
	pop {r4}
	pop {r0}
	bx r0
_080FD6DC:
	.4byte gRam
_080FD6E0:
	.4byte 0x00000964
_080FD6E4:
	.4byte 0x00000ED2
_080FD6E8:
	.4byte 0x00000EF2
_080FD6EC:
	.4byte 0x00000965
_080FD6F0:
	.4byte 0x00000FC2
_080FD6F4:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080FD684

