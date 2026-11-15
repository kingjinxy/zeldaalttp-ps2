	THUMB_FUNC_START sub_080E9C08
sub_080E9C08: @ 0x080E9C08
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _080E9C54  @ =gRam
	ldr r1, _080E9C58  @ =0x00001012
	add r0, r2, r1
	add r3, r5, r0
	mov r1, #130
	strb r1, [r3]
	ldr r4, _080E9C5C  @ =0x00001172
	add r0, r2, r4
	add r0, r5, r0
	strb r1, [r0]
	ldr r1, _080E9C60  @ =0x00001032
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #73
	strb r1, [r0]
	ldr r4, _080E9C64  @ =0x00001002
	add r0, r2, r4
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080E9C6C
	add r0, r5, #0
	bl sub_080C4F98
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E9CD2
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	ldr r0, _080E9C68  @ =0x00000177
	bl sub_080C95C0
	b _080E9CD2
	.byte 0x00
	.byte 0x00
_080E9C54:
	.4byte gRam
_080E9C58:
	.4byte 0x00001012
_080E9C5C:
	.4byte 0x00001172
_080E9C60:
	.4byte 0x00001032
_080E9C64:
	.4byte 0x00001002
_080E9C68:
	.4byte 0x00000177
_080E9C6C:
	mov r1, #0
	cmp r0, #15
	bls _080E9CC4
	cmp r0, #16
	bne _080E9CC0
	ldr r4, _080E9CF8  @ =0x000011B2
	add r0, r2, r4
	add r0, r5, r0
	strb r1, [r0]
	ldr r1, _080E9CFC  @ =0x00000FA2
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #6
	strb r1, [r0]
	ldr r4, _080E9D00  @ =0x00000FC2
	add r0, r2, r4
	add r0, r5, r0
	mov r1, #15
	strb r1, [r0]
	ldrb r0, [r3]
	add r0, r0, #4
	strb r0, [r3]
	add r0, r5, #0
	mov r1, #21
	bl sub_080CF0AC
	mov r0, #77
	add r1, r5, #0
	bl sub_080CA538
	cmp r0, #0
	blt _080E9CBE
	lsl r4, r0, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CAE50
	add r0, r4, #0
	mov r1, #6
	bl sub_080C6E84
_080E9CBE:
	mov r1, #1
_080E9CC0:
	cmp r1, #0
	beq _080E9CD2
_080E9CC4:
	ldr r1, _080E9D04  @ =gRam
	ldr r0, _080E9D08  @ =0x00001002
	add r1, r1, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080E9CD2:
	ldr r2, _080E9D04  @ =gRam
	ldr r4, _080E9D0C  @ =0x00001052
	add r1, r2, r4
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080E9D10  @ =0x00000F92
	add r2, r2, r1
	add r2, r5, r2
	mov r1, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #26
	add r0, r0, #3
	strb r0, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
_080E9CF8:
	.4byte 0x000011B2
_080E9CFC:
	.4byte 0x00000FA2
_080E9D00:
	.4byte 0x00000FC2
_080E9D04:
	.4byte gRam
_080E9D08:
	.4byte 0x00001002
_080E9D0C:
	.4byte 0x00001052
_080E9D10:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080E9C08

