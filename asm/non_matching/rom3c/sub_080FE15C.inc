	THUMB_FUNC_START sub_080FE15C
sub_080FE15C: @ 0x080FE15C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080ED830
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FE1D8
	ldr r2, _080FE1E0  @ =gRam
	ldr r1, _080FE1E4  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #80
	strb r1, [r0]
	ldr r3, _080FE1E8  @ =0x00001172
	add r1, r2, r3
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080FE1EC  @ =0x00000F92
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	mov r3, #172
	lsl r3, r3, #4
	add r1, r2, r3
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r1, _080FE1F0  @ =0x00000F82
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #112
	strb r1, [r0]
	mov r1, #0
	sub r3, r3, #230
	add r0, r2, r3
	ldrh r0, [r0]
	cmp r0, #173
	bne _080FE1B6
	mov r1, #1
_080FE1B6:
	cmp r1, #0
	beq _080FE1D8
	ldr r0, _080FE1F4  @ =0x00001022
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	lsl r0, r0, #2
	strb r0, [r1]
	ldr r1, _080FE1F8  @ =0x00000EA5
	add r2, r2, r1
	add r2, r5, r2
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r1, #7
	orr r0, r0, r1
	strb r0, [r2]
_080FE1D8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FE1E0:
	.4byte gRam
_080FE1E4:
	.4byte 0x00000FC2
_080FE1E8:
	.4byte 0x00001172
_080FE1EC:
	.4byte 0x00000F92
_080FE1F0:
	.4byte 0x00000F82
_080FE1F4:
	.4byte 0x00001022
_080FE1F8:
	.4byte 0x00000EA5
	THUMB_FUNC_END sub_080FE15C

