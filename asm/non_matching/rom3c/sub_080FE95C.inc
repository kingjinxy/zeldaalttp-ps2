	THUMB_FUNC_START sub_080FE95C
sub_080FE95C: @ 0x080FE95C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #136
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080FE9F8
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r3, _080FE9D8  @ =gRam
	ldr r1, _080FE9DC  @ =0x00000F52
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #5
	strb r1, [r0]
	ldr r0, _080FE9E0  @ =0x00000D84
	add r1, r3, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #253
	and r0, r0, r2
	strb r0, [r1]
	ldr r1, _080FE9E4  @ =0x00000EA5
	add r2, r3, r1
	add r2, r4, r2
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r1, #7
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, _080FE9E8  @ =0x00001022
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080FE9EC  @ =0x00000FC2
	add r0, r3, r1
	add r1, r4, r0
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080FE9F0  @ =0x000010B2
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	ldr r0, _080FE9F4  @ =0x00001132
	add r3, r3, r0
	add r3, r4, r3
	ldrb r1, [r3]
	mov r0, #64
	orr r0, r0, r1
	strb r0, [r3]
	add r0, r4, #0
	b _080FE9FC
	.byte 0x00
	.byte 0x00
_080FE9D8:
	.4byte gRam
_080FE9DC:
	.4byte 0x00000F52
_080FE9E0:
	.4byte 0x00000D84
_080FE9E4:
	.4byte 0x00000EA5
_080FE9E8:
	.4byte 0x00001022
_080FE9EC:
	.4byte 0x00000FC2
_080FE9F0:
	.4byte 0x000010B2
_080FE9F4:
	.4byte 0x00001132
_080FE9F8:
	mov r0, #1
	neg r0, r0
_080FE9FC:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080FE95C

	.byte 0x00
	.byte 0x00
